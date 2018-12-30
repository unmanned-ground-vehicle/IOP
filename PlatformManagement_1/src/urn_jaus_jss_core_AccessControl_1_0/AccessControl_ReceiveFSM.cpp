#include "urn_jaus_jss_core_AccessControl_1_0/AccessControl_ReceiveFSM.h"

using namespace JTS;

namespace urn_jaus_jss_core_AccessControl_1_0
{

AccessControl_ReceiveFSM::AccessControl_ReceiveFSM(urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM, urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM)
: timeout(0)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new AccessControl_ReceiveFSMContext(*this);

	this->pTransport_ReceiveFSM = pTransport_ReceiveFSM;
	this->pEvents_ReceiveFSM = pEvents_ReceiveFSM;
}



AccessControl_ReceiveFSM::~AccessControl_ReceiveFSM() 
{
	delete context;
}

void AccessControl_ReceiveFSM::setupNotifications()
{
	pEvents_ReceiveFSM->registerNotification("Receiving_Ready", ieHandler, "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Events_ReceiveFSM");
	pEvents_ReceiveFSM->registerNotification("Receiving", ieHandler, "InternalStateChange_To_AccessControl_ReceiveFSM_Receiving_Ready_NotControlled", "Events_ReceiveFSM");
	registerNotification("Receiving_Ready_NotControlled", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "AccessControl_ReceiveFSM");
	registerNotification("Receiving_Ready_Controlled", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "AccessControl_ReceiveFSM");
	registerNotification("Receiving_Ready", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "AccessControl_ReceiveFSM");
	registerNotification("Receiving", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving", "AccessControl_ReceiveFSM");

}

void AccessControl_ReceiveFSM::ResetTimerAction()
{
	timeout=0;
}

void AccessControl_ReceiveFSM::SendAction(std::string arg0, Receive::Body::ReceiveRec transportData)
{
	JausAddress client(
		transportData.getSrcSubsystemID(),
		transportData.getSrcNodeID(),
		transportData.getSrcComponentID());

	if (arg0 == "ReportAuthority") {
		ReportAuthority rauth;
		rauth.getBody()->getReportAuthorityRec()->setAuthorityCode(currentAuthority);
		sendJausMessage(rauth, client);

	} else if(arg0 == "ReportTimeout") {
		ReportTimeout rtout;
		rtout.getBody()->getReportTimoutRec()->setTimeout(timeout);
		sendJausMessage(rtout, client);

	} else if (arg0 == "ReportControl") {
		ReportControl rctrl;
		rctrl.getBody()->getReportControlRec()->setSubsystemID(ctrlSubsystemID);
		rctrl.getBody()->getReportControlRec()->setNodeID(ctrlNodeID);
		rctrl.getBody()->getReportControlRec()->setComponentID(ctrlComponentID);
		sendJausMessage(rctrl, client);
	}
}

void AccessControl_ReceiveFSM::SendAction(std::string arg0, std::string arg1)
{
	if (arg0 == "RejectControl" && arg1 == "CONTROL_RELEASED") {
		JausAddress client(ctrlSubsystemID, ctrlNodeID, ctrlComponentID);
		currentAuthority = DEFAULT_AUTHORITY;
		ctrlSubsystemID = ctrlNodeID = ctrlComponentID = 0;
	
		RejectControl rctrl;
		rctrl.getBody()->getRejectControlRec()->setResponseCode(0);
	
		sendJausMessage(rctrl, client);
	}
}

void AccessControl_ReceiveFSM::SendAction(std::string arg0, std::string arg1, Receive::Body::ReceiveRec transportData)
{
	JausAddress client(transportData.getSrcSubsystemID(),
		transportData.getSrcNodeID(),
		transportData.getSrcComponentID());

	if (arg0 == "ConfirmControl") {
		ConfirmControl cctrl;
		if (arg1 == "CONTROL_ACCEPTED")
			cctrl.getBody()->getConfirmControlRec()->setResponseCode(0); //CONTROL_ACCEPTED
		else if (arg1 == "NOT_AVAILABLE")
			cctrl.getBody()->getConfirmControlRec()->setResponseCode(1); //NOT_AVAILABLE
		else if (arg1 == "INSUFFICIENT_AUTHORITY")
			cctrl.getBody()->getConfirmControlRec()->setResponseCode(2); //INSUFFICIENT_AUTHORITY

		sendJausMessage(cctrl, client);
	} else if (arg0 == "RejectControl") {
		RejectControl rctrl;
		if (arg1 == "CONTROL_RELEASED") {
			if (isControllingClient(transportData)){
				currentAuthority = DEFAULT_AUTHORITY;
				ctrlSubsystemID = ctrlNodeID = ctrlComponentID = 0;				
			}

			rctrl.getBody()->getRejectControlRec()->setResponseCode(0); //CONTROL_RELEASED
		}
		else if (arg1 == "NOT_AVAILABLE")
			rctrl.getBody()->getRejectControlRec()->setResponseCode(1); //NOT_AVAILABLE

		sendJausMessage(rctrl, client);
	}

}

void AccessControl_ReceiveFSM::SetAuthorityAction(RequestControl msg)
{
	currentAuthority = msg.getBody()->getRequestControlRec()->getAuthorityCode();
}

void AccessControl_ReceiveFSM::SetAuthorityAction(SetAuthority msg)
{
	currentAuthority = msg.getBody()->getAuthorityRec()->getAuthorityCode();
}

void AccessControl_ReceiveFSM::StoreAddressAction(Receive::Body::ReceiveRec transportData)
{
	ctrlSubsystemID = transportData.getSrcSubsystemID();
	ctrlNodeID = transportData.getSrcNodeID();
	ctrlComponentID = transportData.getSrcComponentID();
}

void AccessControl_ReceiveFSM::initAction()
{
	ctrlSubsystemID = 0;
	ctrlNodeID = 0;
	ctrlComponentID = 0;
	currentAuthority = DEFAULT_AUTHORITY;
}



bool AccessControl_ReceiveFSM::isAuthorityValid(SetAuthority msg)
{
	jUnsignedByte auth = msg.getBody()->getAuthorityRec()->getAuthorityCode();
	return auth >= 0 || auth <= 255;
}
bool AccessControl_ReceiveFSM::isControlAvailable()
{
	return true;
}
bool AccessControl_ReceiveFSM::isControllingClient(Receive::Body::ReceiveRec transportData)
{
	return 
	transportData.getSrcSubsystemID() == ctrlSubsystemID && 
	transportData.getSrcNodeID() == ctrlNodeID &&
	transportData.getSrcComponentID() == ctrlComponentID;
}
bool AccessControl_ReceiveFSM::isCurrentAuthorityLess(RequestControl msg)
{
	return currentAuthority < msg.getBody()->getRequestControlRec()->getAuthorityCode();
}
bool AccessControl_ReceiveFSM::isDefaultAuthorityGreater(RequestControl msg)
{
	return DEFAULT_AUTHORITY > msg.getBody()->getRequestControlRec()->getAuthorityCode();
}

};

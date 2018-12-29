

#include "urn_jaus_jss_core_Discovery_1_0/Discovery_ReceiveFSM.h"




using namespace JTS;

namespace urn_jaus_jss_core_Discovery_1_0
{

Discovery_ReceiveFSM::Discovery_ReceiveFSM(urn_jaus_jss_core_Transport_1_0::Transport_ReceiveFSM* pTransport_ReceiveFSM, urn_jaus_jss_core_Events_1_0::Events_ReceiveFSM* pEvents_ReceiveFSM)
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new Discovery_ReceiveFSMContext(*this);

	this->pTransport_ReceiveFSM = pTransport_ReceiveFSM;
	this->pEvents_ReceiveFSM = pEvents_ReceiveFSM;
}



Discovery_ReceiveFSM::~Discovery_ReceiveFSM() 
{
	delete context;
}

void Discovery_ReceiveFSM::setupNotifications()
{
	pEvents_ReceiveFSM->registerNotification("Receiving_Ready", ieHandler, "InternalStateChange_To_Discovery_ReceiveFSM_Receiving_Ready", "Events_ReceiveFSM");
	pEvents_ReceiveFSM->registerNotification("Receiving", ieHandler, "InternalStateChange_To_Discovery_ReceiveFSM_Receiving_Ready", "Events_ReceiveFSM");
	registerNotification("Receiving_Ready", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving_Ready", "Discovery_ReceiveFSM");
	registerNotification("Receiving", pEvents_ReceiveFSM->getHandler(), "InternalStateChange_To_Events_ReceiveFSM_Receiving", "Discovery_ReceiveFSM");

}

void Discovery_ReceiveFSM::PublishServicesAction(RegisterServices msg, Receive::Body::ReceiveRec transportData)
{
	RegisterServices::RegisterServicesBody::ServiceList* srv_l = msg.getRegisterServicesBody()->getServiceList();
	int N = srv_l->getNumberOfElements();
	std::cout << "Registering " << N << " services" << std::endl;
	for(int i = 0; i < N; i++) {
		RegisterServices::RegisterServicesBody::ServiceList::ServiceRec* rec = srv_l->getElement(i);
		ServiceRec srvinfo;
		srvinfo.setURI(rec->getURI());
		srvinfo.setMajorVersionNumber(rec->getMajorVersionNumber());
		srvinfo.setMinorVersionNumber(rec->getMinorVersionNumber());

		registeredSrvs[transportData.getSrcComponentID()][transportData.getSrcNodeID()].push_back(srvinfo);
	}
}

void Discovery_ReceiveFSM::SendAction(std::string arg0, Receive::Body::ReceiveRec transportData)
{
	std::cout << "[Discovery] Triggering " << arg0 << std::endl;
	JausAddress server(transportData.getSrcSubsystemID(), transportData.getSrcNodeID(), transportData.getSrcComponentID());

	if (arg0 == "ReportIdentification") {
		ReportIdentification rid;
		rid.getBody()->getReportIdentificationRec()->setQueryType(2); // Subsytem identification
		rid.getBody()->getReportIdentificationRec()->setType(10001); // Vehicle
		if(rid.getBody()->getReportIdentificationRec()->setIdentification("Centaur") == 1) // TODO: Separate Subsystem Name
			std::cout << "Successfully set ID" << std::endl;
		 else std::cout << "Cannot set ID :(" << std::endl;

		 sendJausMessage(rid, server);
	} else if (arg0 == "ReportConfiguration") {
		ReportConfiguration rcfg;

		ReportConfiguration::Body::NodeList::NodeSeq::ComponentList::ComponentRec nav_rep, plt_mgmt;
		plt_mgmt.setComponentID(1);
		plt_mgmt.setInstanceID(0); // non legacy component

		nav_rep.setComponentID(2);
		nav_rep.setInstanceID(0); // non legacy component

		ReportConfiguration::Body::NodeList::NodeSeq elem;
		elem.getNodeRec()->setNodeID(1); // Single Node
		elem.getComponentList()->addElement(nav_rep); // Nav & Reorting Component
		elem.getComponentList()->addElement(plt_mgmt); // Platform Management Component

		rcfg.getBody()->getNodeList()->addElement(elem);

		sendJausMessage(rcfg, server);
	} else if (arg0 == "ReportSubsystemList") {
		ReportSubsystemList rsyslist;

		ReportSubsystemList::Body::SubsystemList::SubsystemRec rec;
		rec.setSubsystemID(126); // TODO: Separate Subsystem ID
		rec.setNodeID(1);
		rec.setComponentID(1);
		rsyslist.getBody()->getSubsystemList()->addElement(rec);

		sendJausMessage(rsyslist, server);
	} else if (arg0 == "ReportServices") {
		ReportServices rsrv;

		ReportServices::Body::NodeList nlist;
		for(auto const& nodeMap: registeredSrvs) {
			ReportServices::Body::NodeList::NodeSeq nseq;
			nseq.getNodeRec()->setNodeID(nodeMap.first);

			ReportServices::Body::NodeList::NodeSeq::ComponentList clist;

			for(auto const& compMap: nodeMap.second) {

				ReportServices::Body::NodeList::NodeSeq::ComponentList::ComponentSeq cseq;
				cseq.getComponentRec()->setComponentID(compMap.first);
				ReportServices::Body::NodeList::NodeSeq::ComponentList::ComponentSeq::ServiceList slist;
				for(auto const& srvrec: compMap.second) {
					slist.addElement(srvrec);
				}

				cseq.setServiceList(slist);
				clist.addElement(cseq);				
			}

			nseq.setComponentList(clist);
		}

		rsrv.getBody()->setNodeList(nlist);

		sendJausMessage(rsrv, server);
	} else {
		std::cout << "[Discovery] Unknown arg: " << arg0 << std::endl;
	}
}





};

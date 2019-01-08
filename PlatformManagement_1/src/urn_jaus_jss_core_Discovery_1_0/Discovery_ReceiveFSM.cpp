

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

	// Register Available Services
	ServiceRec srec;
	srec.setMajorVersionNumber(1);
	srec.setMinorVersionNumber(0);
	
	// Services in Platform Management Component
	srec.setURI(TRNS_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_PLT_MGMT].push_back(ServiceRec(srec));
	srec.setURI(EVNT_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_PLT_MGMT].push_back(ServiceRec(srec));
	srec.setURI(ACTR_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_PLT_MGMT].push_back(ServiceRec(srec));
	srec.setURI(DISC_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_PLT_MGMT].push_back(ServiceRec(srec));
	srec.setURI(LIVE_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_PLT_MGMT].push_back(ServiceRec(srec));

	// Services in Navigation & Reporting Component
	srec.setURI(TRNS_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(EVNT_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(ACTR_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(MGMT_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(LIVE_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));

	srec.setURI(WPDR_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(WPLS_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(VSTS_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(LPOS_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));
	srec.setURI(PRDR_NAME_STR);
	registeredSrvs[NODE_ID][COMP_ID_NAV_REP].push_back(ServiceRec(srec));

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
		std::cout << "Registered service: " << rec->getURI() << std::endl;
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
		if(rid.getBody()->getReportIdentificationRec()->setIdentification(SUBSYSTEM_NAME_STR) == 0)
			std::cout << "Successfully set subsystem name" << std::endl;
		 else std::cout << "Cannot set subsystem name :(" << std::endl;

		 sendJausMessage(rid, server);
	} else if (arg0 == "ReportConfiguration") {
		ReportConfiguration rcfg;

		ReportConfiguration::Body::NodeList::NodeSeq::ComponentList::ComponentRec nav_rep, plt_mgmt;
		plt_mgmt.setComponentID(COMP_ID_PLT_MGMT);
		plt_mgmt.setInstanceID(0); // non legacy component

		nav_rep.setComponentID(COMP_ID_NAV_REP);
		nav_rep.setInstanceID(0); // non legacy component

		ReportConfiguration::Body::NodeList::NodeSeq elem;
		elem.getNodeRec()->setNodeID(NODE_ID); // Single Node
		elem.getComponentList()->addElement(nav_rep); // Nav & Reorting Component
		elem.getComponentList()->addElement(plt_mgmt); // Platform Management Component

		rcfg.getBody()->getNodeList()->addElement(elem);

		sendJausMessage(rcfg, server);
	} else if (arg0 == "ReportSubsystemList") {
		ReportSubsystemList rsyslist;

		ReportSubsystemList::Body::SubsystemList::SubsystemRec rec;
		rec.setSubsystemID(SUBSYSTEM_ID);
		rec.setNodeID(NODE_ID);
		rec.setComponentID(COMP_ID_PLT_MGMT);
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
			nlist.addElement(nseq);
		}

		rsrv.getBody()->setNodeList(nlist);

		sendJausMessage(rsrv, server);
	} else {
		std::cout << "[Discovery] Unknown arg: " << arg0 << std::endl;
	}
}





};

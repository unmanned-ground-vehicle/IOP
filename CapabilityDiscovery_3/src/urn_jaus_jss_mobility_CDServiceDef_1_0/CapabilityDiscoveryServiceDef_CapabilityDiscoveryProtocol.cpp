

#include "urn_jaus_jss_mobility_CDServiceDef_1_0/CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_CDServiceDef_1_0
{



CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocolContext(*this);

}



CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::~CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol() 
{
	delete context;
}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::setupNotifications()
{

}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::SendAction(std::string arg0, Receive::Body::ReceiveRec transportData)
{
	
           std::cout<<"ReportIdentification";
        
}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::broadcastQueryIdentificationAction()
{
	/// Insert User Code HERE
	QueryIdentification qi;
        qi.getBody()->getQueryIdentificationRec()->setQueryType(2);
        sendJausMessage(qi, JausAddress(0xffff, 0xff, 0xff));
}





};

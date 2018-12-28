

#include "PlatformManagement.h"
#include "JausUtils.h"

using namespace JTS;
using namespace urn_jaus_jss_core_Transport_1_0;
using namespace urn_jaus_jss_core_Events_1_0;
using namespace urn_jaus_jss_core_AccessControl_1_0;
using namespace urn_jaus_jss_core_Liveness_1_0;
using namespace urn_jaus_jss_core_Discovery_1_0;


PlatformManagement::PlatformManagement(unsigned int subsystem, unsigned short node, unsigned short component)
{
	jausRouter = new JausRouter(JausAddress(subsystem, node, component), ieHandler);
	
	/// Instantiate services
	TransportService* pTransportService = new TransportService(jausRouter);
	EventsService* pEventsService = new EventsService(jausRouter, pTransportService);
	AccessControlService* pAccessControlService = new AccessControlService(jausRouter, pTransportService, pEventsService);
	LivenessService* pLivenessService = new LivenessService(jausRouter, pTransportService, pEventsService);
	DiscoveryService* pDiscoveryService = new DiscoveryService(jausRouter, pTransportService, pEventsService);
	
	
	/// Add all the Services for the Component
	serviceList.push_back(pTransportService);
	serviceList.push_back(pEventsService);
	serviceList.push_back(pAccessControlService);
	serviceList.push_back(pLivenessService);
	serviceList.push_back(pDiscoveryService);
	
}

PlatformManagement::~PlatformManagement()
{
	Service* service;
	
	while (!serviceList.empty())
	{
		service = serviceList.back();
		serviceList.pop_back();
		
		delete service;
	}
	
	delete jausRouter;
}


void PlatformManagement::startComponent()
{
	Service* service;
	
	jausRouter->start();
	this->start();
	
	for (unsigned int i = 0; i < serviceList.size(); i++)
	{
		 service = serviceList.at(i);
		 service->start();
	}
}


void PlatformManagement::shutdownComponent()
{
	Service* service;
	
	for (unsigned int i = 0; i < serviceList.size(); i++)
	{
		 service = serviceList.at(i);
		 service->stop();
	}
	
	this->stop();
	jausRouter->stop();
}

void PlatformManagement::processInternalEvent(InternalEvent *ie)
{
    bool done = false;
	
	//
	// When a component receives an internal event, it passes it
	// to the services to handling, children services first.  If the
	// event is not processed by normal transitions, it's passed
	// again to the services (children first) for default transitions.
	// A given event may only be processed by at most one service.
	//
	for (unsigned int i = serviceList.size(); i>0; i--)
	{
		if (!done) done = serviceList.at(i-1)->processTransitions(ie);
	}
	for (unsigned int i = serviceList.size(); i>0; i--)
	{
		if (!done) done = serviceList.at(i-1)->defaultTransitions(ie);
	}
}




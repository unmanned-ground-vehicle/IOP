

#include "NavigationAndReporting.h"
#include "JausUtils.h"

using namespace JTS;
using namespace urn_jaus_jss_mobility_StartNav_1_0;
using namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0;
using namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0;
using namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0;
using namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0;


NavigationAndReporting::NavigationAndReporting(unsigned int subsystem, unsigned short node, unsigned short component)
{
	jausRouter = new JausRouter(JausAddress(subsystem, node, component), ieHandler);
	
	/// Instantiate services
	StartNavService* pStartNavService = new StartNavService(jausRouter);
	WaypointDriverService* pWaypointDriverService = new WaypointDriverService(jausRouter);
	VelocityStateSensorService* pVelocityStateSensorService = new VelocityStateSensorService(jausRouter);
	LocalPoseSensorService* pLocalPoseSensorService = new LocalPoseSensorService(jausRouter);
	LocalWaypointListDriverService* pLocalWaypointListDriverService = new LocalWaypointListDriverService(jausRouter);
	
	
	/// Add all the Services for the Component
	serviceList.push_back(pStartNavService);
	serviceList.push_back(pWaypointDriverService);
	serviceList.push_back(pVelocityStateSensorService);
	serviceList.push_back(pLocalPoseSensorService);
	serviceList.push_back(pLocalWaypointListDriverService);
	
}

NavigationAndReporting::~NavigationAndReporting()
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


void NavigationAndReporting::startComponent()
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


void NavigationAndReporting::shutdownComponent()
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

void NavigationAndReporting::processInternalEvent(InternalEvent *ie)
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




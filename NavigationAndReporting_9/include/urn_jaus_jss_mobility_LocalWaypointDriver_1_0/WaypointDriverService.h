

#ifndef WAYPOINTDRIVERSERVICE_H
#define WAYPOINTDRIVERSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "WaypointDriver_LocalWaypontDriverProtocol.h"


namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0
{
	
class DllExport WaypointDriverService : public JTS::Service
{
public:
	WaypointDriverService( JTS::JausRouter* jausRouter );
	virtual ~WaypointDriverService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	WaypointDriver_LocalWaypontDriverProtocol* pWaypointDriver_LocalWaypontDriverProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // WAYPOINTDRIVERSERVICE_H



#ifndef LOCALWAYPOINTLISTDRIVERSERVICE_H
#define LOCALWAYPOINTLISTDRIVERSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "LocalWaypointListDriver_LocalWaypointListDriverProtocol.h"


namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{
	
class DllExport LocalWaypointListDriverService : public JTS::Service
{
public:
	LocalWaypointListDriverService( JTS::JausRouter* jausRouter );
	virtual ~LocalWaypointListDriverService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	LocalWaypointListDriver_LocalWaypointListDriverProtocol* pLocalWaypointListDriver_LocalWaypointListDriverProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // LOCALWAYPOINTLISTDRIVERSERVICE_H

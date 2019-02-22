

#ifndef NAVIGATIONANDREPORTINGCLIENTSERVICE_H
#define NAVIGATIONANDREPORTINGCLIENTSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "NavigationAndReportingClient_NavigationAndReportingClientProtocol.h"


namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{
	
class DllExport NavigationAndReportingClientService : public JTS::Service
{
public:
	NavigationAndReportingClientService( JTS::JausRouter* jausRouter );
	virtual ~NavigationAndReportingClientService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	NavigationAndReportingClient_NavigationAndReportingClientProtocol* pNavigationAndReportingClient_NavigationAndReportingClientProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // NAVIGATIONANDREPORTINGCLIENTSERVICE_H

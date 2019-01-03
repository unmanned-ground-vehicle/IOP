

#ifndef PLATFORMMANAGEMENTSERVICEDEFSERVICE_H
#define PLATFORMMANAGEMENTSERVICEDEFSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/Messages/MessageSet.h"
#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "PlatformManagementServiceDef_PlatformManagementProtocol.h"


namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{
	
class DllExport PlatformManagementServiceDefService : public JTS::Service
{
public:
	PlatformManagementServiceDefService( JTS::JausRouter* jausRouter );
	virtual ~PlatformManagementServiceDefService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	PlatformManagementServiceDef_PlatformManagementProtocol* pPlatformManagementServiceDef_PlatformManagementProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // PLATFORMMANAGEMENTSERVICEDEFSERVICE_H

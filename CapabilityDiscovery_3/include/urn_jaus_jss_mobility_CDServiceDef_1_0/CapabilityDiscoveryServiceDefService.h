

#ifndef CAPABILITYDISCOVERYSERVICEDEFSERVICE_H
#define CAPABILITYDISCOVERYSERVICEDEFSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_CDServiceDef_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_CDServiceDef_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol.h"


namespace urn_jaus_jss_mobility_CDServiceDef_1_0
{
	
class DllExport CapabilityDiscoveryServiceDefService : public JTS::Service
{
public:
	CapabilityDiscoveryServiceDefService( JTS::JausRouter* jausRouter );
	virtual ~CapabilityDiscoveryServiceDefService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol* pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // CAPABILITYDISCOVERYSERVICEDEFSERVICE_H

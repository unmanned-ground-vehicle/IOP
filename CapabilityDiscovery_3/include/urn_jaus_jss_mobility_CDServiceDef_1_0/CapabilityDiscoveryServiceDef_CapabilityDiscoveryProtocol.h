

#ifndef CAPABILITYDISCOVERYSERVICEDEF_CAPABILITYDISCOVERYPROTOCOL_H
#define CAPABILITYDISCOVERYSERVICEDEF_CAPABILITYDISCOVERYPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_CDServiceDef_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_CDServiceDef_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol_sm.h"

namespace urn_jaus_jss_mobility_CDServiceDef_1_0
{
	
class DllExport CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol : public JTS::StateMachine
{
public:
	CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol();
	virtual ~CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol();
	int count;
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void broadcastQueryIdentificationAction();
	virtual void sendQueryIdentificationAction(ReportIdentification msg, unsigned int sender);
	virtual void sendQueryServicesAction(ReportServices msg, unsigned int sender);


	/// Guard Methods

	
	
	CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // CAPABILITYDISCOVERYSERVICEDEF_CAPABILITYDISCOVERYPROTOCOL_H

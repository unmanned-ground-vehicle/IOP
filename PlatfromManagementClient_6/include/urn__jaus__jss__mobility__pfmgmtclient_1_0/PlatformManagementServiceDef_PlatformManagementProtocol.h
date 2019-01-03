

#ifndef PLATFORMMANAGEMENTSERVICEDEF_PLATFORMMANAGEMENTPROTOCOL_H
#define PLATFORMMANAGEMENTSERVICEDEF_PLATFORMMANAGEMENTPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/Messages/MessageSet.h"
#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "PlatformManagementServiceDef_PlatformManagementProtocol_sm.h"

namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{
	
class DllExport PlatformManagementServiceDef_PlatformManagementProtocol : public JTS::StateMachine
{
public:
	PlatformManagementServiceDef_PlatformManagementProtocol();
	virtual ~PlatformManagementServiceDef_PlatformManagementProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void broadcastQueryIdentificationAction();
	virtual void handleReportHeartbeatpulseAction(ReportHeartbeatPulse msg, unsigned int sender);
	virtual void sendQueryConfigurationAction(ReportSubsystemList msg, unsigned int sender);
	virtual void sendQueryHeartbearPulseAction(ReportConfiguration msg, unsigned int sender);
	virtual void sendQueryServicesAction(ReportIdentification msg, unsigned int sender);
	virtual void sendRegisterServicesAction(ReportServices msg, unsigned int sender);
    int count;

	/// Guard Methods

	
	
	PlatformManagementServiceDef_PlatformManagementProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // PLATFORMMANAGEMENTSERVICEDEF_PLATFORMMANAGEMENTPROTOCOL_H

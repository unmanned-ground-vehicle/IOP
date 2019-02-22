

#ifndef NAVIGATIONANDREPORTINGCLIENT_NAVIGATIONANDREPORTINGCLIENTPROTOCOL_H
#define NAVIGATIONANDREPORTINGCLIENT_NAVIGATIONANDREPORTINGCLIENTPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "NavigationAndReportingClient_NavigationAndReportingClientProtocol_sm.h"

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{
	
class DllExport NavigationAndReportingClient_NavigationAndReportingClientProtocol : public JTS::StateMachine
{
public:
	NavigationAndReportingClient_NavigationAndReportingClientProtocol();
	virtual ~NavigationAndReportingClient_NavigationAndReportingClientProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void sendReportControlAction();
	virtual void sendResumeAction(ReportLocalWaypoint msg, unsigned int sender);
	virtual void sendSetLocalPoseAction(ConfirmControl msg, unsigned int sender);
	virtual void sendSetLocalWayPointAction(ReportLocalPose msg, unsigned int sender);
	virtual void sendSetTravelSpeedAction(ReportTravelSpeed msg, unsigned int sender);
    int counter = 0;

	/// Guard Methods

	
	
	NavigationAndReportingClient_NavigationAndReportingClientProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // NAVIGATIONANDREPORTINGCLIENT_NAVIGATIONANDREPORTINGCLIENTPROTOCOL_H

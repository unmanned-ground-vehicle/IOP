

#ifndef LOCALWAYPOINTLISTDRIVER_LOCALWAYPOINTLISTDRIVERPROTOCOL_H
#define LOCALWAYPOINTLISTDRIVER_LOCALWAYPOINTLISTDRIVERPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "LocalWaypointListDriver_LocalWaypointListDriverProtocol_sm.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{
	
class DllExport LocalWaypointListDriver_LocalWaypointListDriverProtocol : public JTS::StateMachine
{
public:
	LocalWaypointListDriver_LocalWaypointListDriverProtocol();
	virtual ~LocalWaypointListDriver_LocalWaypointListDriverProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void executeListAction(ExecuteList msg, unsigned int sender);
	virtual void sendConfirmElementRequestAction(SetElement msg, unsigned int sender);
	virtual void sendReportActiveElementAction(QueryActiveElement msg, unsigned int sender);
	virtual void sendReportElementCountAction(QueryElementCount msg, unsigned int sender);
	virtual void sendReportElementListAction(QueryElementList msg, unsigned int sender);
	virtual void sendReportLocalWaypointAction(QueryLocalWaypoint msg, unsigned int sender);
	virtual void sendReportTravelSpeedAction(QueryTravelSpeed msg, unsigned int sender);


	/// Guard Methods

	
	
	LocalWaypointListDriver_LocalWaypointListDriverProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // LOCALWAYPOINTLISTDRIVER_LOCALWAYPOINTLISTDRIVERPROTOCOL_H

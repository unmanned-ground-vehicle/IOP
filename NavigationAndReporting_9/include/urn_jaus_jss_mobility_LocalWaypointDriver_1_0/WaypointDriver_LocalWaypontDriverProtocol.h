

#ifndef WAYPOINTDRIVER_LOCALWAYPONTDRIVERPROTOCOL_H
#define WAYPOINTDRIVER_LOCALWAYPONTDRIVERPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "WaypointDriver_LocalWaypontDriverProtocol_sm.h"

namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0
{
	
class DllExport WaypointDriver_LocalWaypontDriverProtocol : public JTS::StateMachine
{
public:
	WaypointDriver_LocalWaypontDriverProtocol();
	virtual ~WaypointDriver_LocalWaypontDriverProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void sendReportLocalWaypointAction(QueryLocalWaypoint msg, unsigned int sender);
	virtual void sendReportTravelSpeedAction(QueryTravelSpeed msg, unsigned int sender);
	virtual void setLocalWaypointAction(SetLocalWaypoint msg, unsigned int sender);
	virtual void setVelocityAction(SetTravelSpeed msg, unsigned int sender);


	/// Guard Methods

	
	
	WaypointDriver_LocalWaypontDriverProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // WAYPOINTDRIVER_LOCALWAYPONTDRIVERPROTOCOL_H

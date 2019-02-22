

#ifndef LOCALPOSESENSOR_LOCALPOSESENSORPROTOCOL_H
#define LOCALPOSESENSOR_LOCALPOSESENSORPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "LocalPoseSensor_LocalPoseSensorProtocol_sm.h"

namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{
	
class DllExport LocalPoseSensor_LocalPoseSensorProtocol : public JTS::StateMachine
{
public:
	LocalPoseSensor_LocalPoseSensorProtocol();
	virtual ~LocalPoseSensor_LocalPoseSensorProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void sendReportLocalPoseAction(QueryLocalPose msg, unsigned int sender);


	/// Guard Methods

	
	
	LocalPoseSensor_LocalPoseSensorProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // LOCALPOSESENSOR_LOCALPOSESENSORPROTOCOL_H



#ifndef VELOCITYSTATESENSOR_VELOCITYSTATESENSORPROTOCOL_H
#define VELOCITYSTATESENSOR_VELOCITYSTATESENSORPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "VelocityStateSensor_VelocityStateSensorProtocol_sm.h"

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{
	
class DllExport VelocityStateSensor_VelocityStateSensorProtocol : public JTS::StateMachine
{
public:
	VelocityStateSensor_VelocityStateSensorProtocol();
	virtual ~VelocityStateSensor_VelocityStateSensorProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void sendReportVelocityStateAction(QueryVelocityState msg, unsigned int sender);


	/// Guard Methods

	
	
	VelocityStateSensor_VelocityStateSensorProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // VELOCITYSTATESENSOR_VELOCITYSTATESENSORPROTOCOL_H

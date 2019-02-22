

#ifndef STARTNAV_STARTNAVPROTOCOL_H
#define STARTNAV_STARTNAVPROTOCOL_H

#include "JausUtils.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JTSStateMachine.h"
#include "urn_jaus_jss_mobility_StartNav_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_StartNav_1_0/InternalEvents/InternalEventsSet.h"

typedef JTS::Receive_1_0 Receive;
typedef JTS::Send_1_0 Send;



#include "StartNav_StartNavProtocol_sm.h"

namespace urn_jaus_jss_mobility_StartNav_1_0
{
	
class DllExport StartNav_StartNavProtocol : public JTS::StateMachine
{
public:
	StartNav_StartNavProtocol();
	virtual ~StartNav_StartNavProtocol();
	
	/// Handle notifications on parent state changes
	virtual void setupNotifications();

	/// Action Methods
	virtual void handleClearEmergencyAction(ClearEmergency msg, unsigned int sender);
	virtual void handleReleaseControlAction(ReleaseControl msg, unsigned int sender);
	virtual void handleResumeAction(Resume msg, unsigned int sender);
	virtual void handleSetEmergencyAction(SetEmergency msg, unsigned int sender);
	virtual void handleStandbyAction(Standby msg, unsigned int sender);
	virtual void sendConfrimControlAction(RequestControl msg, unsigned int sender);
	virtual void setLocalPositionAction(SetLocalPose msg, unsigned int sender);


	/// Guard Methods

	
	
	StartNav_StartNavProtocolContext *context;
	
protected:

    /// References to parent FSMs

    
};

};

#endif // STARTNAV_STARTNAVPROTOCOL_H



#ifndef LOCALPOSESENSORSERVICE_H
#define LOCALPOSESENSORSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "LocalPoseSensor_LocalPoseSensorProtocol.h"


namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{
	
class DllExport LocalPoseSensorService : public JTS::Service
{
public:
	LocalPoseSensorService( JTS::JausRouter* jausRouter );
	virtual ~LocalPoseSensorService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	LocalPoseSensor_LocalPoseSensorProtocol* pLocalPoseSensor_LocalPoseSensorProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // LOCALPOSESENSORSERVICE_H

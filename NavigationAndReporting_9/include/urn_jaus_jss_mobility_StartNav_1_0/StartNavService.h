

#ifndef STARTNAVSERVICE_H
#define STARTNAVSERVICE_H

#include "Service.h"
#include "InternalEvents/InternalEventHandler.h"
#include "Transport/JausTransport.h"
#include "JConstants.h"
#include "urn_jaus_jss_mobility_StartNav_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_StartNav_1_0/InternalEvents/InternalEventsSet.h"
#include "Transport/OS.h"

#include "StartNav_StartNavProtocol.h"


namespace urn_jaus_jss_mobility_StartNav_1_0
{
	
class DllExport StartNavService : public JTS::Service
{
public:
	StartNavService( JTS::JausRouter* jausRouter );
	virtual ~StartNavService();
	
	virtual bool processTransitions(JTS::InternalEvent* ie);
	virtual bool defaultTransitions(JTS::InternalEvent* ie);
	
	// FSMs are public so that children services can access them
	StartNav_StartNavProtocol* pStartNav_StartNavProtocol;
	


	
protected:
	virtual void run();

};

};

#endif // STARTNAVSERVICE_H

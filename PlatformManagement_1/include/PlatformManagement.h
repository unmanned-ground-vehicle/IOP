

#ifndef PLATFORMMANAGEMENT_H
#define PLATFORMMANAGEMENT_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn_jaus_jss_core_Transport_1_0/TransportService.h"
#include "urn_jaus_jss_core_Events_1_0/EventsService.h"
#include "urn_jaus_jss_core_AccessControl_1_0/AccessControlService.h"
#include "urn_jaus_jss_core_Liveness_1_0/LivenessService.h"
#include "urn_jaus_jss_core_Discovery_1_0/DiscoveryService.h"


class PlatformManagement : public JTS::EventReceiver
{
public:
	PlatformManagement(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~PlatformManagement();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

#endif // PLATFORMMANAGEMENT_H

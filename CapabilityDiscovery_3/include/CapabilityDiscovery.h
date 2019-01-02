

#ifndef CAPABILITYDISCOVERY_H
#define CAPABILITYDISCOVERY_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn_jaus_jss_mobility_CDServiceDef_1_0/CapabilityDiscoveryServiceDefService.h"


class CapabilityDiscovery : public JTS::EventReceiver
{
public:
	CapabilityDiscovery(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~CapabilityDiscovery();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

#endif // CAPABILITYDISCOVERY_H

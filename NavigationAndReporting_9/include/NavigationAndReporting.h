

#ifndef NAVIGATIONANDREPORTING_H
#define NAVIGATIONANDREPORTING_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn_jaus_jss_mobility_StartNav_1_0/StartNavService.h"
#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/WaypointDriverService.h"
#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/VelocityStateSensorService.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensorService.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriverService.h"


class NavigationAndReporting : public JTS::EventReceiver
{
public:
	NavigationAndReporting(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~NavigationAndReporting();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

#endif // NAVIGATIONANDREPORTING_H



#ifndef NAVIGATIONANDREPORTINGCLIENT_H
#define NAVIGATIONANDREPORTINGCLIENT_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/NavigationAndReportingClientService.h"


class NavigationAndReportingClient : public JTS::EventReceiver
{
public:
	NavigationAndReportingClient(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~NavigationAndReportingClient();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

#endif // NAVIGATIONANDREPORTINGCLIENT_H

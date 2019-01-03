

#ifndef PLATFROMMANAGEMENTCLIENT_H
#define PLATFROMMANAGEMENTCLIENT_H

#include <vector>
#include "EventReceiver.h"
#include "Transport/JausTransport.h"
#include "InternalEvents/InternalEvent.h"
#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/PlatformManagementServiceDefService.h"


class PlatfromManagementClient : public JTS::EventReceiver
{
public:
	PlatfromManagementClient(unsigned int subsystem, unsigned short node, unsigned short component);
	virtual ~PlatfromManagementClient();
	
	void startComponent();
	void shutdownComponent();
	
protected:
	virtual void processInternalEvent(JTS::InternalEvent* ie);
	
	std::vector<JTS::Service*> serviceList;
	JTS::JausRouter* jausRouter;
	
};

#endif // PLATFROMMANAGEMENTCLIENT_H



#include "urn_jaus_jss_mobility_StartNav_1_0/StartNav_StartNavProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_StartNav_1_0
{



StartNav_StartNavProtocol::StartNav_StartNavProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new StartNav_StartNavProtocolContext(*this);

}



StartNav_StartNavProtocol::~StartNav_StartNavProtocol() 
{
	delete context;
}

void StartNav_StartNavProtocol::setupNotifications()
{

}

void StartNav_StartNavProtocol::handleClearEmergencyAction(ClearEmergency msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Clearing Emergency"<<std::endl;
}

void StartNav_StartNavProtocol::handleReleaseControlAction(ReleaseControl msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Releasing Control"<<std::endl;
}

void StartNav_StartNavProtocol::handleResumeAction(Resume msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Setting Resume"<<std::endl;
}

void StartNav_StartNavProtocol::handleSetEmergencyAction(SetEmergency msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Enforcing Emergency"<<std::endl;
}

void StartNav_StartNavProtocol::handleStandbyAction(Standby msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Setting Standby"<<std::endl;
}

void StartNav_StartNavProtocol::sendConfrimControlAction(RequestControl msg, unsigned int sender)
{
	/// Insert User Code HERE
	
	ConfirmControl cc_msg;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(cc_msg, server );
    std::cout<<"Sending ConfirmControl"<<std::endl;
	
}

void StartNav_StartNavProtocol::setLocalPositionAction(SetLocalPose msg, unsigned int sender)
{
	/// Insert User Code HERE
	double x = msg.getBody()->getLocalPoseRec()->getX();
	double y = msg.getBody()->getLocalPoseRec()->getY();
	std::cout<<"Setting local pose to "<<x<<", "<<y<<std::endl;

}





};

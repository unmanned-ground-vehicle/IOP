

#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/NavigationAndReportingClient_NavigationAndReportingClientProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{



NavigationAndReportingClient_NavigationAndReportingClientProtocol::NavigationAndReportingClient_NavigationAndReportingClientProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new NavigationAndReportingClient_NavigationAndReportingClientProtocolContext(*this);

}



NavigationAndReportingClient_NavigationAndReportingClientProtocol::~NavigationAndReportingClient_NavigationAndReportingClientProtocol() 
{
	delete context;
}

void NavigationAndReportingClient_NavigationAndReportingClientProtocol::setupNotifications()
{

}

void NavigationAndReportingClient_NavigationAndReportingClientProtocol::sendReportControlAction()
{
	/// Insert User Code HERE
	RequestControl r_msg;
	r_msg.getBody()->getRequestControlRec()->setAuthorityCode(556);
	JausAddress broadcast(0xffff, 0xff, 0xff );
	sendJausMessage(r_msg, broadcast );
	std::cout<<"Sending RequestControl"<<std::endl;
}

void NavigationAndReportingClient_NavigationAndReportingClientProtocol::sendResumeAction(ReportLocalWaypoint msg, unsigned int sender)
{
	/// Insert User Code HERE
	Resume r_msg;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(r_msg, server );
	std::cout<<"Sending Resume Message "<<std::endl;

	SetTravelSpeed sts_msg;
	sendJausMessage(sts_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;
	
	SetEmergency se_msg;
	sendJausMessage(sts_msg, server );
	std::cout<<"Sending Set Emergency Speed Message "<<std::endl;
    
	QueryTravelSpeed qts_msg;
	sendJausMessage(sts_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;



}

void NavigationAndReportingClient_NavigationAndReportingClientProtocol::sendSetLocalPoseAction(ConfirmControl msg, unsigned int sender)
{
	/// Insert User Code HERE
		std::cout<<"HEYYYYYYYYY"<<std::endl;
	SetLocalPose slp_msg;
	slp_msg.getBody()->getLocalPoseRec()->setX(0.0);
	slp_msg.getBody()->getLocalPoseRec()->setY(0.0);

	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(slp_msg, server );
	std::cout<<"Sending SetLocalPose Message "<<std::endl;

	QueryLocalPose qlp_msg;
	qlp_msg.getBody()->getQueryLocalBodyRec()->setPresence_vector(0143);
	sendJausMessage(qlp_msg, server );
	std::cout<<"Sending QueryLocalPose Message "<<std::endl;
}

void NavigationAndReportingClient_NavigationAndReportingClientProtocol::sendSetLocalWayPointAction(ReportLocalPose msg, unsigned int sender)
{
	/// Insert User Code HERE
	SetLocalWaypoint slw_msg;
	slw_msg.getBody()->getSetLocalWaypointRec()->setX(0.0);
	slw_msg.getBody()->getSetLocalWaypointRec()->setY(0.0);
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(slw_msg, server );
	std::cout<<"Sending SetLocalWayPoint Message "<<std::endl;

	QueryLocalWaypoint qlw_msg;
	qlw_msg.getBody()->getQueryLocalWaypointRec()->setQueryPresenceVector(0003);
	sendJausMessage(slw_msg, server );
	std::cout<<"Sending QueryLocalWayPoint Message "<<std::endl;
	
}

void NavigationAndReportingClient_NavigationAndReportingClientProtocol::sendSetTravelSpeedAction(ReportTravelSpeed msg, unsigned int sender)
{
	/// Insert User Code HERE
	if(counter==0)
	{
	SetTravelSpeed sts_msg;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(sts_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;


	QueryTravelSpeed qts_msg;
	sendJausMessage(sts_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;
	counter++;
	}
	else if(counter==1)
	{
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);

	ClearEmergency ce_msg;
	sendJausMessage(ce_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;

	QueryTravelSpeed qts_msg;
	sendJausMessage(qts_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;
	counter++;

	}

	else if(counter==2)
	{
        SetTravelSpeed sts_msg;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(sts_msg, server );
	std::cout<<"Sending Set Travel Speed Message "<<std::endl;

    Standby sb_msg;
	
	sendJausMessage(sb_msg, server );
	std::cout<<"Sending Standby Message "<<std::endl;
    
	ReleaseControl rc_msg;
	sendJausMessage(rc_msg, server );
	std::cout<<"Sending Release control Message "<<std::endl;
    counter++;



	}
}





};

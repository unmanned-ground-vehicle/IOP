

#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/WaypointDriver_LocalWaypontDriverProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0
{



WaypointDriver_LocalWaypontDriverProtocol::WaypointDriver_LocalWaypontDriverProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new WaypointDriver_LocalWaypontDriverProtocolContext(*this);

}



WaypointDriver_LocalWaypontDriverProtocol::~WaypointDriver_LocalWaypontDriverProtocol() 
{
	delete context;
}

void WaypointDriver_LocalWaypontDriverProtocol::setupNotifications()
{

}

void WaypointDriver_LocalWaypontDriverProtocol::sendReportLocalWaypointAction(QueryLocalWaypoint msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportLocalWaypoint rlw_msg;
    	std::cout<<"Sending ReportLocalWaypoint Message "<<std::endl;
	jUnsignedShortInteger presence_vector =  msg.getBody()->getQueryLocalWaypointRec()->getQueryPresenceVector();

	if(presence_vector>>2&1)
	{
		rlw_msg.getBody()->getLocalWaypointRec()->setX(5);
		std::cout<<"setting X in localwaypoiunt";
	}

	if(presence_vector>>3&1)
	{
		rlw_msg.getBody()->getLocalWaypointRec()->setY(5);
		std::cout<<"setting X in localwaypoiunt";
	}
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(rlw_msg, server );


}

void WaypointDriver_LocalWaypontDriverProtocol::sendReportTravelSpeedAction(QueryTravelSpeed msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportTravelSpeed rts_msg;
	rts_msg.getBody()->getTravelSpeedRec()->setSpeed(5.0);
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(rts_msg, server );
	std::cout<<"Sending ReportTravelSpeed Message "<<std::endl;
}

void WaypointDriver_LocalWaypontDriverProtocol::setLocalWaypointAction(SetLocalWaypoint msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Set Travel Speed Running"<<std::endl;
}

void WaypointDriver_LocalWaypontDriverProtocol::setVelocityAction(SetTravelSpeed msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Set Travel Speed Running"<<std::endl;
}





};

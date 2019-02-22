

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriver_LocalWaypointListDriverProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{



LocalWaypointListDriver_LocalWaypointListDriverProtocol::LocalWaypointListDriver_LocalWaypointListDriverProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new LocalWaypointListDriver_LocalWaypointListDriverProtocolContext(*this);

}



LocalWaypointListDriver_LocalWaypointListDriverProtocol::~LocalWaypointListDriver_LocalWaypointListDriverProtocol() 
{
	delete context;
}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::setupNotifications()
{

}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::executeListAction(ExecuteList msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Executelist function"<<std::endl;
	

}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::sendConfirmElementRequestAction(SetElement msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"seding confirm element request message"<<std::endl;
	ConfirmElementRequest msgs;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(msgs, server );
}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::sendReportActiveElementAction(QueryActiveElement msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportActiveElement msgs;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(msgs, server );
	std::cout<<"seding Report active element request message"<<std::endl;



}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::sendReportElementCountAction(QueryElementCount msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportElementCount msgs;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(msgs, server );
	std::cout<<"seding Report active element count message"<<std::endl;

}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::sendReportElementListAction(QueryElementList msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportElementList msgs;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(msgs, server );
	std::cout<<"seding Report active element count message"<<std::endl;

}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::sendReportLocalWaypointAction(QueryLocalWaypoint msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportLocalWaypoint rlw_msg;
    
	jUnsignedShortInteger presence_vector =  msg.getBody()->getQueryLocalWaypointRec()->getQueryPresenceVector();

	if(presence_vector>>2&1)
	{
		rlw_msg.getBody()->getLocalWaypointRec()->setX(5);
		std::cout<<"setting X in localwaypoiunt";
	}

	if(presence_vector>>3&1)
	{
		rlw_msg.getBody()->getLocalWaypointRec()->setY(5);
		std::cout<<"setting Y in localwaypoiunt";
	}
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(rlw_msg, server );
	std::cout<<"Sending ReportLocalWaypoint Message "<<std::endl;

}

void LocalWaypointListDriver_LocalWaypointListDriverProtocol::sendReportTravelSpeedAction(QueryTravelSpeed msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportTravelSpeed msgs;
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(msgs, server );
	std::cout<<"Sending ReportTravelSpeed Message "<<std::endl;

}





};

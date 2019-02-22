

#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/VelocityStateSensor_VelocityStateSensorProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{



VelocityStateSensor_VelocityStateSensorProtocol::VelocityStateSensor_VelocityStateSensorProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new VelocityStateSensor_VelocityStateSensorProtocolContext(*this);

}



VelocityStateSensor_VelocityStateSensorProtocol::~VelocityStateSensor_VelocityStateSensorProtocol() 
{
	delete context;
}

void VelocityStateSensor_VelocityStateSensorProtocol::setupNotifications()
{

}

void VelocityStateSensor_VelocityStateSensorProtocol::sendReportVelocityStateAction(QueryVelocityState msg, unsigned int sender)
{
	/// Insert User Code HERE
	ReportVelocityState vs_msg;
	 
    
	jUnsignedShortInteger presence_vector = msg.getBody()->getQueryVelocityStateRec()->getPresenceVector();
	if(presence_vector>>0&1)
	{
	    vs_msg.getBody()->getReportVelocityStateRec()->setVelocityX(5);
		std::cout<<"Setting Velocity"<<std::endl;
	}
	if(presence_vector>>6&1)
	{
		vs_msg.getBody()->getReportVelocityStateRec()->setYawRate(5);
		std::cout<<"Setting Yawrate"<<std::endl;
	}
	if(presence_vector>>8&1)
	{   //TimeStamp time ;
		vs_msg.getBody()->getReportVelocityStateRec()->getTimeStamp()->setHour(5);
		vs_msg.getBody()->getReportVelocityStateRec()->getTimeStamp()->setMilliseconds(5);
		vs_msg.getBody()->getReportVelocityStateRec()->getTimeStamp()->setDay(5);
		vs_msg.getBody()->getReportVelocityStateRec()->getTimeStamp()->setSeconds(5);
		vs_msg.getBody()->getReportVelocityStateRec()->getTimeStamp()->setMinutes(5);
		//vs_msg.getBody()->getReportVelocityStateRec()->setTimeStamp(time);

	}

	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(vs_msg, server );
	
}





};

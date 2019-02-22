

#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_LocalPoseSensorProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{



LocalPoseSensor_LocalPoseSensorProtocol::LocalPoseSensor_LocalPoseSensorProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new LocalPoseSensor_LocalPoseSensorProtocolContext(*this);

}



LocalPoseSensor_LocalPoseSensorProtocol::~LocalPoseSensor_LocalPoseSensorProtocol() 
{
	delete context;
}

void LocalPoseSensor_LocalPoseSensorProtocol::setupNotifications()
{

}

void LocalPoseSensor_LocalPoseSensorProtocol::sendReportLocalPoseAction(QueryLocalPose msg, unsigned int sender)
{
	/// Insert User Code HERE

	jUnsignedShortInteger presence_vector = msg.getBody()->getQueryLocalBodyRec()->getPresence_vector();
    ReportLocalPose rp_msg;
	//LocalPoseRec rec = rp_msg.getBody()->getLocalPoseRec();
	if(presence_vector>>0&1)
	{
        rp_msg.getBody()->getLocalPoseRec()->setX(5);
		std::cout<<"Setting X"<<std::endl;
	}
	if(presence_vector>>1&1)
	{
        rp_msg.getBody()->getLocalPoseRec()->setY(5);
		std::cout<<"Setting Y"<<std::endl;
	}
	if(presence_vector>>6&1)
	{
        rp_msg.getBody()->getLocalPoseRec()->setYaw(5);
		std::cout<<"Setting Yaw"<<std::endl;
	}
    if(presence_vector>>8&1)
	{
        rp_msg.getBody()->getLocalPoseRec()->getTimeStamp()->setHour(5);
		rp_msg.getBody()->getLocalPoseRec()->getTimeStamp()->setMiliseconds(5);
		rp_msg.getBody()->getLocalPoseRec()->getTimeStamp()->setDay(5);
		rp_msg.getBody()->getLocalPoseRec()->getTimeStamp()->setSeconds(5);
		rp_msg.getBody()->getLocalPoseRec()->getTimeStamp()->setMinutes(5);
		std::cout<<"Setting Timestamp"<<std::endl;
	}

	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	sendJausMessage(rp_msg, server );
}





};

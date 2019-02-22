

#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensorService.h"

using namespace JTS;

namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{
	
LocalPoseSensorService::LocalPoseSensorService(JTS::JausRouter* jausRouter ) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pLocalPoseSensor_LocalPoseSensorProtocol = new LocalPoseSensor_LocalPoseSensorProtocol();
	pLocalPoseSensor_LocalPoseSensorProtocol->setHandlers(ieHandler, jausRouter);
	pLocalPoseSensor_LocalPoseSensorProtocol->setupNotifications();

}


LocalPoseSensorService::~LocalPoseSensorService()
{
	delete pLocalPoseSensor_LocalPoseSensorProtocol;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void LocalPoseSensorService::run()
{
	
	/// Perform any entry actions specified by the start state.

	
	/// Kick-off the receive loop...
	EventReceiver::run();
}

/**
 *	This is the function that will process an event either generated
 *  by the service, sent to it by another service on the same component,
 *  or as a message sent by a different component. 
 */
bool LocalPoseSensorService::processTransitions(InternalEvent* ie)
{
        bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && (ie->getName().compare("Receive") == 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());

					if ((id != QueryLocalPose::ID))
						goto leave;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalPoseSensor_LocalPoseSensorProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryLocalPose::ID)
					{
						QueryLocalPose msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:e9d4f6bf-53af-3ff9-a33c-557f071eba02
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						
						pLocalPoseSensor_LocalPoseSensorProtocol->context->QueryLocalPoseTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			 
leave:
   mutex.unlock();
   return done;
}


/**
 *	This is the function that will check for default transitions if
 *  no other transitions were satisfied. 
 */
bool LocalPoseSensorService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalPoseSensor_LocalPoseSensorProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryLocalPose::ID)
					{
						QueryLocalPose msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalPoseSensor_LocalPoseSensorProtocol->context->QueryLocalPoseTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

	
leave:
   mutex.unlock();
   return done;
}


};

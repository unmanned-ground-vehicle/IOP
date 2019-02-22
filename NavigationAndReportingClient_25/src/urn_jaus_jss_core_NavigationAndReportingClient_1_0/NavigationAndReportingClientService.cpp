

#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/NavigationAndReportingClientService.h"

using namespace JTS;

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{
	
NavigationAndReportingClientService::NavigationAndReportingClientService(JTS::JausRouter* jausRouter ) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pNavigationAndReportingClient_NavigationAndReportingClientProtocol = new NavigationAndReportingClient_NavigationAndReportingClientProtocol();
	pNavigationAndReportingClient_NavigationAndReportingClientProtocol->setHandlers(ieHandler, jausRouter);
	pNavigationAndReportingClient_NavigationAndReportingClientProtocol->setupNotifications();

}


NavigationAndReportingClientService::~NavigationAndReportingClientService()
{
	delete pNavigationAndReportingClient_NavigationAndReportingClientProtocol;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void NavigationAndReportingClientService::run()
{
	
	/// Perform any entry actions specified by the start state.
	pNavigationAndReportingClient_NavigationAndReportingClientProtocol->sendReportControlAction();

	
	/// Kick-off the receive loop...
	EventReceiver::run();
}

/**
 *	This is the function that will process an event either generated
 *  by the service, sent to it by another service on the same component,
 *  or as a message sent by a different component. 
 */
bool NavigationAndReportingClientService::processTransitions(InternalEvent* ie)
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

					if ((id != ConfirmControl::ID) &&
						(id != ReportLocalPose::ID) &&
						(id != ReportLocalWaypoint::ID) &&
						(id != ReportTravelSpeed::ID))
						goto leave;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ConfirmControl::ID)
					{
						ConfirmControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:ac665801-0f2c-38b5-bcd6-60cbcb7d6e7a
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ConfirmControlTransition(msg, sender);
						done = true;
						goto leave;
					} 
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportLocalPose::ID)
					{
						ReportLocalPose msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:e0f4dca8-1675-3ea7-8d78-63b922568f9a
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						//printf("WARNING!  Using parameter 'sender' without initialization!\n");
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ReportLocalPoseTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportLocalWaypoint::ID)
					{
						ReportLocalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:37616e92-80d5-3db1-a608-77980d9709d4
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ReportLocalWaypointTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportTravelSpeed::ID)
					{
						ReportTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:ca4e1726-2fef-3c6e-920b-7a20960324e9
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
							
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ReportTravelSpeedTransition(msg, sender);
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
bool NavigationAndReportingClientService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportLocalWaypoint::ID)
					{
						ReportLocalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ReportLocalWaypointTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportLocalPose::ID)
					{
						ReportLocalPose msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ReportLocalPoseTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportTravelSpeed::ID)
					{
						ReportTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ReportTravelSpeedTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("NavigationAndReportingClient_NavigationAndReportingClientProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ConfirmControl::ID)
					{
						ConfirmControl msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pNavigationAndReportingClient_NavigationAndReportingClientProtocol->context->ConfirmControlTransition();
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

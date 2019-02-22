

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriverService.h"

using namespace JTS;

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{
	
LocalWaypointListDriverService::LocalWaypointListDriverService(JTS::JausRouter* jausRouter ) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pLocalWaypointListDriver_LocalWaypointListDriverProtocol = new LocalWaypointListDriver_LocalWaypointListDriverProtocol();
	pLocalWaypointListDriver_LocalWaypointListDriverProtocol->setHandlers(ieHandler, jausRouter);
	pLocalWaypointListDriver_LocalWaypointListDriverProtocol->setupNotifications();

}


LocalWaypointListDriverService::~LocalWaypointListDriverService()
{
	delete pLocalWaypointListDriver_LocalWaypointListDriverProtocol;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void LocalWaypointListDriverService::run()
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
bool LocalWaypointListDriverService::processTransitions(InternalEvent* ie)
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

					if ((id != SetElement::ID) &&
						(id != QueryElementList::ID) &&
						(id != ExecuteList::ID) &&
						(id != QueryActiveElement::ID) &&
						(id != QueryElementCount::ID) &&
						(id != QueryTravelSpeed::ID) &&
						(id != QueryLocalWaypoint::ID))
						goto leave;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:81ae2f13-4014-3408-9afc-f3074627333b
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->SetElementTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryElementList::ID)
					{
						QueryElementList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:ef9aa3f4-3eb5-3beb-b750-60e211c883ce
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ExecuteList::ID)
					{
						ExecuteList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:8989f779-049e-31c0-8e68-bdeff220b210
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->ExecuteListTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:8fbffda1-298f-3fa8-97e6-316752728dd9
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryActiveElementTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryElementCount::ID)
					{
						QueryElementCount msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:e23f53aa-c76a-3d94-80c4-bcde714a4796
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryElementCountTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:3dd51a47-2d3c-3d11-8eb0-1f32be2cfabb
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryTravelSpeedTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryLocalWaypoint::ID)
					{
						QueryLocalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:ae54c263-e9ef-37f4-a308-ecd8b8b41201
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
												pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryLocalWaypointTransition(msg, sender);
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
bool LocalWaypointListDriverService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryLocalWaypoint::ID)
					{
						QueryLocalWaypoint msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryLocalWaypointTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryTravelSpeed::ID)
					{
						QueryTravelSpeed msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryTravelSpeedTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ExecuteList::ID)
					{
						ExecuteList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->ExecuteListTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryActiveElement::ID)
					{
						QueryActiveElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryActiveElementTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryElementCount::ID)
					{
						QueryElementCount msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryElementCountTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == QueryElementList::ID)
					{
						QueryElementList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->QueryElementListTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("LocalWaypointListDriver_LocalWaypointListDriverProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == SetElement::ID)
					{
						SetElement msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pLocalWaypointListDriver_LocalWaypointListDriverProtocol->context->SetElementTransition();
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

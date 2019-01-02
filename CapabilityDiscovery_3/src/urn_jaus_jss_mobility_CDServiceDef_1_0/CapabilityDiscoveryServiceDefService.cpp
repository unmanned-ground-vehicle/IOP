

#include "urn_jaus_jss_mobility_CDServiceDef_1_0/CapabilityDiscoveryServiceDefService.h"

using namespace JTS;

namespace urn_jaus_jss_mobility_CDServiceDef_1_0
{
	
CapabilityDiscoveryServiceDefService::CapabilityDiscoveryServiceDefService(JTS::JausRouter* jausRouter ) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol = new CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol();
	pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->setHandlers(ieHandler, jausRouter);
	pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->setupNotifications();

}


CapabilityDiscoveryServiceDefService::~CapabilityDiscoveryServiceDefService()
{
	delete pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void CapabilityDiscoveryServiceDefService::run()
{
	
	/// Perform any entry actions specified by the start state.
	pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->broadcastQueryIdentificationAction();

	
	/// Kick-off the receive loop...
	EventReceiver::run();
}

/**
 *	This is the function that will process an event either generated
 *  by the service, sent to it by another service on the same component,
 *  or as a message sent by a different component. 
 */
bool CapabilityDiscoveryServiceDefService::processTransitions(InternalEvent* ie)
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

					if ((id != ReportIdentification::ID) &&
						(id != ReportServices::ID))
						goto leave;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportIdentification::ID)
					{
						ReportIdentification msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:918dfced-d179-3cd5-a492-ff2a508d0141
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
											  (casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
											  (casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						
						pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->context->ReportIdentificationTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportServices::ID)
					{
						ReportServices msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:323b1454-5a8e-34cf-b98b-7359a7d7a5e6
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->context->ReportServicesTransition(msg, sender);
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
bool CapabilityDiscoveryServiceDefService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportServices::ID)
					{
						ReportServices msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->context->ReportServicesTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportIdentification::ID)
					{
						ReportIdentification msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pCapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol->context->ReportIdentificationTransition();
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

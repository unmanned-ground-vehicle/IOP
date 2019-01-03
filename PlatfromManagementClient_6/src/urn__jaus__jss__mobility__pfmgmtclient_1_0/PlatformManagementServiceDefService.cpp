

#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/PlatformManagementServiceDefService.h"

using namespace JTS;

namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{
	
PlatformManagementServiceDefService::PlatformManagementServiceDefService(JTS::JausRouter* jausRouter ) : Service()
{
	jausRouter->setTransportType(JausRouter::Version_1_0);
	
	pPlatformManagementServiceDef_PlatformManagementProtocol = new PlatformManagementServiceDef_PlatformManagementProtocol();
	pPlatformManagementServiceDef_PlatformManagementProtocol->setHandlers(ieHandler, jausRouter);
	pPlatformManagementServiceDef_PlatformManagementProtocol->setupNotifications();

}


PlatformManagementServiceDefService::~PlatformManagementServiceDefService()
{
	delete pPlatformManagementServiceDef_PlatformManagementProtocol;

}

/**
 *	This is the function that will actually be run by the thread at start-up.
 *  We override it from EventReceiver in order to handle any entry
 *  actions defined by the initial state. 
 */
void PlatformManagementServiceDefService::run()
{
	
	/// Perform any entry actions specified by the start state.
	pPlatformManagementServiceDef_PlatformManagementProtocol->broadcastQueryIdentificationAction();

	
	/// Kick-off the receive loop...
	EventReceiver::run();
}

/**
 *	This is the function that will process an event either generated
 *  by the service, sent to it by another service on the same component,
 *  or as a message sent by a different component. 
 */
bool PlatformManagementServiceDefService::processTransitions(InternalEvent* ie)
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
						(id != ReportServices::ID) &&
						(id != ReportSubsystemList::ID) &&
						(id != ReportConfiguration::ID) &&
						(id != ReportHeartbeatPulse::ID))
						goto leave;
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportIdentification::ID)
					{
						ReportIdentification msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:26c73e2f-7dc9-3a15-b2b8-6818f18b7a1b
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
							(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
							(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportIdentificationTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportServices::ID)
					{
						ReportServices msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:153f5508-6063-3699-862f-7c30a95b08b4
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
						(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
						(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportServicesTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportSubsystemList::ID)
					{
						ReportSubsystemList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:b010f8aa-1fce-3ffd-adad-d68236d01955
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportSubsystemListTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportConfiguration::ID)
					{
						ReportConfiguration msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:5e7d83a4-b32c-33aa-ba2e-b3a207994c89
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportConfigurationTransition(msg, sender);
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportHeartbeatPulse::ID)
					{
						ReportHeartbeatPulse msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						// Unique identifier used to replace previous edits upon regeneration, do not delete this comment:acf81d8f-b4d6-3c3c-8e0f-53247db5f469
						unsigned int sender = (casted_ie->getBody()->getReceiveRec()->getSrcSubsystemID() << 16) +
(casted_ie->getBody()->getReceiveRec()->getSrcNodeID() << 8) +
(casted_ie->getBody()->getReceiveRec()->getSrcComponentID());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportHeartbeatPulseTransition(msg, sender);
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
bool PlatformManagementServiceDefService::defaultTransitions(InternalEvent* ie)
{
   bool done = false;

   // Since this function can be called from multiple threads,
   // we use a mutex to ensure only one state transition is
   // active at a time.
   mutex.lock();

			// Invoke the FSM transition for this event.
			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportSubsystemList::ID)
					{
						ReportSubsystemList msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportSubsystemListTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportHeartbeatPulse::ID)
					{
						ReportHeartbeatPulse msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportHeartbeatPulseTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportConfiguration::ID)
					{
						ReportConfiguration msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportConfigurationTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportIdentification::ID)
					{
						ReportIdentification msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportIdentificationTransition();
						done = true;
						goto leave;
					}
				}
			} catch (...) {}

			try
			{
				if ((done == false) && ie->getName().compare("Receive") == 0 && (ie->getSource().compare("PlatformManagementServiceDef_PlatformManagementProtocol") != 0))
				{
					Receive* casted_ie = (Receive*) ie;
					unsigned short id = *((unsigned short*) casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
					id = JSIDL_v_1_0::correctEndianness(id);
					if ( id == ReportServices::ID)
					{
						ReportServices msg;
						msg.decode(casted_ie->getBody()->getReceiveRec()->getMessagePayload()->getData());
						pPlatformManagementServiceDef_PlatformManagementProtocol->context->ReportServicesTransition();
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

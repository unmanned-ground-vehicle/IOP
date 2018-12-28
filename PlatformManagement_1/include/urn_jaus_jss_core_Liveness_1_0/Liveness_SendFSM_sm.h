#ifndef _H_LIVENESS_SENDFSM_SM
#define _H_LIVENESS_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : Liveness_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_core_Liveness_1_0
{
    // Forward declarations.
    class Liveness_SendFSM_SM;
    class Liveness_SendFSM_SM_Sending;
    class Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class Liveness_SendFSM_SM_Default;
    class Liveness_SendFSMState;
    class Liveness_SendFSMContext;
    class Liveness_SendFSM;

    class Liveness_SendFSMState :
        public statemap::State
    {
    public:

        Liveness_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(Liveness_SendFSMContext&) {};
        virtual void Exit(Liveness_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(Liveness_SendFSMContext& context);
        virtual void BroadcastLocalTransition(Liveness_SendFSMContext& context);
        virtual void CancelEventTransition(Liveness_SendFSMContext& context);
        virtual void CreateEventTransition(Liveness_SendFSMContext& context);
        virtual void EventErrorTransition(Liveness_SendFSMContext& context);
        virtual void EventOccurredTransition(Liveness_SendFSMContext& context);
        virtual void QueryEventsTransition(Liveness_SendFSMContext& context);
        virtual void QueryHeartbeatPulseTransition(Liveness_SendFSMContext& context);
        virtual void ReceiveTransition(Liveness_SendFSMContext& context);
        virtual void SendTransition(Liveness_SendFSMContext& context);
        virtual void UpdateEventTransition(Liveness_SendFSMContext& context);

    protected:

        virtual void Default(Liveness_SendFSMContext& context);
    };

    class Liveness_SendFSM_SM
    {
    public:

        static Liveness_SendFSM_SM_Sending Sending;
        static Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class Liveness_SendFSM_SM_Default :
        public Liveness_SendFSMState
    {
    public:

        Liveness_SendFSM_SM_Default(const char *name, int stateId)
        : Liveness_SendFSMState(name, stateId)
        {};

    };

    class Liveness_SendFSM_SM_Sending :
        public Liveness_SendFSM_SM_Default
    {
    public:
        Liveness_SendFSM_SM_Sending(const char *name, int stateId)
        : Liveness_SendFSM_SM_Default(name, stateId)
        {};

    };

    class Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public Liveness_SendFSM_SM_Default
    {
    public:
        Liveness_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : Liveness_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(Liveness_SendFSMContext& context);
        void BroadcastLocalTransition(Liveness_SendFSMContext& context);
        void CancelEventTransition(Liveness_SendFSMContext& context);
        void CreateEventTransition(Liveness_SendFSMContext& context);
        void EventErrorTransition(Liveness_SendFSMContext& context);
        void EventOccurredTransition(Liveness_SendFSMContext& context);
        void QueryEventsTransition(Liveness_SendFSMContext& context);
        void QueryHeartbeatPulseTransition(Liveness_SendFSMContext& context);
        void ReceiveTransition(Liveness_SendFSMContext& context);
        void SendTransition(Liveness_SendFSMContext& context);
        void UpdateEventTransition(Liveness_SendFSMContext& context);
    };

    class Liveness_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        Liveness_SendFSMContext(Liveness_SendFSM& owner)
        : FSMContext(Liveness_SendFSM_SM::Sending),
          _owner(owner)
        {};

        Liveness_SendFSMContext(Liveness_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        Liveness_SendFSM& getOwner() const
        {
            return (_owner);
        };

        Liveness_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<Liveness_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void CancelEventTransition()
        {
            setTransition("CancelEventTransition");
            (getState()).CancelEventTransition(*this);
            setTransition(NULL);
        };

        void CreateEventTransition()
        {
            setTransition("CreateEventTransition");
            (getState()).CreateEventTransition(*this);
            setTransition(NULL);
        };

        void EventErrorTransition()
        {
            setTransition("EventErrorTransition");
            (getState()).EventErrorTransition(*this);
            setTransition(NULL);
        };

        void EventOccurredTransition()
        {
            setTransition("EventOccurredTransition");
            (getState()).EventOccurredTransition(*this);
            setTransition(NULL);
        };

        void QueryEventsTransition()
        {
            setTransition("QueryEventsTransition");
            (getState()).QueryEventsTransition(*this);
            setTransition(NULL);
        };

        void QueryHeartbeatPulseTransition()
        {
            setTransition("QueryHeartbeatPulseTransition");
            (getState()).QueryHeartbeatPulseTransition(*this);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

        void UpdateEventTransition()
        {
            setTransition("UpdateEventTransition");
            (getState()).UpdateEventTransition(*this);
            setTransition(NULL);
        };

    private:

        Liveness_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_LIVENESS_SENDFSM_SM
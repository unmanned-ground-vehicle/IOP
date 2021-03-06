#ifndef _H_LOCALWAYPOINTLISTDRIVER_LOCALWAYPOINTLISTDRIVERPROTOCOL_SM
#define _H_LOCALWAYPOINTLISTDRIVER_LOCALWAYPOINTLISTDRIVERPROTOCOL_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : LocalWaypointListDriver_LocalWaypointListDriverProtocol_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{
    // Forward declarations.
    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM;
    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready;
    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE;
    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default;
    class LocalWaypointListDriver_LocalWaypointListDriverProtocolState;
    class LocalWaypointListDriver_LocalWaypointListDriverProtocolContext;
    class LocalWaypointListDriver_LocalWaypointListDriverProtocol;

    class LocalWaypointListDriver_LocalWaypointListDriverProtocolState :
        public statemap::State
    {
    public:

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext&) {};
        virtual void Exit(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext&) {};

        virtual void ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, ExecuteList& msg, unsigned int& sender);
        virtual void QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryActiveElement& msg, unsigned int& sender);
        virtual void QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementCount& msg, unsigned int& sender);
        virtual void QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementList& msg, unsigned int& sender);
        virtual void QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryLocalWaypoint& msg, unsigned int& sender);
        virtual void QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryTravelSpeed& msg, unsigned int& sender);
        virtual void SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        virtual void SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, SetElement& msg, unsigned int& sender);

    protected:

        virtual void Default(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
    };

    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM
    {
    public:

        static LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready Ready;
        static LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default :
        public LocalWaypointListDriver_LocalWaypointListDriverProtocolState
    {
    public:

        LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default(const char *name, int stateId)
        : LocalWaypointListDriver_LocalWaypointListDriverProtocolState(name, stateId)
        {};

    };

    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready :
        public LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default
    {
    public:
        LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready(const char *name, int stateId)
        : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default(name, stateId)
        {};

        void ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, ExecuteList& msg, unsigned int& sender);
        void QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryActiveElement& msg, unsigned int& sender);
        void QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementCount& msg, unsigned int& sender);
        void QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementList& msg, unsigned int& sender);
        void QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryLocalWaypoint& msg, unsigned int& sender);
        void QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryTravelSpeed& msg, unsigned int& sender);
        void SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, SetElement& msg, unsigned int& sender);
    };

    class LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE :
        public LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default
    {
    public:
        LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Default(name, stateId)
        {};

        void ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        void QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        void QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        void QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        void QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        void QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
        void SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context);
    };

    class LocalWaypointListDriver_LocalWaypointListDriverProtocolContext :
        public statemap::FSMContext
    {
    public:

        LocalWaypointListDriver_LocalWaypointListDriverProtocolContext(LocalWaypointListDriver_LocalWaypointListDriverProtocol& owner)
        : FSMContext(LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready),
          _owner(owner)
        {};

        LocalWaypointListDriver_LocalWaypointListDriverProtocolContext(LocalWaypointListDriver_LocalWaypointListDriverProtocol& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocol& getOwner() const
        {
            return (_owner);
        };

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<LocalWaypointListDriver_LocalWaypointListDriverProtocolState&>(*_state));
        };

        void ExecuteListTransition()
        {
            setTransition("ExecuteListTransition");
            (getState()).ExecuteListTransition(*this);
            setTransition(NULL);
        };

        void ExecuteListTransition(ExecuteList& msg, unsigned int& sender)
        {
            setTransition("ExecuteListTransition");
            (getState()).ExecuteListTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void QueryActiveElementTransition()
        {
            setTransition("QueryActiveElementTransition");
            (getState()).QueryActiveElementTransition(*this);
            setTransition(NULL);
        };

        void QueryActiveElementTransition(QueryActiveElement& msg, unsigned int& sender)
        {
            setTransition("QueryActiveElementTransition");
            (getState()).QueryActiveElementTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void QueryElementCountTransition()
        {
            setTransition("QueryElementCountTransition");
            (getState()).QueryElementCountTransition(*this);
            setTransition(NULL);
        };

        void QueryElementCountTransition(QueryElementCount& msg, unsigned int& sender)
        {
            setTransition("QueryElementCountTransition");
            (getState()).QueryElementCountTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void QueryElementListTransition()
        {
            setTransition("QueryElementListTransition");
            (getState()).QueryElementListTransition(*this);
            setTransition(NULL);
        };

        void QueryElementListTransition(QueryElementList& msg, unsigned int& sender)
        {
            setTransition("QueryElementListTransition");
            (getState()).QueryElementListTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void QueryLocalWaypointTransition()
        {
            setTransition("QueryLocalWaypointTransition");
            (getState()).QueryLocalWaypointTransition(*this);
            setTransition(NULL);
        };

        void QueryLocalWaypointTransition(QueryLocalWaypoint& msg, unsigned int& sender)
        {
            setTransition("QueryLocalWaypointTransition");
            (getState()).QueryLocalWaypointTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void QueryTravelSpeedTransition()
        {
            setTransition("QueryTravelSpeedTransition");
            (getState()).QueryTravelSpeedTransition(*this);
            setTransition(NULL);
        };

        void QueryTravelSpeedTransition(QueryTravelSpeed& msg, unsigned int& sender)
        {
            setTransition("QueryTravelSpeedTransition");
            (getState()).QueryTravelSpeedTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void SetElementTransition()
        {
            setTransition("SetElementTransition");
            (getState()).SetElementTransition(*this);
            setTransition(NULL);
        };

        void SetElementTransition(SetElement& msg, unsigned int& sender)
        {
            setTransition("SetElementTransition");
            (getState()).SetElementTransition(*this, msg, sender);
            setTransition(NULL);
        };

    private:

        LocalWaypointListDriver_LocalWaypointListDriverProtocol& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_LOCALWAYPOINTLISTDRIVER_LOCALWAYPOINTLISTDRIVERPROTOCOL_SM

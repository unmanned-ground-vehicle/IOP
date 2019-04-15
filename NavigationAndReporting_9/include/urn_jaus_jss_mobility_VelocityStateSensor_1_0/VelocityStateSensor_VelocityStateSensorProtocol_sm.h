#ifndef _H_VELOCITYSTATESENSOR_VELOCITYSTATESENSORPROTOCOL_SM
#define _H_VELOCITYSTATESENSOR_VELOCITYSTATESENSORPROTOCOL_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : VelocityStateSensor_VelocityStateSensorProtocol_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{
    // Forward declarations.
    class VelocityStateSensor_VelocityStateSensorProtocol_SM;
    class VelocityStateSensor_VelocityStateSensorProtocol_SM_Ready;
    class VelocityStateSensor_VelocityStateSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE;
    class VelocityStateSensor_VelocityStateSensorProtocol_SM_Default;
    class VelocityStateSensor_VelocityStateSensorProtocolState;
    class VelocityStateSensor_VelocityStateSensorProtocolContext;
    class VelocityStateSensor_VelocityStateSensorProtocol;

    class VelocityStateSensor_VelocityStateSensorProtocolState :
        public statemap::State
    {
    public:

        VelocityStateSensor_VelocityStateSensorProtocolState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(VelocityStateSensor_VelocityStateSensorProtocolContext&) {};
        virtual void Exit(VelocityStateSensor_VelocityStateSensorProtocolContext&) {};

        virtual void QueryVelocityStateTransition(VelocityStateSensor_VelocityStateSensorProtocolContext& context);
        virtual void QueryVelocityStateTransition(VelocityStateSensor_VelocityStateSensorProtocolContext& context, QueryVelocityState& msg, unsigned int& sender);

    protected:

        virtual void Default(VelocityStateSensor_VelocityStateSensorProtocolContext& context);
    };

    class VelocityStateSensor_VelocityStateSensorProtocol_SM
    {
    public:

        static VelocityStateSensor_VelocityStateSensorProtocol_SM_Ready Ready;
        static VelocityStateSensor_VelocityStateSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class VelocityStateSensor_VelocityStateSensorProtocol_SM_Default :
        public VelocityStateSensor_VelocityStateSensorProtocolState
    {
    public:

        VelocityStateSensor_VelocityStateSensorProtocol_SM_Default(const char *name, int stateId)
        : VelocityStateSensor_VelocityStateSensorProtocolState(name, stateId)
        {};

    };

    class VelocityStateSensor_VelocityStateSensorProtocol_SM_Ready :
        public VelocityStateSensor_VelocityStateSensorProtocol_SM_Default
    {
    public:
        VelocityStateSensor_VelocityStateSensorProtocol_SM_Ready(const char *name, int stateId)
        : VelocityStateSensor_VelocityStateSensorProtocol_SM_Default(name, stateId)
        {};

        void QueryVelocityStateTransition(VelocityStateSensor_VelocityStateSensorProtocolContext& context, QueryVelocityState& msg, unsigned int& sender);
    };

    class VelocityStateSensor_VelocityStateSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE :
        public VelocityStateSensor_VelocityStateSensorProtocol_SM_Default
    {
    public:
        VelocityStateSensor_VelocityStateSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : VelocityStateSensor_VelocityStateSensorProtocol_SM_Default(name, stateId)
        {};

        void QueryVelocityStateTransition(VelocityStateSensor_VelocityStateSensorProtocolContext& context);
    };

    class VelocityStateSensor_VelocityStateSensorProtocolContext :
        public statemap::FSMContext
    {
    public:

        VelocityStateSensor_VelocityStateSensorProtocolContext(VelocityStateSensor_VelocityStateSensorProtocol& owner)
        : FSMContext(VelocityStateSensor_VelocityStateSensorProtocol_SM::Ready),
          _owner(owner)
        {};

        VelocityStateSensor_VelocityStateSensorProtocolContext(VelocityStateSensor_VelocityStateSensorProtocol& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        VelocityStateSensor_VelocityStateSensorProtocol& getOwner() const
        {
            return (_owner);
        };

        VelocityStateSensor_VelocityStateSensorProtocolState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<VelocityStateSensor_VelocityStateSensorProtocolState&>(*_state));
        };

        void QueryVelocityStateTransition()
        {
            setTransition("QueryVelocityStateTransition");
            (getState()).QueryVelocityStateTransition(*this);
            setTransition(NULL);
        };

        void QueryVelocityStateTransition(QueryVelocityState& msg, unsigned int& sender)
        {
            setTransition("QueryVelocityStateTransition");
            (getState()).QueryVelocityStateTransition(*this, msg, sender);
            setTransition(NULL);
        };

    private:

        VelocityStateSensor_VelocityStateSensorProtocol& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_VELOCITYSTATESENSOR_VELOCITYSTATESENSORPROTOCOL_SM
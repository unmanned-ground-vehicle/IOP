#ifndef _H_LOCALPOSESENSOR_LOCALPOSESENSORPROTOCOL_SM
#define _H_LOCALPOSESENSOR_LOCALPOSESENSORPROTOCOL_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : LocalPoseSensor_LocalPoseSensorProtocol_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{
    // Forward declarations.
    class LocalPoseSensor_LocalPoseSensorProtocol_SM;
    class LocalPoseSensor_LocalPoseSensorProtocol_SM_Ready;
    class LocalPoseSensor_LocalPoseSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE;
    class LocalPoseSensor_LocalPoseSensorProtocol_SM_Default;
    class LocalPoseSensor_LocalPoseSensorProtocolState;
    class LocalPoseSensor_LocalPoseSensorProtocolContext;
    class LocalPoseSensor_LocalPoseSensorProtocol;

    class LocalPoseSensor_LocalPoseSensorProtocolState :
        public statemap::State
    {
    public:

        LocalPoseSensor_LocalPoseSensorProtocolState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(LocalPoseSensor_LocalPoseSensorProtocolContext&) {};
        virtual void Exit(LocalPoseSensor_LocalPoseSensorProtocolContext&) {};

        virtual void QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context);
        virtual void QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context, QueryLocalPose& msg, unsigned int& sender);

    protected:

        virtual void Default(LocalPoseSensor_LocalPoseSensorProtocolContext& context);
    };

    class LocalPoseSensor_LocalPoseSensorProtocol_SM
    {
    public:

        static LocalPoseSensor_LocalPoseSensorProtocol_SM_Ready Ready;
        static LocalPoseSensor_LocalPoseSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class LocalPoseSensor_LocalPoseSensorProtocol_SM_Default :
        public LocalPoseSensor_LocalPoseSensorProtocolState
    {
    public:

        LocalPoseSensor_LocalPoseSensorProtocol_SM_Default(const char *name, int stateId)
        : LocalPoseSensor_LocalPoseSensorProtocolState(name, stateId)
        {};

    };

    class LocalPoseSensor_LocalPoseSensorProtocol_SM_Ready :
        public LocalPoseSensor_LocalPoseSensorProtocol_SM_Default
    {
    public:
        LocalPoseSensor_LocalPoseSensorProtocol_SM_Ready(const char *name, int stateId)
        : LocalPoseSensor_LocalPoseSensorProtocol_SM_Default(name, stateId)
        {};

        void QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context, QueryLocalPose& msg, unsigned int& sender);
    };

    class LocalPoseSensor_LocalPoseSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE :
        public LocalPoseSensor_LocalPoseSensorProtocol_SM_Default
    {
    public:
        LocalPoseSensor_LocalPoseSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : LocalPoseSensor_LocalPoseSensorProtocol_SM_Default(name, stateId)
        {};

        void QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context);
    };

    class LocalPoseSensor_LocalPoseSensorProtocolContext :
        public statemap::FSMContext
    {
    public:

        LocalPoseSensor_LocalPoseSensorProtocolContext(LocalPoseSensor_LocalPoseSensorProtocol& owner)
        : FSMContext(LocalPoseSensor_LocalPoseSensorProtocol_SM::Ready),
          _owner(owner)
        {};

        LocalPoseSensor_LocalPoseSensorProtocolContext(LocalPoseSensor_LocalPoseSensorProtocol& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        LocalPoseSensor_LocalPoseSensorProtocol& getOwner() const
        {
            return (_owner);
        };

        LocalPoseSensor_LocalPoseSensorProtocolState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<LocalPoseSensor_LocalPoseSensorProtocolState&>(*_state));
        };

        void QueryLocalPoseTransition()
        {
            setTransition("QueryLocalPoseTransition");
            (getState()).QueryLocalPoseTransition(*this);
            setTransition(NULL);
        };

        void QueryLocalPoseTransition(QueryLocalPose& msg, unsigned int& sender)
        {
            setTransition("QueryLocalPoseTransition");
            (getState()).QueryLocalPoseTransition(*this, msg, sender);
            setTransition(NULL);
        };

    private:

        LocalPoseSensor_LocalPoseSensorProtocol& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_LOCALPOSESENSOR_LOCALPOSESENSORPROTOCOL_SM

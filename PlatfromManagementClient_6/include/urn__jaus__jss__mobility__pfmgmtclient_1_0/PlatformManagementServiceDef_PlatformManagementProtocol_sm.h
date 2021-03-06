#ifndef _H_PLATFORMMANAGEMENTSERVICEDEF_PLATFORMMANAGEMENTPROTOCOL_SM
#define _H_PLATFORMMANAGEMENTSERVICEDEF_PLATFORMMANAGEMENTPROTOCOL_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : PlatformManagementServiceDef_PlatformManagementProtocol_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{
    // Forward declarations.
    class PlatformManagementServiceDef_PlatformManagementProtocol_SM;
    class PlatformManagementServiceDef_PlatformManagementProtocol_SM_Ready;
    class PlatformManagementServiceDef_PlatformManagementProtocol_SM_Internally_Generated_State_DO_NOT_USE;
    class PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default;
    class PlatformManagementServiceDef_PlatformManagementProtocolState;
    class PlatformManagementServiceDef_PlatformManagementProtocolContext;
    class PlatformManagementServiceDef_PlatformManagementProtocol;

    class PlatformManagementServiceDef_PlatformManagementProtocolState :
        public statemap::State
    {
    public:

        PlatformManagementServiceDef_PlatformManagementProtocolState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(PlatformManagementServiceDef_PlatformManagementProtocolContext&) {};
        virtual void Exit(PlatformManagementServiceDef_PlatformManagementProtocolContext&) {};

        virtual void ReportConfigurationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        virtual void ReportConfigurationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportConfiguration& msg, unsigned int& sender);
        virtual void ReportHeartbeatPulseTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        virtual void ReportHeartbeatPulseTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportHeartbeatPulse& msg, unsigned int& sender);
        virtual void ReportIdentificationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        virtual void ReportIdentificationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportIdentification& msg, unsigned int& sender);
        virtual void ReportServicesTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        virtual void ReportServicesTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportServices& msg, unsigned int& sender);
        virtual void ReportSubsystemListTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        virtual void ReportSubsystemListTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportSubsystemList& msg, unsigned int& sender);

    protected:

        virtual void Default(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
    };

    class PlatformManagementServiceDef_PlatformManagementProtocol_SM
    {
    public:

        static PlatformManagementServiceDef_PlatformManagementProtocol_SM_Ready Ready;
        static PlatformManagementServiceDef_PlatformManagementProtocol_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default :
        public PlatformManagementServiceDef_PlatformManagementProtocolState
    {
    public:

        PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default(const char *name, int stateId)
        : PlatformManagementServiceDef_PlatformManagementProtocolState(name, stateId)
        {};

    };

    class PlatformManagementServiceDef_PlatformManagementProtocol_SM_Ready :
        public PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default
    {
    public:
        PlatformManagementServiceDef_PlatformManagementProtocol_SM_Ready(const char *name, int stateId)
        : PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default(name, stateId)
        {};

        void ReportConfigurationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportConfiguration& msg, unsigned int& sender);
        void ReportHeartbeatPulseTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportHeartbeatPulse& msg, unsigned int& sender);
        void ReportIdentificationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportIdentification& msg, unsigned int& sender);
        void ReportServicesTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportServices& msg, unsigned int& sender);
        void ReportSubsystemListTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context, ReportSubsystemList& msg, unsigned int& sender);
    };

    class PlatformManagementServiceDef_PlatformManagementProtocol_SM_Internally_Generated_State_DO_NOT_USE :
        public PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default
    {
    public:
        PlatformManagementServiceDef_PlatformManagementProtocol_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : PlatformManagementServiceDef_PlatformManagementProtocol_SM_Default(name, stateId)
        {};

        void ReportConfigurationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        void ReportHeartbeatPulseTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        void ReportIdentificationTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        void ReportServicesTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
        void ReportSubsystemListTransition(PlatformManagementServiceDef_PlatformManagementProtocolContext& context);
    };

    class PlatformManagementServiceDef_PlatformManagementProtocolContext :
        public statemap::FSMContext
    {
    public:

        PlatformManagementServiceDef_PlatformManagementProtocolContext(PlatformManagementServiceDef_PlatformManagementProtocol& owner)
        : FSMContext(PlatformManagementServiceDef_PlatformManagementProtocol_SM::Ready),
          _owner(owner)
        {};

        PlatformManagementServiceDef_PlatformManagementProtocolContext(PlatformManagementServiceDef_PlatformManagementProtocol& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        PlatformManagementServiceDef_PlatformManagementProtocol& getOwner() const
        {
            return (_owner);
        };

        PlatformManagementServiceDef_PlatformManagementProtocolState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<PlatformManagementServiceDef_PlatformManagementProtocolState&>(*_state));
        };

        void ReportConfigurationTransition()
        {
            setTransition("ReportConfigurationTransition");
            (getState()).ReportConfigurationTransition(*this);
            setTransition(NULL);
        };

        void ReportConfigurationTransition(ReportConfiguration& msg, unsigned int& sender)
        {
            setTransition("ReportConfigurationTransition");
            (getState()).ReportConfigurationTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void ReportHeartbeatPulseTransition()
        {
            setTransition("ReportHeartbeatPulseTransition");
            (getState()).ReportHeartbeatPulseTransition(*this);
            setTransition(NULL);
        };

        void ReportHeartbeatPulseTransition(ReportHeartbeatPulse& msg, unsigned int& sender)
        {
            setTransition("ReportHeartbeatPulseTransition");
            (getState()).ReportHeartbeatPulseTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void ReportIdentificationTransition()
        {
            setTransition("ReportIdentificationTransition");
            (getState()).ReportIdentificationTransition(*this);
            setTransition(NULL);
        };

        void ReportIdentificationTransition(ReportIdentification& msg, unsigned int& sender)
        {
            setTransition("ReportIdentificationTransition");
            (getState()).ReportIdentificationTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void ReportServicesTransition()
        {
            setTransition("ReportServicesTransition");
            (getState()).ReportServicesTransition(*this);
            setTransition(NULL);
        };

        void ReportServicesTransition(ReportServices& msg, unsigned int& sender)
        {
            setTransition("ReportServicesTransition");
            (getState()).ReportServicesTransition(*this, msg, sender);
            setTransition(NULL);
        };

        void ReportSubsystemListTransition()
        {
            setTransition("ReportSubsystemListTransition");
            (getState()).ReportSubsystemListTransition(*this);
            setTransition(NULL);
        };

        void ReportSubsystemListTransition(ReportSubsystemList& msg, unsigned int& sender)
        {
            setTransition("ReportSubsystemListTransition");
            (getState()).ReportSubsystemListTransition(*this, msg, sender);
            setTransition(NULL);
        };

    private:

        PlatformManagementServiceDef_PlatformManagementProtocol& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_PLATFORMMANAGEMENTSERVICEDEF_PLATFORMMANAGEMENTPROTOCOL_SM

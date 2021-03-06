/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : LocalPoseSensor_LocalPoseSensorProtocol_sm.sm
 */

#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_LocalPoseSensorProtocol.h"
#include "include/urn_jaus_jss_mobility_LocalPoseSensor_1_0/LocalPoseSensor_LocalPoseSensorProtocol_sm.h"

using namespace statemap;

namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{
    // Static class declarations.
    LocalPoseSensor_LocalPoseSensorProtocol_SM_Ready LocalPoseSensor_LocalPoseSensorProtocol_SM::Ready("LocalPoseSensor_LocalPoseSensorProtocol_SM::Ready", 0);
    LocalPoseSensor_LocalPoseSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE LocalPoseSensor_LocalPoseSensorProtocol_SM::Internally_Generated_State_DO_NOT_USE("LocalPoseSensor_LocalPoseSensorProtocol_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void LocalPoseSensor_LocalPoseSensorProtocolState::QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalPoseSensor_LocalPoseSensorProtocolState::QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context, QueryLocalPose& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalPoseSensor_LocalPoseSensorProtocolState::Default(LocalPoseSensor_LocalPoseSensorProtocolContext& context)
    {
        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "TRANSITION   : Default"
                << std::endl;
        }

        throw (
            TransitionUndefinedException(
                context.getState().getName(),
                context.getTransition()));

        return;
    }

    void LocalPoseSensor_LocalPoseSensorProtocol_SM_Ready::QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context, QueryLocalPose& msg, unsigned int& sender)
    {
        LocalPoseSensor_LocalPoseSensorProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalPoseSensor_LocalPoseSensorProtocol_SM::Ready"
            << std::endl;
        }

        LocalPoseSensor_LocalPoseSensorProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalPoseSensor_LocalPoseSensorProtocol_SM::Ready::QueryLocalPoseTransition(QueryLocalPose& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendReportLocalPoseAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalPoseSensor_LocalPoseSensorProtocol_SM::Ready::QueryLocalPoseTransition(QueryLocalPose& msg, unsigned int& sender)"
                    << std::endl;
            }

            context.setState(endState);
        }
        catch (...)
        {
            context.setState(endState);
            throw;
        }

        return;
    }

    void LocalPoseSensor_LocalPoseSensorProtocol_SM_Internally_Generated_State_DO_NOT_USE::QueryLocalPoseTransition(LocalPoseSensor_LocalPoseSensorProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalPoseSensor_LocalPoseSensorProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalPoseSensor_LocalPoseSensorProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryLocalPoseTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalPoseSensor_LocalPoseSensorProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryLocalPoseTransition()"
                << std::endl;
        }


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

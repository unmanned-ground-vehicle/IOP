/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : NavigationAndReportingClient_NavigationAndReportingClientProtocol_sm.sm
 */

#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/NavigationAndReportingClient_NavigationAndReportingClientProtocol.h"
#include "include/urn_jaus_jss_core_NavigationAndReportingClient_1_0/NavigationAndReportingClient_NavigationAndReportingClientProtocol_sm.h"

using namespace statemap;

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{
    // Static class declarations.
    NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Ready NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready("NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready", 0);
    NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Internally_Generated_State_DO_NOT_USE NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE("NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ConfirmControlTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ConfirmControlTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ConfirmControl& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ReportLocalPoseTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ReportLocalPoseTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ReportLocalPose& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ReportLocalWaypointTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ReportLocalWaypointTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ReportLocalWaypoint& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ReportTravelSpeedTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::ReportTravelSpeedTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ReportTravelSpeed& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocolState::Default(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
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

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Ready::ConfirmControlTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ConfirmControl& msg, unsigned int& sender)
    {
        NavigationAndReportingClient_NavigationAndReportingClientProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready"
            << std::endl;
        }

        NavigationAndReportingClient_NavigationAndReportingClientProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ConfirmControlTransition(ConfirmControl& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendSetLocalPoseAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ConfirmControlTransition(ConfirmControl& msg, unsigned int& sender)"
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

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Ready::ReportLocalPoseTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ReportLocalPose& msg, unsigned int& sender)
    {
        NavigationAndReportingClient_NavigationAndReportingClientProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready"
            << std::endl;
        }

        NavigationAndReportingClient_NavigationAndReportingClientProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ReportLocalPoseTransition(ReportLocalPose& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendSetLocalWayPointAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ReportLocalPoseTransition(ReportLocalPose& msg, unsigned int& sender)"
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

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Ready::ReportLocalWaypointTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ReportLocalWaypoint& msg, unsigned int& sender)
    {
        NavigationAndReportingClient_NavigationAndReportingClientProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready"
            << std::endl;
        }

        NavigationAndReportingClient_NavigationAndReportingClientProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ReportLocalWaypointTransition(ReportLocalWaypoint& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendResumeAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ReportLocalWaypointTransition(ReportLocalWaypoint& msg, unsigned int& sender)"
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

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Ready::ReportTravelSpeedTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context, ReportTravelSpeed& msg, unsigned int& sender)
    {
        NavigationAndReportingClient_NavigationAndReportingClientProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready"
            << std::endl;
        }

        NavigationAndReportingClient_NavigationAndReportingClientProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ReportTravelSpeedTransition(ReportTravelSpeed& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendSetTravelSpeedAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Ready::ReportTravelSpeedTransition(ReportTravelSpeed& msg, unsigned int& sender)"
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

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Internally_Generated_State_DO_NOT_USE::ConfirmControlTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ConfirmControlTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ConfirmControlTransition()"
                << std::endl;
        }


        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Internally_Generated_State_DO_NOT_USE::ReportLocalPoseTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ReportLocalPoseTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ReportLocalPoseTransition()"
                << std::endl;
        }


        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Internally_Generated_State_DO_NOT_USE::ReportLocalWaypointTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ReportLocalWaypointTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ReportLocalWaypointTransition()"
                << std::endl;
        }


        return;
    }

    void NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM_Internally_Generated_State_DO_NOT_USE::ReportTravelSpeedTransition(NavigationAndReportingClient_NavigationAndReportingClientProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ReportTravelSpeedTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : NavigationAndReportingClient_NavigationAndReportingClientProtocol_SM::Internally_Generated_State_DO_NOT_USE::ReportTravelSpeedTransition()"
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

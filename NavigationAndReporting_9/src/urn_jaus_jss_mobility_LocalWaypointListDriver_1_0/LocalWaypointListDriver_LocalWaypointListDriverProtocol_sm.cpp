/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : LocalWaypointListDriver_LocalWaypointListDriverProtocol_sm.sm
 */

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/MessageSet.h"
#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriver_LocalWaypointListDriverProtocol.h"
#include "include/urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/LocalWaypointListDriver_LocalWaypointListDriverProtocol_sm.h"

using namespace statemap;

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{
    // Static class declarations.
    LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready("LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready", 0);
    LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE("LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, ExecuteList& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryActiveElement& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementCount& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementList& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryLocalWaypoint& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryTravelSpeed& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, SetElement& msg, unsigned int& sender)
    {
        Default(context);
        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocolState::Default(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, ExecuteList& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::ExecuteListTransition(ExecuteList& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.executeListAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::ExecuteListTransition(ExecuteList& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryActiveElement& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryActiveElementTransition(QueryActiveElement& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendReportActiveElementAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryActiveElementTransition(QueryActiveElement& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementCount& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryElementCountTransition(QueryElementCount& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendReportElementCountAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryElementCountTransition(QueryElementCount& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryElementList& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryElementListTransition(QueryElementList& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendReportElementListAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryElementListTransition(QueryElementList& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryLocalWaypoint& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryLocalWaypointTransition(QueryLocalWaypoint& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendReportLocalWaypointAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryLocalWaypointTransition(QueryLocalWaypoint& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, QueryTravelSpeed& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryTravelSpeedTransition(QueryTravelSpeed& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendReportTravelSpeedAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::QueryTravelSpeedTransition(QueryTravelSpeed& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Ready::SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context, SetElement& msg, unsigned int& sender)
    {
        LocalWaypointListDriver_LocalWaypointListDriverProtocol& ctxt(context.getOwner());

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready"
            << std::endl;
        }

        LocalWaypointListDriver_LocalWaypointListDriverProtocolState& endState = context.getState();

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::SetElementTransition(SetElement& msg, unsigned int& sender)"
                << std::endl;
        }

        context.clearState();
        try
        {
            ctxt.sendConfirmElementRequestAction(msg, sender);
            if (context.getDebugFlag() == true)
            {
                std::ostream& str = context.getDebugStream();

                str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Ready::SetElementTransition(SetElement& msg, unsigned int& sender)"
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

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::ExecuteListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::ExecuteListTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::ExecuteListTransition()"
                << std::endl;
        }


        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::QueryActiveElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryActiveElementTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryActiveElementTransition()"
                << std::endl;
        }


        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::QueryElementCountTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryElementCountTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryElementCountTransition()"
                << std::endl;
        }


        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::QueryElementListTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryElementListTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryElementListTransition()"
                << std::endl;
        }


        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::QueryLocalWaypointTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryLocalWaypointTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryLocalWaypointTransition()"
                << std::endl;
        }


        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::QueryTravelSpeedTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryTravelSpeedTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::QueryTravelSpeedTransition()"
                << std::endl;
        }


        return;
    }

    void LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM_Internally_Generated_State_DO_NOT_USE::SetElementTransition(LocalWaypointListDriver_LocalWaypointListDriverProtocolContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::SetElementTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : LocalWaypointListDriver_LocalWaypointListDriverProtocol_SM::Internally_Generated_State_DO_NOT_USE::SetElementTransition()"
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

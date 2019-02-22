#ifndef URN_JAUS_JSS_CORE_NAVIGATIONANDREPORTINGCLIENT_1_0_REPORTLOCALWAYPOINT_H
#define URN_JAUS_JSS_CORE_NAVIGATIONANDREPORTINGCLIENT_1_0_REPORTLOCALWAYPOINT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{

class DllExport ReportLocalWaypoint: public JTS::Message
{
public:
	static const int ID = 0x440d;
	
	class DllExport JTS_DefaultHeader
	{
	public:
		class DllExport DefaultHeaderRec
		{
		public:
			void setParent(JTS_DefaultHeader* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getMessageID();
			int setMessageID(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			DefaultHeaderRec &operator=(const DefaultHeaderRec &value);
			bool operator==(const DefaultHeaderRec &value) const;
			bool operator!=(const DefaultHeaderRec &value) const;
			DefaultHeaderRec();
			DefaultHeaderRec(const DefaultHeaderRec &value);
			virtual ~DefaultHeaderRec();
		
		protected:
			JTS_DefaultHeader* m_parent;
			jUnsignedShortInteger m_MessageID;
		};
	
		DefaultHeaderRec* const getDefaultHeaderRec();
		int setDefaultHeaderRec(const DefaultHeaderRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		JTS_DefaultHeader &operator=(const JTS_DefaultHeader &value);
		bool operator==(const JTS_DefaultHeader &value) const;
		bool operator!=(const JTS_DefaultHeader &value) const;
		JTS_DefaultHeader();
		JTS_DefaultHeader(const JTS_DefaultHeader &value);
		virtual ~JTS_DefaultHeader();
	
	protected:
		DefaultHeaderRec m_DefaultHeaderRec;
	};
	class DllExport Body
	{
	public:
		class DllExport LocalWaypointRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			bool isPathToleranceValid() const;
			double getPathTolerance();
			int setPathTolerance(double value);
			bool isWaypointToleranceValid() const;
			double getWaypointTolerance();
			int setWaypointTolerance(double value);
			bool isPitchValid() const;
			double getPitch();
			int setPitch(double value);
			bool isYawValid() const;
			double getYaw();
			int setYaw(double value);
			bool isRollValid() const;
			double getRoll();
			int setRoll(double value);
			double getZ();
			int setZ(double value);
			double getY();
			int setY(double value);
			double getX();
			int setX(double value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			LocalWaypointRec &operator=(const LocalWaypointRec &value);
			bool operator==(const LocalWaypointRec &value) const;
			bool operator!=(const LocalWaypointRec &value) const;
			LocalWaypointRec();
			LocalWaypointRec(const LocalWaypointRec &value);
			virtual ~LocalWaypointRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedInteger m_PathTolerance;
			jUnsignedShortInteger m_WaypointTolerance;
			jUnsignedShortInteger m_Pitch;
			jUnsignedShortInteger m_Yaw;
			jUnsignedShortInteger m_Roll;
			jUnsignedInteger m_Z;
			jUnsignedInteger m_Y;
			jUnsignedInteger m_X;
		};
	
		LocalWaypointRec* const getLocalWaypointRec();
		int setLocalWaypointRec(const LocalWaypointRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		Body &operator=(const Body &value);
		bool operator==(const Body &value) const;
		bool operator!=(const Body &value) const;
		Body();
		Body(const Body &value);
		virtual ~Body();
	
	protected:
		LocalWaypointRec m_LocalWaypointRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportLocalWaypoint &operator=(const ReportLocalWaypoint &value);
	bool operator==(const ReportLocalWaypoint &value) const;
	bool operator!=(const ReportLocalWaypoint &value) const;
	ReportLocalWaypoint();
	ReportLocalWaypoint(const ReportLocalWaypoint &value);
	virtual ~ReportLocalWaypoint();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_CORE_NAVIGATIONANDREPORTINGCLIENT_1_0_REPORTLOCALWAYPOINT_H

#ifndef URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTDRIVER_1_0_SETLOCALWAYPOINT_H
#define URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTDRIVER_1_0_SETLOCALWAYPOINT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0
{

class DllExport SetLocalWaypoint: public JTS::Message
{
public:
	static const int ID = 0x040d;
	
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
		class DllExport SetLocalWaypointRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			bool isYawValid() const;
			double getYaw();
			int setYaw(double value);
			bool isRollValid() const;
			double getRoll();
			int setRoll(double value);
			bool isPitchValid() const;
			double getPitch();
			int setPitch(double value);
			double getX();
			int setX(double value);
			double getY();
			int setY(double value);
			double getZ();
			int setZ(double value);
			bool isWaypointToleranceValid() const;
			double getWaypointTolerance();
			int setWaypointTolerance(double value);
			bool isPathToleranceValid() const;
			double getPathTolerance();
			int setPathTolerance(double value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			SetLocalWaypointRec &operator=(const SetLocalWaypointRec &value);
			bool operator==(const SetLocalWaypointRec &value) const;
			bool operator!=(const SetLocalWaypointRec &value) const;
			SetLocalWaypointRec();
			SetLocalWaypointRec(const SetLocalWaypointRec &value);
			virtual ~SetLocalWaypointRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedByte m_PresenceVector;
			jUnsignedShortInteger m_Yaw;
			jUnsignedShortInteger m_Roll;
			jUnsignedShortInteger m_Pitch;
			jUnsignedInteger m_X;
			jUnsignedInteger m_Y;
			jUnsignedInteger m_Z;
			jUnsignedShortInteger m_WaypointTolerance;
			jUnsignedInteger m_PathTolerance;
		};
	
		SetLocalWaypointRec* const getSetLocalWaypointRec();
		int setSetLocalWaypointRec(const SetLocalWaypointRec &value);
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
		SetLocalWaypointRec m_SetLocalWaypointRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	SetLocalWaypoint &operator=(const SetLocalWaypoint &value);
	bool operator==(const SetLocalWaypoint &value) const;
	bool operator!=(const SetLocalWaypoint &value) const;
	SetLocalWaypoint();
	SetLocalWaypoint(const SetLocalWaypoint &value);
	virtual ~SetLocalWaypoint();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTDRIVER_1_0_SETLOCALWAYPOINT_H

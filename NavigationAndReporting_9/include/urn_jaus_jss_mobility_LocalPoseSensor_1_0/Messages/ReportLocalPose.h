#ifndef URN_JAUS_JSS_MOBILITY_LOCALPOSESENSOR_1_0_REPORTLOCALPOSE_H
#define URN_JAUS_JSS_MOBILITY_LOCALPOSESENSOR_1_0_REPORTLOCALPOSE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalPoseSensor_1_0
{

class DllExport ReportLocalPose: public JTS::Message
{
public:
	static const int ID = 0x4403;
	
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
		class DllExport LocalPoseRec
		{
		public:
			class DllExport TimeStamp
			{
			public:
				void setParent(LocalPoseRec* parent);
				void setParentPresenceVector();
				jUnsignedInteger getMiliseconds();
				int setMiliseconds(jUnsignedInteger value);
				jUnsignedInteger getSeconds();
				int setSeconds(jUnsignedInteger value);
				jUnsignedInteger getMinutes();
				int setMinutes(jUnsignedInteger value);
				jUnsignedInteger getHour();
				int setHour(jUnsignedInteger value);
				jUnsignedInteger getDay();
				int setDay(jUnsignedInteger value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				TimeStamp &operator=(const TimeStamp &value);
				bool operator==(const TimeStamp &value) const;
				bool operator!=(const TimeStamp &value) const;
				TimeStamp();
				TimeStamp(const TimeStamp &value);
				virtual ~TimeStamp();
			
			protected:
				LocalPoseRec* m_parent;
				jUnsignedInteger m_SubFields;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			bool isAttitudeRMSValid() const;
			double getAttitudeRMS();
			int setAttitudeRMS(double value);
			bool isTimeStampValid() const;
			TimeStamp* const getTimeStamp();
			int setTimeStamp(const TimeStamp &value);
			bool isYawValid() const;
			double getYaw();
			int setYaw(double value);
			bool isPitchValid() const;
			double getPitch();
			int setPitch(double value);
			bool isRollValid() const;
			double getRoll();
			int setRoll(double value);
			bool isPositionRMSValid() const;
			double getPositionRMS();
			int setPositionRMS(double value);
			bool isZValid() const;
			double getZ();
			int setZ(double value);
			bool isYValid() const;
			double getY();
			int setY(double value);
			bool isXValid() const;
			double getX();
			int setX(double value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			LocalPoseRec &operator=(const LocalPoseRec &value);
			bool operator==(const LocalPoseRec &value) const;
			bool operator!=(const LocalPoseRec &value) const;
			LocalPoseRec();
			LocalPoseRec(const LocalPoseRec &value);
			virtual ~LocalPoseRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
			jUnsignedShortInteger m_AttitudeRMS;
			TimeStamp m_TimeStamp;
			jUnsignedShortInteger m_Yaw;
			jUnsignedShortInteger m_Pitch;
			jUnsignedShortInteger m_Roll;
			jUnsignedInteger m_PositionRMS;
			jUnsignedInteger m_Z;
			jUnsignedInteger m_Y;
			jUnsignedInteger m_X;
		};
	
		LocalPoseRec* const getLocalPoseRec();
		int setLocalPoseRec(const LocalPoseRec &value);
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
		LocalPoseRec m_LocalPoseRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportLocalPose &operator=(const ReportLocalPose &value);
	bool operator==(const ReportLocalPose &value) const;
	bool operator!=(const ReportLocalPose &value) const;
	ReportLocalPose();
	ReportLocalPose(const ReportLocalPose &value);
	virtual ~ReportLocalPose();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALPOSESENSOR_1_0_REPORTLOCALPOSE_H

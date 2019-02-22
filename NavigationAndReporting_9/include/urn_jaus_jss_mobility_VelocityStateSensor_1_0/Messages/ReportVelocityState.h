#ifndef URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_REPORTVELOCITYSTATE_H
#define URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_REPORTVELOCITYSTATE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

class DllExport ReportVelocityState: public JTS::Message
{
public:
	static const int ID = 0x4404;
	
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
		class DllExport ReportVelocityStateRec
		{
		public:
			class DllExport TimeStamp
			{
			public:
				void setParent(ReportVelocityStateRec* parent);
				void setParentPresenceVector();
				jUnsignedInteger getMilliseconds();
				int setMilliseconds(jUnsignedInteger value);
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
				ReportVelocityStateRec* m_parent;
				jUnsignedInteger m_SubFields;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			bool checkPresenceVector(unsigned int index) const;
			bool isTimeStampValid() const;
			TimeStamp* const getTimeStamp();
			int setTimeStamp(const TimeStamp &value);
			bool isVelocityRmsValid() const;
			double getVelocityRms();
			int setVelocityRms(double value);
			bool isVelocityZValid() const;
			double getVelocityZ();
			int setVelocityZ(double value);
			bool isVelocityYValid() const;
			double getVelocityY();
			int setVelocityY(double value);
			bool isVelocityXValid() const;
			double getVelocityX();
			int setVelocityX(double value);
			bool isRollRateValid() const;
			double getRollRate();
			int setRollRate(double value);
			bool isPitchRateValid() const;
			double getPitchRate();
			int setPitchRate(double value);
			bool isYawRateValid() const;
			double getYawRate();
			int setYawRate(double value);
			bool isRateRmsValid() const;
			double getRateRms();
			int setRateRms(double value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ReportVelocityStateRec &operator=(const ReportVelocityStateRec &value);
			bool operator==(const ReportVelocityStateRec &value) const;
			bool operator!=(const ReportVelocityStateRec &value) const;
			ReportVelocityStateRec();
			ReportVelocityStateRec(const ReportVelocityStateRec &value);
			virtual ~ReportVelocityStateRec();
		
		protected:
			int setPresenceVector(unsigned int index);
		
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
			TimeStamp m_TimeStamp;
			jUnsignedInteger m_VelocityRms;
			jUnsignedInteger m_VelocityZ;
			jUnsignedInteger m_VelocityY;
			jUnsignedInteger m_VelocityX;
			jUnsignedShortInteger m_RollRate;
			jUnsignedShortInteger m_PitchRate;
			jUnsignedShortInteger m_YawRate;
			jUnsignedShortInteger m_RateRms;
		};
	
		ReportVelocityStateRec* const getReportVelocityStateRec();
		int setReportVelocityStateRec(const ReportVelocityStateRec &value);
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
		ReportVelocityStateRec m_ReportVelocityStateRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ReportVelocityState &operator=(const ReportVelocityState &value);
	bool operator==(const ReportVelocityState &value) const;
	bool operator!=(const ReportVelocityState &value) const;
	ReportVelocityState();
	ReportVelocityState(const ReportVelocityState &value);
	virtual ~ReportVelocityState();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_REPORTVELOCITYSTATE_H

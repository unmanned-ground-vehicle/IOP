#ifndef URN__JAUS__JSS__MOBILITY__PFMGMTCLIENT_1_0_QUERYHEARTBEATPULSE_H
#define URN__JAUS__JSS__MOBILITY__PFMGMTCLIENT_1_0_QUERYHEARTBEATPULSE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{

class DllExport QueryHeartBeatPulse: public JTS::Message
{
public:
	static const int ID = 0x2202;
	
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

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryHeartBeatPulse &operator=(const QueryHeartBeatPulse &value);
	bool operator==(const QueryHeartBeatPulse &value) const;
	bool operator!=(const QueryHeartBeatPulse &value) const;
	QueryHeartBeatPulse();
	QueryHeartBeatPulse(const QueryHeartBeatPulse &value);
	virtual ~QueryHeartBeatPulse();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
};

}

#endif // URN__JAUS__JSS__MOBILITY__PFMGMTCLIENT_1_0_QUERYHEARTBEATPULSE_H

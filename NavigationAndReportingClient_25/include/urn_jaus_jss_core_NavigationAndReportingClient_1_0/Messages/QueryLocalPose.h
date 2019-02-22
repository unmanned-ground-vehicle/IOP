#ifndef URN_JAUS_JSS_CORE_NAVIGATIONANDREPORTINGCLIENT_1_0_QUERYLOCALPOSE_H
#define URN_JAUS_JSS_CORE_NAVIGATIONANDREPORTINGCLIENT_1_0_QUERYLOCALPOSE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{

class DllExport QueryLocalPose: public JTS::Message
{
public:
	static const int ID = 0x2403;
	
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
		class DllExport QueryLocalBodyRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresence_vector();
			int setPresence_vector(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryLocalBodyRec &operator=(const QueryLocalBodyRec &value);
			bool operator==(const QueryLocalBodyRec &value) const;
			bool operator!=(const QueryLocalBodyRec &value) const;
			QueryLocalBodyRec();
			QueryLocalBodyRec(const QueryLocalBodyRec &value);
			virtual ~QueryLocalBodyRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_Presence_vector;
		};
	
		QueryLocalBodyRec* const getQueryLocalBodyRec();
		int setQueryLocalBodyRec(const QueryLocalBodyRec &value);
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
		QueryLocalBodyRec m_QueryLocalBodyRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryLocalPose &operator=(const QueryLocalPose &value);
	bool operator==(const QueryLocalPose &value) const;
	bool operator!=(const QueryLocalPose &value) const;
	QueryLocalPose();
	QueryLocalPose(const QueryLocalPose &value);
	virtual ~QueryLocalPose();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_CORE_NAVIGATIONANDREPORTINGCLIENT_1_0_QUERYLOCALPOSE_H

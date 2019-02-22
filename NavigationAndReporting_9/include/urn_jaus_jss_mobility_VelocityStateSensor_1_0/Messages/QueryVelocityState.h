#ifndef URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_QUERYVELOCITYSTATE_H
#define URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_QUERYVELOCITYSTATE_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

class DllExport QueryVelocityState: public JTS::Message
{
public:
	static const int ID = 0x2404;
	
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
		class DllExport QueryVelocityStateRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getPresenceVector();
			int setPresenceVector(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryVelocityStateRec &operator=(const QueryVelocityStateRec &value);
			bool operator==(const QueryVelocityStateRec &value) const;
			bool operator!=(const QueryVelocityStateRec &value) const;
			QueryVelocityStateRec();
			QueryVelocityStateRec(const QueryVelocityStateRec &value);
			virtual ~QueryVelocityStateRec();
		
		protected:
			Body* m_parent;
			jUnsignedShortInteger m_PresenceVector;
		};
	
		QueryVelocityStateRec* const getQueryVelocityStateRec();
		int setQueryVelocityStateRec(const QueryVelocityStateRec &value);
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
		QueryVelocityStateRec m_QueryVelocityStateRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryVelocityState &operator=(const QueryVelocityState &value);
	bool operator==(const QueryVelocityState &value) const;
	bool operator!=(const QueryVelocityState &value) const;
	QueryVelocityState();
	QueryVelocityState(const QueryVelocityState &value);
	virtual ~QueryVelocityState();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_VELOCITYSTATESENSOR_1_0_QUERYVELOCITYSTATE_H

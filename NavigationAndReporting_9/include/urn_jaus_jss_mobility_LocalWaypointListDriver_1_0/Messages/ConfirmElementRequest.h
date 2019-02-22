#ifndef URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_CONFIRMELEMENTREQUEST_H
#define URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_CONFIRMELEMENTREQUEST_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

class DllExport ConfirmElementRequest: public JTS::Message
{
public:
	static const int ID = 0x041c;
	
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
	class DllExport ConfirmElementRequestBody
	{
	public:
		class DllExport ConfirmElementRequestRec
		{
		public:
			void setParent(ConfirmElementRequestBody* parent);
			void setParentPresenceVector();
			jUnsignedByte getRequestID();
			int setRequestID(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ConfirmElementRequestRec &operator=(const ConfirmElementRequestRec &value);
			bool operator==(const ConfirmElementRequestRec &value) const;
			bool operator!=(const ConfirmElementRequestRec &value) const;
			ConfirmElementRequestRec();
			ConfirmElementRequestRec(const ConfirmElementRequestRec &value);
			virtual ~ConfirmElementRequestRec();
		
		protected:
			ConfirmElementRequestBody* m_parent;
			jUnsignedByte m_RequestID;
		};
	
		ConfirmElementRequestRec* const getConfirmElementRequestRec();
		int setConfirmElementRequestRec(const ConfirmElementRequestRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		ConfirmElementRequestBody &operator=(const ConfirmElementRequestBody &value);
		bool operator==(const ConfirmElementRequestBody &value) const;
		bool operator!=(const ConfirmElementRequestBody &value) const;
		ConfirmElementRequestBody();
		ConfirmElementRequestBody(const ConfirmElementRequestBody &value);
		virtual ~ConfirmElementRequestBody();
	
	protected:
		ConfirmElementRequestRec m_ConfirmElementRequestRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	ConfirmElementRequestBody* const getConfirmElementRequestBody();
	int setConfirmElementRequestBody(const ConfirmElementRequestBody &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ConfirmElementRequest &operator=(const ConfirmElementRequest &value);
	bool operator==(const ConfirmElementRequest &value) const;
	bool operator!=(const ConfirmElementRequest &value) const;
	ConfirmElementRequest();
	ConfirmElementRequest(const ConfirmElementRequest &value);
	virtual ~ConfirmElementRequest();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	ConfirmElementRequestBody m_ConfirmElementRequestBody;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_CONFIRMELEMENTREQUEST_H

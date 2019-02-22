#ifndef URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_EXECUTELIST_H
#define URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_EXECUTELIST_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

class DllExport ExecuteList: public JTS::Message
{
public:
	static const int ID = 0x041e;
	
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
	class DllExport ExecuteListBody
	{
	public:
		class DllExport ExecuteListRec
		{
		public:
			void setParent(ExecuteListBody* parent);
			void setParentPresenceVector();
			double getElementUID();
			int setElementUID(double value);
			double getSpeed();
			int setSpeed(double value);
			jUnsignedByte getPresenceVector();
			int setPresenceVector(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			ExecuteListRec &operator=(const ExecuteListRec &value);
			bool operator==(const ExecuteListRec &value) const;
			bool operator!=(const ExecuteListRec &value) const;
			ExecuteListRec();
			ExecuteListRec(const ExecuteListRec &value);
			virtual ~ExecuteListRec();
		
		protected:
			ExecuteListBody* m_parent;
			jUnsignedShortInteger m_ElementUID;
			jUnsignedShortInteger m_Speed;
			jUnsignedByte m_PresenceVector;
		};
	
		ExecuteListRec* const getExecuteListRec();
		int setExecuteListRec(const ExecuteListRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		ExecuteListBody &operator=(const ExecuteListBody &value);
		bool operator==(const ExecuteListBody &value) const;
		bool operator!=(const ExecuteListBody &value) const;
		ExecuteListBody();
		ExecuteListBody(const ExecuteListBody &value);
		virtual ~ExecuteListBody();
	
	protected:
		ExecuteListRec m_ExecuteListRec;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	ExecuteListBody* const getExecuteListBody();
	int setExecuteListBody(const ExecuteListBody &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	ExecuteList &operator=(const ExecuteList &value);
	bool operator==(const ExecuteList &value) const;
	bool operator!=(const ExecuteList &value) const;
	ExecuteList();
	ExecuteList(const ExecuteList &value);
	virtual ~ExecuteList();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	ExecuteListBody m_ExecuteListBody;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_EXECUTELIST_H

#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/Messages/QueryHeartBeatPulse.h"

namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{

void QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
{
	m_MessageID = value;
	setParentPresenceVector();
	return 0;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_MessageIDTemp;
	
	m_MessageIDTemp = JSIDL_v_1_0::correctEndianness(m_MessageID);
	memcpy(bytes + pos, &m_MessageIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_MessageIDTemp;
	
	memcpy(&m_MessageIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_MessageID = JSIDL_v_1_0::correctEndianness(m_MessageIDTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec &QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2202;
}

QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2202;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

QueryHeartBeatPulse::JTS_DefaultHeader::DefaultHeaderRec* const QueryHeartBeatPulse::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int QueryHeartBeatPulse::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryHeartBeatPulse::JTS_DefaultHeader::setParentPresenceVector()
{
	// Nothing needed here, placeholder function
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int QueryHeartBeatPulse::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void QueryHeartBeatPulse::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void QueryHeartBeatPulse::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

QueryHeartBeatPulse::JTS_DefaultHeader &QueryHeartBeatPulse::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool QueryHeartBeatPulse::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryHeartBeatPulse::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

QueryHeartBeatPulse::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

QueryHeartBeatPulse::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

QueryHeartBeatPulse::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

QueryHeartBeatPulse::JTS_DefaultHeader* const QueryHeartBeatPulse::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int QueryHeartBeatPulse::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int QueryHeartBeatPulse::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	
	return size;
}

void QueryHeartBeatPulse::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.encode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
}

void QueryHeartBeatPulse::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.decode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
}

QueryHeartBeatPulse &QueryHeartBeatPulse::operator=(const QueryHeartBeatPulse &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	
	return *this;
}

bool QueryHeartBeatPulse::operator==(const QueryHeartBeatPulse &value) const
{
	if (m_JTS_DefaultHeader != value.m_JTS_DefaultHeader)
	{
		return false;
	}
	
	return true;
}

bool QueryHeartBeatPulse::operator!=(const QueryHeartBeatPulse &value) const
{
	return !((*this) == value);
}

QueryHeartBeatPulse::QueryHeartBeatPulse()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	m_IsCommand = false;
}

QueryHeartBeatPulse::QueryHeartBeatPulse(const QueryHeartBeatPulse &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
}

QueryHeartBeatPulse::~QueryHeartBeatPulse()
{
}


}

#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/Messages/QueryLocalPose.h"

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{

void QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec &QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2403;
}

QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2403;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

QueryLocalPose::JTS_DefaultHeader::DefaultHeaderRec* const QueryLocalPose::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int QueryLocalPose::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryLocalPose::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int QueryLocalPose::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void QueryLocalPose::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void QueryLocalPose::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

QueryLocalPose::JTS_DefaultHeader &QueryLocalPose::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool QueryLocalPose::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryLocalPose::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

QueryLocalPose::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

QueryLocalPose::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

QueryLocalPose::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

QueryLocalPose::JTS_DefaultHeader* const QueryLocalPose::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int QueryLocalPose::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void QueryLocalPose::Body::QueryLocalBodyRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryLocalPose::Body::QueryLocalBodyRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryLocalPose::Body::QueryLocalBodyRec::getPresence_vector()
{
	return m_Presence_vector;
}

int QueryLocalPose::Body::QueryLocalBodyRec::setPresence_vector(jUnsignedShortInteger value)
{
	m_Presence_vector = value;
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
const unsigned int QueryLocalPose::Body::QueryLocalBodyRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryLocalPose::Body::QueryLocalBodyRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_Presence_vectorTemp;
	
	m_Presence_vectorTemp = JSIDL_v_1_0::correctEndianness(m_Presence_vector);
	memcpy(bytes + pos, &m_Presence_vectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryLocalPose::Body::QueryLocalBodyRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_Presence_vectorTemp;
	
	memcpy(&m_Presence_vectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_Presence_vector = JSIDL_v_1_0::correctEndianness(m_Presence_vectorTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryLocalPose::Body::QueryLocalBodyRec &QueryLocalPose::Body::QueryLocalBodyRec::operator=(const QueryLocalBodyRec &value)
{
	m_Presence_vector = value.m_Presence_vector;
	
	return *this;
}

bool QueryLocalPose::Body::QueryLocalBodyRec::operator==(const QueryLocalBodyRec &value) const
{
	if (m_Presence_vector != value.m_Presence_vector)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalPose::Body::QueryLocalBodyRec::operator!=(const QueryLocalBodyRec &value) const
{
	return !((*this) == value);
}

QueryLocalPose::Body::QueryLocalBodyRec::QueryLocalBodyRec()
{
	m_parent = NULL;
	m_Presence_vector = 0;
}

QueryLocalPose::Body::QueryLocalBodyRec::QueryLocalBodyRec(const QueryLocalBodyRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_Presence_vector = 0;
	
	/// Copy the values
	m_Presence_vector = value.m_Presence_vector;
}

QueryLocalPose::Body::QueryLocalBodyRec::~QueryLocalBodyRec()
{
}

QueryLocalPose::Body::QueryLocalBodyRec* const QueryLocalPose::Body::getQueryLocalBodyRec()
{
	return &m_QueryLocalBodyRec;
}

int QueryLocalPose::Body::setQueryLocalBodyRec(const QueryLocalBodyRec &value)
{
	m_QueryLocalBodyRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryLocalPose::Body::setParentPresenceVector()
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
const unsigned int QueryLocalPose::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryLocalBodyRec.getSize();
	
	return size;
}

void QueryLocalPose::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryLocalBodyRec.encode(bytes + pos);
	pos += m_QueryLocalBodyRec.getSize();
}

void QueryLocalPose::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryLocalBodyRec.decode(bytes + pos);
	pos += m_QueryLocalBodyRec.getSize();
}

QueryLocalPose::Body &QueryLocalPose::Body::operator=(const Body &value)
{
	m_QueryLocalBodyRec = value.m_QueryLocalBodyRec;
	m_QueryLocalBodyRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryLocalPose::Body::operator==(const Body &value) const
{
	if (m_QueryLocalBodyRec != value.m_QueryLocalBodyRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryLocalPose::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryLocalPose::Body::Body()
{
	m_QueryLocalBodyRec.setParent(this);
	/// No Initialization of m_QueryLocalBodyRec necessary.
}

QueryLocalPose::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryLocalBodyRec.setParent(this);
	/// No Initialization of m_QueryLocalBodyRec necessary.
	
	/// Copy the values
	m_QueryLocalBodyRec = value.m_QueryLocalBodyRec;
	m_QueryLocalBodyRec.setParent(this);
	/// This code is currently not supported
}

QueryLocalPose::Body::~Body()
{
}

QueryLocalPose::Body* const QueryLocalPose::getBody()
{
	return &m_Body;
}

int QueryLocalPose::setBody(const Body &value)
{
	m_Body = value;
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
const unsigned int QueryLocalPose::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryLocalPose::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.encode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
	m_Body.encode(bytes + pos);
	pos += m_Body.getSize();
}

void QueryLocalPose::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.decode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
	m_Body.decode(bytes + pos);
	pos += m_Body.getSize();
}

QueryLocalPose &QueryLocalPose::operator=(const QueryLocalPose &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryLocalPose::operator==(const QueryLocalPose &value) const
{
	if (m_JTS_DefaultHeader != value.m_JTS_DefaultHeader)
	{
		return false;
	}
	if (m_Body != value.m_Body)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalPose::operator!=(const QueryLocalPose &value) const
{
	return !((*this) == value);
}

QueryLocalPose::QueryLocalPose()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

QueryLocalPose::QueryLocalPose(const QueryLocalPose &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

QueryLocalPose::~QueryLocalPose()
{
}


}

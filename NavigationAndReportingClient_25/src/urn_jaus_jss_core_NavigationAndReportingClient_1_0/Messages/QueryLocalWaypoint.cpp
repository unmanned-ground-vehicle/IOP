#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/Messages/QueryLocalWaypoint.h"

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{

void QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec &QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x240d;
}

QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x240d;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

QueryLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec* const QueryLocalWaypoint::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int QueryLocalWaypoint::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryLocalWaypoint::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int QueryLocalWaypoint::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void QueryLocalWaypoint::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void QueryLocalWaypoint::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

QueryLocalWaypoint::JTS_DefaultHeader &QueryLocalWaypoint::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool QueryLocalWaypoint::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryLocalWaypoint::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

QueryLocalWaypoint::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

QueryLocalWaypoint::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

QueryLocalWaypoint::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

QueryLocalWaypoint::JTS_DefaultHeader* const QueryLocalWaypoint::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int QueryLocalWaypoint::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void QueryLocalWaypoint::Body::QueryLocalWaypointRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryLocalWaypoint::Body::QueryLocalWaypointRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte QueryLocalWaypoint::Body::QueryLocalWaypointRec::getQueryPresenceVector()
{
	return m_QueryPresenceVector;
}

int QueryLocalWaypoint::Body::QueryLocalWaypointRec::setQueryPresenceVector(jUnsignedByte value)
{
	m_QueryPresenceVector = value;
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
const unsigned int QueryLocalWaypoint::Body::QueryLocalWaypointRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void QueryLocalWaypoint::Body::QueryLocalWaypointRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_QueryPresenceVectorTemp;
	
	m_QueryPresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVector);
	memcpy(bytes + pos, &m_QueryPresenceVectorTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void QueryLocalWaypoint::Body::QueryLocalWaypointRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_QueryPresenceVectorTemp;
	
	memcpy(&m_QueryPresenceVectorTemp, bytes + pos, sizeof(jUnsignedByte));
	m_QueryPresenceVector = JSIDL_v_1_0::correctEndianness(m_QueryPresenceVectorTemp);
	pos += sizeof(jUnsignedByte);
}

QueryLocalWaypoint::Body::QueryLocalWaypointRec &QueryLocalWaypoint::Body::QueryLocalWaypointRec::operator=(const QueryLocalWaypointRec &value)
{
	m_QueryPresenceVector = value.m_QueryPresenceVector;
	
	return *this;
}

bool QueryLocalWaypoint::Body::QueryLocalWaypointRec::operator==(const QueryLocalWaypointRec &value) const
{
	if (m_QueryPresenceVector != value.m_QueryPresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryLocalWaypoint::Body::QueryLocalWaypointRec::operator!=(const QueryLocalWaypointRec &value) const
{
	return !((*this) == value);
}

QueryLocalWaypoint::Body::QueryLocalWaypointRec::QueryLocalWaypointRec()
{
	m_parent = NULL;
	m_QueryPresenceVector = 0;
}

QueryLocalWaypoint::Body::QueryLocalWaypointRec::QueryLocalWaypointRec(const QueryLocalWaypointRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_QueryPresenceVector = 0;
	
	/// Copy the values
	m_QueryPresenceVector = value.m_QueryPresenceVector;
}

QueryLocalWaypoint::Body::QueryLocalWaypointRec::~QueryLocalWaypointRec()
{
}

QueryLocalWaypoint::Body::QueryLocalWaypointRec* const QueryLocalWaypoint::Body::getQueryLocalWaypointRec()
{
	return &m_QueryLocalWaypointRec;
}

int QueryLocalWaypoint::Body::setQueryLocalWaypointRec(const QueryLocalWaypointRec &value)
{
	m_QueryLocalWaypointRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryLocalWaypoint::Body::setParentPresenceVector()
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
const unsigned int QueryLocalWaypoint::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryLocalWaypointRec.getSize();
	
	return size;
}

void QueryLocalWaypoint::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryLocalWaypointRec.encode(bytes + pos);
	pos += m_QueryLocalWaypointRec.getSize();
}

void QueryLocalWaypoint::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryLocalWaypointRec.decode(bytes + pos);
	pos += m_QueryLocalWaypointRec.getSize();
}

QueryLocalWaypoint::Body &QueryLocalWaypoint::Body::operator=(const Body &value)
{
	m_QueryLocalWaypointRec = value.m_QueryLocalWaypointRec;
	m_QueryLocalWaypointRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryLocalWaypoint::Body::operator==(const Body &value) const
{
	if (m_QueryLocalWaypointRec != value.m_QueryLocalWaypointRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryLocalWaypoint::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryLocalWaypoint::Body::Body()
{
	m_QueryLocalWaypointRec.setParent(this);
	/// No Initialization of m_QueryLocalWaypointRec necessary.
}

QueryLocalWaypoint::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryLocalWaypointRec.setParent(this);
	/// No Initialization of m_QueryLocalWaypointRec necessary.
	
	/// Copy the values
	m_QueryLocalWaypointRec = value.m_QueryLocalWaypointRec;
	m_QueryLocalWaypointRec.setParent(this);
	/// This code is currently not supported
}

QueryLocalWaypoint::Body::~Body()
{
}

QueryLocalWaypoint::Body* const QueryLocalWaypoint::getBody()
{
	return &m_Body;
}

int QueryLocalWaypoint::setBody(const Body &value)
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
const unsigned int QueryLocalWaypoint::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryLocalWaypoint::encode(unsigned char *bytes)
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

void QueryLocalWaypoint::decode(const unsigned char *bytes)
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

QueryLocalWaypoint &QueryLocalWaypoint::operator=(const QueryLocalWaypoint &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryLocalWaypoint::operator==(const QueryLocalWaypoint &value) const
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

bool QueryLocalWaypoint::operator!=(const QueryLocalWaypoint &value) const
{
	return !((*this) == value);
}

QueryLocalWaypoint::QueryLocalWaypoint()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

QueryLocalWaypoint::QueryLocalWaypoint(const QueryLocalWaypoint &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

QueryLocalWaypoint::~QueryLocalWaypoint()
{
}


}

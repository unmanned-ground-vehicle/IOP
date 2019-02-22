#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/QueryVelocityState.h"

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

void QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec &QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x2404;
}

QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x2404;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

QueryVelocityState::JTS_DefaultHeader::DefaultHeaderRec* const QueryVelocityState::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int QueryVelocityState::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryVelocityState::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int QueryVelocityState::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void QueryVelocityState::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void QueryVelocityState::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

QueryVelocityState::JTS_DefaultHeader &QueryVelocityState::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool QueryVelocityState::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool QueryVelocityState::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

QueryVelocityState::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

QueryVelocityState::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

QueryVelocityState::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

QueryVelocityState::JTS_DefaultHeader* const QueryVelocityState::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int QueryVelocityState::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void QueryVelocityState::Body::QueryVelocityStateRec::setParent(Body* parent)
{
	m_parent = parent;
}

void QueryVelocityState::Body::QueryVelocityStateRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger QueryVelocityState::Body::QueryVelocityStateRec::getPresenceVector()
{
	return m_PresenceVector;
}

int QueryVelocityState::Body::QueryVelocityStateRec::setPresenceVector(jUnsignedShortInteger value)
{
	m_PresenceVector = value;
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
const unsigned int QueryVelocityState::Body::QueryVelocityStateRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void QueryVelocityState::Body::QueryVelocityStateRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_PresenceVectorTemp;
	
	m_PresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_PresenceVector);
	memcpy(bytes + pos, &m_PresenceVectorTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void QueryVelocityState::Body::QueryVelocityStateRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_PresenceVectorTemp;
	
	memcpy(&m_PresenceVectorTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_PresenceVector = JSIDL_v_1_0::correctEndianness(m_PresenceVectorTemp);
	pos += sizeof(jUnsignedShortInteger);
}

QueryVelocityState::Body::QueryVelocityStateRec &QueryVelocityState::Body::QueryVelocityStateRec::operator=(const QueryVelocityStateRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool QueryVelocityState::Body::QueryVelocityStateRec::operator==(const QueryVelocityStateRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool QueryVelocityState::Body::QueryVelocityStateRec::operator!=(const QueryVelocityStateRec &value) const
{
	return !((*this) == value);
}

QueryVelocityState::Body::QueryVelocityStateRec::QueryVelocityStateRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
}

QueryVelocityState::Body::QueryVelocityStateRec::QueryVelocityStateRec(const QueryVelocityStateRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
}

QueryVelocityState::Body::QueryVelocityStateRec::~QueryVelocityStateRec()
{
}

QueryVelocityState::Body::QueryVelocityStateRec* const QueryVelocityState::Body::getQueryVelocityStateRec()
{
	return &m_QueryVelocityStateRec;
}

int QueryVelocityState::Body::setQueryVelocityStateRec(const QueryVelocityStateRec &value)
{
	m_QueryVelocityStateRec = value;
	setParentPresenceVector();
	return 0;
}

void QueryVelocityState::Body::setParentPresenceVector()
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
const unsigned int QueryVelocityState::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_QueryVelocityStateRec.getSize();
	
	return size;
}

void QueryVelocityState::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryVelocityStateRec.encode(bytes + pos);
	pos += m_QueryVelocityStateRec.getSize();
}

void QueryVelocityState::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_QueryVelocityStateRec.decode(bytes + pos);
	pos += m_QueryVelocityStateRec.getSize();
}

QueryVelocityState::Body &QueryVelocityState::Body::operator=(const Body &value)
{
	m_QueryVelocityStateRec = value.m_QueryVelocityStateRec;
	m_QueryVelocityStateRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool QueryVelocityState::Body::operator==(const Body &value) const
{
	if (m_QueryVelocityStateRec != value.m_QueryVelocityStateRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool QueryVelocityState::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

QueryVelocityState::Body::Body()
{
	m_QueryVelocityStateRec.setParent(this);
	/// No Initialization of m_QueryVelocityStateRec necessary.
}

QueryVelocityState::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_QueryVelocityStateRec.setParent(this);
	/// No Initialization of m_QueryVelocityStateRec necessary.
	
	/// Copy the values
	m_QueryVelocityStateRec = value.m_QueryVelocityStateRec;
	m_QueryVelocityStateRec.setParent(this);
	/// This code is currently not supported
}

QueryVelocityState::Body::~Body()
{
}

QueryVelocityState::Body* const QueryVelocityState::getBody()
{
	return &m_Body;
}

int QueryVelocityState::setBody(const Body &value)
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
const unsigned int QueryVelocityState::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void QueryVelocityState::encode(unsigned char *bytes)
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

void QueryVelocityState::decode(const unsigned char *bytes)
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

QueryVelocityState &QueryVelocityState::operator=(const QueryVelocityState &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool QueryVelocityState::operator==(const QueryVelocityState &value) const
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

bool QueryVelocityState::operator!=(const QueryVelocityState &value) const
{
	return !((*this) == value);
}

QueryVelocityState::QueryVelocityState()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

QueryVelocityState::QueryVelocityState(const QueryVelocityState &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

QueryVelocityState::~QueryVelocityState()
{
}


}

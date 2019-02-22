#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/ReportElementCount.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

void ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec &ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x441c;
}

ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x441c;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ReportElementCount::JTS_DefaultHeader::DefaultHeaderRec* const ReportElementCount::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ReportElementCount::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportElementCount::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ReportElementCount::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ReportElementCount::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ReportElementCount::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ReportElementCount::JTS_DefaultHeader &ReportElementCount::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ReportElementCount::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportElementCount::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ReportElementCount::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ReportElementCount::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ReportElementCount::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ReportElementCount::JTS_DefaultHeader* const ReportElementCount::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ReportElementCount::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ReportElementCount::Body::ElementCountRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportElementCount::Body::ElementCountRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportElementCount::Body::ElementCountRec::getElementCount()
{
	return m_ElementCount;
}

int ReportElementCount::Body::ElementCountRec::setElementCount(jUnsignedShortInteger value)
{
	m_ElementCount = value;
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
const unsigned int ReportElementCount::Body::ElementCountRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportElementCount::Body::ElementCountRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_ElementCountTemp;
	
	m_ElementCountTemp = JSIDL_v_1_0::correctEndianness(m_ElementCount);
	memcpy(bytes + pos, &m_ElementCountTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void ReportElementCount::Body::ElementCountRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_ElementCountTemp;
	
	memcpy(&m_ElementCountTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_ElementCount = JSIDL_v_1_0::correctEndianness(m_ElementCountTemp);
	pos += sizeof(jUnsignedShortInteger);
}

ReportElementCount::Body::ElementCountRec &ReportElementCount::Body::ElementCountRec::operator=(const ElementCountRec &value)
{
	m_ElementCount = value.m_ElementCount;
	
	return *this;
}

bool ReportElementCount::Body::ElementCountRec::operator==(const ElementCountRec &value) const
{
	if (m_ElementCount != value.m_ElementCount)
	{
		return false;
	}
	
	return true;
}

bool ReportElementCount::Body::ElementCountRec::operator!=(const ElementCountRec &value) const
{
	return !((*this) == value);
}

ReportElementCount::Body::ElementCountRec::ElementCountRec()
{
	m_parent = NULL;
	m_ElementCount = 0;
}

ReportElementCount::Body::ElementCountRec::ElementCountRec(const ElementCountRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_ElementCount = 0;
	
	/// Copy the values
	m_ElementCount = value.m_ElementCount;
}

ReportElementCount::Body::ElementCountRec::~ElementCountRec()
{
}

ReportElementCount::Body::ElementCountRec* const ReportElementCount::Body::getElementCountRec()
{
	return &m_ElementCountRec;
}

int ReportElementCount::Body::setElementCountRec(const ElementCountRec &value)
{
	m_ElementCountRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportElementCount::Body::setParentPresenceVector()
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
const unsigned int ReportElementCount::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ElementCountRec.getSize();
	
	return size;
}

void ReportElementCount::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ElementCountRec.encode(bytes + pos);
	pos += m_ElementCountRec.getSize();
}

void ReportElementCount::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ElementCountRec.decode(bytes + pos);
	pos += m_ElementCountRec.getSize();
}

ReportElementCount::Body &ReportElementCount::Body::operator=(const Body &value)
{
	m_ElementCountRec = value.m_ElementCountRec;
	m_ElementCountRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportElementCount::Body::operator==(const Body &value) const
{
	if (m_ElementCountRec != value.m_ElementCountRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportElementCount::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportElementCount::Body::Body()
{
	m_ElementCountRec.setParent(this);
	/// No Initialization of m_ElementCountRec necessary.
}

ReportElementCount::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ElementCountRec.setParent(this);
	/// No Initialization of m_ElementCountRec necessary.
	
	/// Copy the values
	m_ElementCountRec = value.m_ElementCountRec;
	m_ElementCountRec.setParent(this);
	/// This code is currently not supported
}

ReportElementCount::Body::~Body()
{
}

ReportElementCount::Body* const ReportElementCount::getBody()
{
	return &m_Body;
}

int ReportElementCount::setBody(const Body &value)
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
const unsigned int ReportElementCount::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportElementCount::encode(unsigned char *bytes)
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

void ReportElementCount::decode(const unsigned char *bytes)
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

ReportElementCount &ReportElementCount::operator=(const ReportElementCount &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportElementCount::operator==(const ReportElementCount &value) const
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

bool ReportElementCount::operator!=(const ReportElementCount &value) const
{
	return !((*this) == value);
}

ReportElementCount::ReportElementCount()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

ReportElementCount::ReportElementCount(const ReportElementCount &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

ReportElementCount::~ReportElementCount()
{
}


}

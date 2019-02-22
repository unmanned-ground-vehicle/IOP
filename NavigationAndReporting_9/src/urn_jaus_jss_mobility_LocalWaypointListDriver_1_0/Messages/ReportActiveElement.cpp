#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/ReportActiveElement.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

void ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec &ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x441e;
}

ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x441e;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ReportActiveElement::JTS_DefaultHeader::DefaultHeaderRec* const ReportActiveElement::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ReportActiveElement::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportActiveElement::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ReportActiveElement::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ReportActiveElement::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ReportActiveElement::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ReportActiveElement::JTS_DefaultHeader &ReportActiveElement::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ReportActiveElement::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportActiveElement::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ReportActiveElement::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ReportActiveElement::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ReportActiveElement::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ReportActiveElement::JTS_DefaultHeader* const ReportActiveElement::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ReportActiveElement::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ReportActiveElement::Body::ReportActiveElementRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportActiveElement::Body::ReportActiveElementRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double ReportActiveElement::Body::ReportActiveElementRec::getElementUID()
{
	double value;
	
	double scaleFactor = ( 65534.0 - 1.0 ) / 65535.0;
	double bias = 1.0;
	
	value = m_ElementUID * scaleFactor + bias;
	
	return value;
}

int ReportActiveElement::Body::ReportActiveElementRec::setElementUID(double value)
{
	if ((value >= 1.0) && (value <= 65534.0))
	{
		double scaleFactor = ( 65534.0 - 1.0 ) / 65535.0;
		double bias = 1.0;
		
		m_ElementUID= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int ReportActiveElement::Body::ReportActiveElementRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportActiveElement::Body::ReportActiveElementRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_ElementUIDTemp;
	
	m_ElementUIDTemp = JSIDL_v_1_0::correctEndianness(m_ElementUID);
	memcpy(bytes + pos, &m_ElementUIDTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void ReportActiveElement::Body::ReportActiveElementRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_ElementUIDTemp;
	
	memcpy(&m_ElementUIDTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_ElementUID = JSIDL_v_1_0::correctEndianness(m_ElementUIDTemp);
	pos += sizeof(jUnsignedShortInteger);
}

ReportActiveElement::Body::ReportActiveElementRec &ReportActiveElement::Body::ReportActiveElementRec::operator=(const ReportActiveElementRec &value)
{
	m_ElementUID = value.m_ElementUID;
	
	return *this;
}

bool ReportActiveElement::Body::ReportActiveElementRec::operator==(const ReportActiveElementRec &value) const
{
	if (m_ElementUID != value.m_ElementUID)
	{
		return false;
	}
	
	return true;
}

bool ReportActiveElement::Body::ReportActiveElementRec::operator!=(const ReportActiveElementRec &value) const
{
	return !((*this) == value);
}

ReportActiveElement::Body::ReportActiveElementRec::ReportActiveElementRec()
{
	m_parent = NULL;
	m_ElementUID = 0;
}

ReportActiveElement::Body::ReportActiveElementRec::ReportActiveElementRec(const ReportActiveElementRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_ElementUID = 0;
	
	/// Copy the values
	m_ElementUID = value.m_ElementUID;
}

ReportActiveElement::Body::ReportActiveElementRec::~ReportActiveElementRec()
{
}

ReportActiveElement::Body::ReportActiveElementRec* const ReportActiveElement::Body::getReportActiveElementRec()
{
	return &m_ReportActiveElementRec;
}

int ReportActiveElement::Body::setReportActiveElementRec(const ReportActiveElementRec &value)
{
	m_ReportActiveElementRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportActiveElement::Body::setParentPresenceVector()
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
const unsigned int ReportActiveElement::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ReportActiveElementRec.getSize();
	
	return size;
}

void ReportActiveElement::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportActiveElementRec.encode(bytes + pos);
	pos += m_ReportActiveElementRec.getSize();
}

void ReportActiveElement::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportActiveElementRec.decode(bytes + pos);
	pos += m_ReportActiveElementRec.getSize();
}

ReportActiveElement::Body &ReportActiveElement::Body::operator=(const Body &value)
{
	m_ReportActiveElementRec = value.m_ReportActiveElementRec;
	m_ReportActiveElementRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportActiveElement::Body::operator==(const Body &value) const
{
	if (m_ReportActiveElementRec != value.m_ReportActiveElementRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportActiveElement::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportActiveElement::Body::Body()
{
	m_ReportActiveElementRec.setParent(this);
	/// No Initialization of m_ReportActiveElementRec necessary.
}

ReportActiveElement::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ReportActiveElementRec.setParent(this);
	/// No Initialization of m_ReportActiveElementRec necessary.
	
	/// Copy the values
	m_ReportActiveElementRec = value.m_ReportActiveElementRec;
	m_ReportActiveElementRec.setParent(this);
	/// This code is currently not supported
}

ReportActiveElement::Body::~Body()
{
}

ReportActiveElement::Body* const ReportActiveElement::getBody()
{
	return &m_Body;
}

int ReportActiveElement::setBody(const Body &value)
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
const unsigned int ReportActiveElement::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportActiveElement::encode(unsigned char *bytes)
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

void ReportActiveElement::decode(const unsigned char *bytes)
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

ReportActiveElement &ReportActiveElement::operator=(const ReportActiveElement &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportActiveElement::operator==(const ReportActiveElement &value) const
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

bool ReportActiveElement::operator!=(const ReportActiveElement &value) const
{
	return !((*this) == value);
}

ReportActiveElement::ReportActiveElement()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
}

ReportActiveElement::ReportActiveElement(const ReportActiveElement &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

ReportActiveElement::~ReportActiveElement()
{
}


}

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/ConfirmElementRequest.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

void ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec &ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x041c;
}

ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x041c;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ConfirmElementRequest::JTS_DefaultHeader::DefaultHeaderRec* const ConfirmElementRequest::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ConfirmElementRequest::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ConfirmElementRequest::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ConfirmElementRequest::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ConfirmElementRequest::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ConfirmElementRequest::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ConfirmElementRequest::JTS_DefaultHeader &ConfirmElementRequest::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ConfirmElementRequest::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ConfirmElementRequest::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ConfirmElementRequest::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ConfirmElementRequest::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ConfirmElementRequest::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ConfirmElementRequest::JTS_DefaultHeader* const ConfirmElementRequest::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ConfirmElementRequest::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::setParent(ConfirmElementRequestBody* parent)
{
	m_parent = parent;
}

void ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::getRequestID()
{
	return m_RequestID;
}

int ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::setRequestID(jUnsignedByte value)
{
	m_RequestID = value;
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
const unsigned int ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	
	return size;
}

void ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_RequestIDTemp;
	
	m_RequestIDTemp = JSIDL_v_1_0::correctEndianness(m_RequestID);
	memcpy(bytes + pos, &m_RequestIDTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_RequestIDTemp;
	
	memcpy(&m_RequestIDTemp, bytes + pos, sizeof(jUnsignedByte));
	m_RequestID = JSIDL_v_1_0::correctEndianness(m_RequestIDTemp);
	pos += sizeof(jUnsignedByte);
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec &ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::operator=(const ConfirmElementRequestRec &value)
{
	m_RequestID = value.m_RequestID;
	
	return *this;
}

bool ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::operator==(const ConfirmElementRequestRec &value) const
{
	if (m_RequestID != value.m_RequestID)
	{
		return false;
	}
	
	return true;
}

bool ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::operator!=(const ConfirmElementRequestRec &value) const
{
	return !((*this) == value);
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::ConfirmElementRequestRec()
{
	m_parent = NULL;
	m_RequestID = 0;
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::ConfirmElementRequestRec(const ConfirmElementRequestRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_RequestID = 0;
	
	/// Copy the values
	m_RequestID = value.m_RequestID;
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec::~ConfirmElementRequestRec()
{
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestRec* const ConfirmElementRequest::ConfirmElementRequestBody::getConfirmElementRequestRec()
{
	return &m_ConfirmElementRequestRec;
}

int ConfirmElementRequest::ConfirmElementRequestBody::setConfirmElementRequestRec(const ConfirmElementRequestRec &value)
{
	m_ConfirmElementRequestRec = value;
	setParentPresenceVector();
	return 0;
}

void ConfirmElementRequest::ConfirmElementRequestBody::setParentPresenceVector()
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
const unsigned int ConfirmElementRequest::ConfirmElementRequestBody::getSize()
{
	unsigned int size = 0;
	
	size += m_ConfirmElementRequestRec.getSize();
	
	return size;
}

void ConfirmElementRequest::ConfirmElementRequestBody::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ConfirmElementRequestRec.encode(bytes + pos);
	pos += m_ConfirmElementRequestRec.getSize();
}

void ConfirmElementRequest::ConfirmElementRequestBody::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ConfirmElementRequestRec.decode(bytes + pos);
	pos += m_ConfirmElementRequestRec.getSize();
}

ConfirmElementRequest::ConfirmElementRequestBody &ConfirmElementRequest::ConfirmElementRequestBody::operator=(const ConfirmElementRequestBody &value)
{
	m_ConfirmElementRequestRec = value.m_ConfirmElementRequestRec;
	m_ConfirmElementRequestRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ConfirmElementRequest::ConfirmElementRequestBody::operator==(const ConfirmElementRequestBody &value) const
{
	if (m_ConfirmElementRequestRec != value.m_ConfirmElementRequestRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ConfirmElementRequest::ConfirmElementRequestBody::operator!=(const ConfirmElementRequestBody &value) const
{
	return !((*this) == value);
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestBody()
{
	m_ConfirmElementRequestRec.setParent(this);
	/// No Initialization of m_ConfirmElementRequestRec necessary.
}

ConfirmElementRequest::ConfirmElementRequestBody::ConfirmElementRequestBody(const ConfirmElementRequestBody &value)
{
	/// Initiliaze the protected variables
	m_ConfirmElementRequestRec.setParent(this);
	/// No Initialization of m_ConfirmElementRequestRec necessary.
	
	/// Copy the values
	m_ConfirmElementRequestRec = value.m_ConfirmElementRequestRec;
	m_ConfirmElementRequestRec.setParent(this);
	/// This code is currently not supported
}

ConfirmElementRequest::ConfirmElementRequestBody::~ConfirmElementRequestBody()
{
}

ConfirmElementRequest::ConfirmElementRequestBody* const ConfirmElementRequest::getConfirmElementRequestBody()
{
	return &m_ConfirmElementRequestBody;
}

int ConfirmElementRequest::setConfirmElementRequestBody(const ConfirmElementRequestBody &value)
{
	m_ConfirmElementRequestBody = value;
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
const unsigned int ConfirmElementRequest::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_ConfirmElementRequestBody.getSize();
	
	return size;
}

void ConfirmElementRequest::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.encode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
	m_ConfirmElementRequestBody.encode(bytes + pos);
	pos += m_ConfirmElementRequestBody.getSize();
}

void ConfirmElementRequest::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.decode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
	m_ConfirmElementRequestBody.decode(bytes + pos);
	pos += m_ConfirmElementRequestBody.getSize();
}

ConfirmElementRequest &ConfirmElementRequest::operator=(const ConfirmElementRequest &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_ConfirmElementRequestBody = value.m_ConfirmElementRequestBody;
	
	return *this;
}

bool ConfirmElementRequest::operator==(const ConfirmElementRequest &value) const
{
	if (m_JTS_DefaultHeader != value.m_JTS_DefaultHeader)
	{
		return false;
	}
	if (m_ConfirmElementRequestBody != value.m_ConfirmElementRequestBody)
	{
		return false;
	}
	
	return true;
}

bool ConfirmElementRequest::operator!=(const ConfirmElementRequest &value) const
{
	return !((*this) == value);
}

ConfirmElementRequest::ConfirmElementRequest()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_ConfirmElementRequestBody necessary.
	m_IsCommand = true;
}

ConfirmElementRequest::ConfirmElementRequest(const ConfirmElementRequest &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_ConfirmElementRequestBody necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_ConfirmElementRequestBody = value.m_ConfirmElementRequestBody;
}

ConfirmElementRequest::~ConfirmElementRequest()
{
}


}

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/ExecuteList.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

void ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ExecuteList::JTS_DefaultHeader::DefaultHeaderRec &ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x041e;
}

ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x041e;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ExecuteList::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ExecuteList::JTS_DefaultHeader::DefaultHeaderRec* const ExecuteList::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ExecuteList::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ExecuteList::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ExecuteList::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ExecuteList::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ExecuteList::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ExecuteList::JTS_DefaultHeader &ExecuteList::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ExecuteList::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ExecuteList::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ExecuteList::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ExecuteList::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ExecuteList::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ExecuteList::JTS_DefaultHeader* const ExecuteList::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ExecuteList::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ExecuteList::ExecuteListBody::ExecuteListRec::setParent(ExecuteListBody* parent)
{
	m_parent = parent;
}

void ExecuteList::ExecuteListBody::ExecuteListRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double ExecuteList::ExecuteListBody::ExecuteListRec::getElementUID()
{
	double value;
	
	double scaleFactor = ( 65534.0 - 1.0 ) / 65535.0;
	double bias = 1.0;
	
	value = m_ElementUID * scaleFactor + bias;
	
	return value;
}

int ExecuteList::ExecuteListBody::ExecuteListRec::setElementUID(double value)
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

double ExecuteList::ExecuteListBody::ExecuteListRec::getSpeed()
{
	double value;
	
	double scaleFactor = ( 327.67 - 0.0 ) / 65535.0;
	double bias = 0.0;
	
	value = m_Speed * scaleFactor + bias;
	
	return value;
}

int ExecuteList::ExecuteListBody::ExecuteListRec::setSpeed(double value)
{
	if ((value >= 0.0) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - 0.0 ) / 65535.0;
		double bias = 0.0;
		
		m_Speed= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedByte ExecuteList::ExecuteListBody::ExecuteListRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ExecuteList::ExecuteListBody::ExecuteListRec::setPresenceVector(jUnsignedByte value)
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
const unsigned int ExecuteList::ExecuteListBody::ExecuteListRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedShortInteger);
	size += sizeof(jUnsignedByte);
	
	return size;
}

void ExecuteList::ExecuteListBody::ExecuteListRec::encode(unsigned char *bytes)
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
	jUnsignedShortInteger m_SpeedTemp;
	
	m_SpeedTemp = JSIDL_v_1_0::correctEndianness(m_Speed);
	memcpy(bytes + pos, &m_SpeedTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
	jUnsignedByte m_PresenceVectorTemp;
	
	m_PresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_PresenceVector);
	memcpy(bytes + pos, &m_PresenceVectorTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
}

void ExecuteList::ExecuteListBody::ExecuteListRec::decode(const unsigned char *bytes)
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
	jUnsignedShortInteger m_SpeedTemp;
	
	memcpy(&m_SpeedTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_Speed = JSIDL_v_1_0::correctEndianness(m_SpeedTemp);
	pos += sizeof(jUnsignedShortInteger);
	jUnsignedByte m_PresenceVectorTemp;
	
	memcpy(&m_PresenceVectorTemp, bytes + pos, sizeof(jUnsignedByte));
	m_PresenceVector = JSIDL_v_1_0::correctEndianness(m_PresenceVectorTemp);
	pos += sizeof(jUnsignedByte);
}

ExecuteList::ExecuteListBody::ExecuteListRec &ExecuteList::ExecuteListBody::ExecuteListRec::operator=(const ExecuteListRec &value)
{
	m_ElementUID = value.m_ElementUID;
	m_Speed = value.m_Speed;
	m_PresenceVector = value.m_PresenceVector;
	
	return *this;
}

bool ExecuteList::ExecuteListBody::ExecuteListRec::operator==(const ExecuteListRec &value) const
{
	if (m_ElementUID != value.m_ElementUID)
	{
		return false;
	}
	if (m_Speed != value.m_Speed)
	{
		return false;
	}
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	return true;
}

bool ExecuteList::ExecuteListBody::ExecuteListRec::operator!=(const ExecuteListRec &value) const
{
	return !((*this) == value);
}

ExecuteList::ExecuteListBody::ExecuteListRec::ExecuteListRec()
{
	m_parent = NULL;
	m_ElementUID = 0;
	m_Speed = 0;
	m_PresenceVector = 0;
}

ExecuteList::ExecuteListBody::ExecuteListRec::ExecuteListRec(const ExecuteListRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_ElementUID = 0;
	m_Speed = 0;
	m_PresenceVector = 0;
	
	/// Copy the values
	m_ElementUID = value.m_ElementUID;
	m_Speed = value.m_Speed;
	m_PresenceVector = value.m_PresenceVector;
}

ExecuteList::ExecuteListBody::ExecuteListRec::~ExecuteListRec()
{
}

ExecuteList::ExecuteListBody::ExecuteListRec* const ExecuteList::ExecuteListBody::getExecuteListRec()
{
	return &m_ExecuteListRec;
}

int ExecuteList::ExecuteListBody::setExecuteListRec(const ExecuteListRec &value)
{
	m_ExecuteListRec = value;
	setParentPresenceVector();
	return 0;
}

void ExecuteList::ExecuteListBody::setParentPresenceVector()
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
const unsigned int ExecuteList::ExecuteListBody::getSize()
{
	unsigned int size = 0;
	
	size += m_ExecuteListRec.getSize();
	
	return size;
}

void ExecuteList::ExecuteListBody::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ExecuteListRec.encode(bytes + pos);
	pos += m_ExecuteListRec.getSize();
}

void ExecuteList::ExecuteListBody::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ExecuteListRec.decode(bytes + pos);
	pos += m_ExecuteListRec.getSize();
}

ExecuteList::ExecuteListBody &ExecuteList::ExecuteListBody::operator=(const ExecuteListBody &value)
{
	m_ExecuteListRec = value.m_ExecuteListRec;
	m_ExecuteListRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ExecuteList::ExecuteListBody::operator==(const ExecuteListBody &value) const
{
	if (m_ExecuteListRec != value.m_ExecuteListRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ExecuteList::ExecuteListBody::operator!=(const ExecuteListBody &value) const
{
	return !((*this) == value);
}

ExecuteList::ExecuteListBody::ExecuteListBody()
{
	m_ExecuteListRec.setParent(this);
	/// No Initialization of m_ExecuteListRec necessary.
}

ExecuteList::ExecuteListBody::ExecuteListBody(const ExecuteListBody &value)
{
	/// Initiliaze the protected variables
	m_ExecuteListRec.setParent(this);
	/// No Initialization of m_ExecuteListRec necessary.
	
	/// Copy the values
	m_ExecuteListRec = value.m_ExecuteListRec;
	m_ExecuteListRec.setParent(this);
	/// This code is currently not supported
}

ExecuteList::ExecuteListBody::~ExecuteListBody()
{
}

ExecuteList::ExecuteListBody* const ExecuteList::getExecuteListBody()
{
	return &m_ExecuteListBody;
}

int ExecuteList::setExecuteListBody(const ExecuteListBody &value)
{
	m_ExecuteListBody = value;
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
const unsigned int ExecuteList::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_ExecuteListBody.getSize();
	
	return size;
}

void ExecuteList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.encode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
	m_ExecuteListBody.encode(bytes + pos);
	pos += m_ExecuteListBody.getSize();
}

void ExecuteList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_JTS_DefaultHeader.decode(bytes + pos);
	pos += m_JTS_DefaultHeader.getSize();
	m_ExecuteListBody.decode(bytes + pos);
	pos += m_ExecuteListBody.getSize();
}

ExecuteList &ExecuteList::operator=(const ExecuteList &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_ExecuteListBody = value.m_ExecuteListBody;
	
	return *this;
}

bool ExecuteList::operator==(const ExecuteList &value) const
{
	if (m_JTS_DefaultHeader != value.m_JTS_DefaultHeader)
	{
		return false;
	}
	if (m_ExecuteListBody != value.m_ExecuteListBody)
	{
		return false;
	}
	
	return true;
}

bool ExecuteList::operator!=(const ExecuteList &value) const
{
	return !((*this) == value);
}

ExecuteList::ExecuteList()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_ExecuteListBody necessary.
	m_IsCommand = false;
}

ExecuteList::ExecuteList(const ExecuteList &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_ExecuteListBody necessary.
	m_IsCommand = false;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_ExecuteListBody = value.m_ExecuteListBody;
}

ExecuteList::~ExecuteList()
{
}


}

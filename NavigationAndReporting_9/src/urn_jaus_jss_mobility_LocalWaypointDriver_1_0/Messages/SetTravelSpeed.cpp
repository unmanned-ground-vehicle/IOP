#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/Messages/SetTravelSpeed.h"

namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0
{

void SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec &SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x040a;
}

SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x040a;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

SetTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec* const SetTravelSpeed::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int SetTravelSpeed::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetTravelSpeed::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int SetTravelSpeed::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void SetTravelSpeed::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void SetTravelSpeed::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

SetTravelSpeed::JTS_DefaultHeader &SetTravelSpeed::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool SetTravelSpeed::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool SetTravelSpeed::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

SetTravelSpeed::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

SetTravelSpeed::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

SetTravelSpeed::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

SetTravelSpeed::JTS_DefaultHeader* const SetTravelSpeed::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int SetTravelSpeed::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void SetTravelSpeed::Body::TravelSpeedRec::setParent(Body* parent)
{
	m_parent = parent;
}

void SetTravelSpeed::Body::TravelSpeedRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double SetTravelSpeed::Body::TravelSpeedRec::getSpeed()
{
	double value;
	
	double scaleFactor = ( 327.67 - 0.0 ) / 65535.0;
	double bias = 0.0;
	
	value = m_Speed * scaleFactor + bias;
	
	return value;
}

int SetTravelSpeed::Body::TravelSpeedRec::setSpeed(double value)
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

/**
 * Returns the size of memory the used data members of the class occupies.
 * This is not necessarily the same size of memory the class actually occupies.
 * Eg. A union of an int and a double may occupy 8 bytes. However, if the data
 *     stored is an int, this function will return a size of 4 bytes.
 * 
 * @return
 */
const unsigned int SetTravelSpeed::Body::TravelSpeedRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetTravelSpeed::Body::TravelSpeedRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_SpeedTemp;
	
	m_SpeedTemp = JSIDL_v_1_0::correctEndianness(m_Speed);
	memcpy(bytes + pos, &m_SpeedTemp, sizeof(jUnsignedShortInteger));
	pos += sizeof(jUnsignedShortInteger);
}

void SetTravelSpeed::Body::TravelSpeedRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedShortInteger m_SpeedTemp;
	
	memcpy(&m_SpeedTemp, bytes + pos, sizeof(jUnsignedShortInteger));
	m_Speed = JSIDL_v_1_0::correctEndianness(m_SpeedTemp);
	pos += sizeof(jUnsignedShortInteger);
}

SetTravelSpeed::Body::TravelSpeedRec &SetTravelSpeed::Body::TravelSpeedRec::operator=(const TravelSpeedRec &value)
{
	m_Speed = value.m_Speed;
	
	return *this;
}

bool SetTravelSpeed::Body::TravelSpeedRec::operator==(const TravelSpeedRec &value) const
{
	if (m_Speed != value.m_Speed)
	{
		return false;
	}
	
	return true;
}

bool SetTravelSpeed::Body::TravelSpeedRec::operator!=(const TravelSpeedRec &value) const
{
	return !((*this) == value);
}

SetTravelSpeed::Body::TravelSpeedRec::TravelSpeedRec()
{
	m_parent = NULL;
	m_Speed = 0;
}

SetTravelSpeed::Body::TravelSpeedRec::TravelSpeedRec(const TravelSpeedRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_Speed = 0;
	
	/// Copy the values
	m_Speed = value.m_Speed;
}

SetTravelSpeed::Body::TravelSpeedRec::~TravelSpeedRec()
{
}

SetTravelSpeed::Body::TravelSpeedRec* const SetTravelSpeed::Body::getTravelSpeedRec()
{
	return &m_TravelSpeedRec;
}

int SetTravelSpeed::Body::setTravelSpeedRec(const TravelSpeedRec &value)
{
	m_TravelSpeedRec = value;
	setParentPresenceVector();
	return 0;
}

void SetTravelSpeed::Body::setParentPresenceVector()
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
const unsigned int SetTravelSpeed::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_TravelSpeedRec.getSize();
	
	return size;
}

void SetTravelSpeed::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_TravelSpeedRec.encode(bytes + pos);
	pos += m_TravelSpeedRec.getSize();
}

void SetTravelSpeed::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_TravelSpeedRec.decode(bytes + pos);
	pos += m_TravelSpeedRec.getSize();
}

SetTravelSpeed::Body &SetTravelSpeed::Body::operator=(const Body &value)
{
	m_TravelSpeedRec = value.m_TravelSpeedRec;
	m_TravelSpeedRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetTravelSpeed::Body::operator==(const Body &value) const
{
	if (m_TravelSpeedRec != value.m_TravelSpeedRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetTravelSpeed::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetTravelSpeed::Body::Body()
{
	m_TravelSpeedRec.setParent(this);
	/// No Initialization of m_TravelSpeedRec necessary.
}

SetTravelSpeed::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_TravelSpeedRec.setParent(this);
	/// No Initialization of m_TravelSpeedRec necessary.
	
	/// Copy the values
	m_TravelSpeedRec = value.m_TravelSpeedRec;
	m_TravelSpeedRec.setParent(this);
	/// This code is currently not supported
}

SetTravelSpeed::Body::~Body()
{
}

SetTravelSpeed::Body* const SetTravelSpeed::getBody()
{
	return &m_Body;
}

int SetTravelSpeed::setBody(const Body &value)
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
const unsigned int SetTravelSpeed::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetTravelSpeed::encode(unsigned char *bytes)
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

void SetTravelSpeed::decode(const unsigned char *bytes)
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

SetTravelSpeed &SetTravelSpeed::operator=(const SetTravelSpeed &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetTravelSpeed::operator==(const SetTravelSpeed &value) const
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

bool SetTravelSpeed::operator!=(const SetTravelSpeed &value) const
{
	return !((*this) == value);
}

SetTravelSpeed::SetTravelSpeed()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetTravelSpeed::SetTravelSpeed(const SetTravelSpeed &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

SetTravelSpeed::~SetTravelSpeed()
{
}


}

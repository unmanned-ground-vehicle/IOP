#include "urn_jaus_jss_mobility_LocalWaypointDriver_1_0/Messages/ReportTravelSpeed.h"

namespace urn_jaus_jss_mobility_LocalWaypointDriver_1_0
{

void ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec &ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x440a;
}

ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x440a;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ReportTravelSpeed::JTS_DefaultHeader::DefaultHeaderRec* const ReportTravelSpeed::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ReportTravelSpeed::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportTravelSpeed::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ReportTravelSpeed::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ReportTravelSpeed::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ReportTravelSpeed::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ReportTravelSpeed::JTS_DefaultHeader &ReportTravelSpeed::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ReportTravelSpeed::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportTravelSpeed::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ReportTravelSpeed::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ReportTravelSpeed::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ReportTravelSpeed::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ReportTravelSpeed::JTS_DefaultHeader* const ReportTravelSpeed::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ReportTravelSpeed::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ReportTravelSpeed::Body::TravelSpeedRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportTravelSpeed::Body::TravelSpeedRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double ReportTravelSpeed::Body::TravelSpeedRec::getSpeed()
{
	double value;
	
	double scaleFactor = ( 327.67 - 0.0 ) / 65535.0;
	double bias = 0.0;
	
	value = m_Speed * scaleFactor + bias;
	
	return value;
}

int ReportTravelSpeed::Body::TravelSpeedRec::setSpeed(double value)
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
const unsigned int ReportTravelSpeed::Body::TravelSpeedRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportTravelSpeed::Body::TravelSpeedRec::encode(unsigned char *bytes)
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

void ReportTravelSpeed::Body::TravelSpeedRec::decode(const unsigned char *bytes)
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

ReportTravelSpeed::Body::TravelSpeedRec &ReportTravelSpeed::Body::TravelSpeedRec::operator=(const TravelSpeedRec &value)
{
	m_Speed = value.m_Speed;
	
	return *this;
}

bool ReportTravelSpeed::Body::TravelSpeedRec::operator==(const TravelSpeedRec &value) const
{
	if (m_Speed != value.m_Speed)
	{
		return false;
	}
	
	return true;
}

bool ReportTravelSpeed::Body::TravelSpeedRec::operator!=(const TravelSpeedRec &value) const
{
	return !((*this) == value);
}

ReportTravelSpeed::Body::TravelSpeedRec::TravelSpeedRec()
{
	m_parent = NULL;
	m_Speed = 0;
}

ReportTravelSpeed::Body::TravelSpeedRec::TravelSpeedRec(const TravelSpeedRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_Speed = 0;
	
	/// Copy the values
	m_Speed = value.m_Speed;
}

ReportTravelSpeed::Body::TravelSpeedRec::~TravelSpeedRec()
{
}

ReportTravelSpeed::Body::TravelSpeedRec* const ReportTravelSpeed::Body::getTravelSpeedRec()
{
	return &m_TravelSpeedRec;
}

int ReportTravelSpeed::Body::setTravelSpeedRec(const TravelSpeedRec &value)
{
	m_TravelSpeedRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportTravelSpeed::Body::setParentPresenceVector()
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
const unsigned int ReportTravelSpeed::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_TravelSpeedRec.getSize();
	
	return size;
}

void ReportTravelSpeed::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_TravelSpeedRec.encode(bytes + pos);
	pos += m_TravelSpeedRec.getSize();
}

void ReportTravelSpeed::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_TravelSpeedRec.decode(bytes + pos);
	pos += m_TravelSpeedRec.getSize();
}

ReportTravelSpeed::Body &ReportTravelSpeed::Body::operator=(const Body &value)
{
	m_TravelSpeedRec = value.m_TravelSpeedRec;
	m_TravelSpeedRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportTravelSpeed::Body::operator==(const Body &value) const
{
	if (m_TravelSpeedRec != value.m_TravelSpeedRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportTravelSpeed::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportTravelSpeed::Body::Body()
{
	m_TravelSpeedRec.setParent(this);
	/// No Initialization of m_TravelSpeedRec necessary.
}

ReportTravelSpeed::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_TravelSpeedRec.setParent(this);
	/// No Initialization of m_TravelSpeedRec necessary.
	
	/// Copy the values
	m_TravelSpeedRec = value.m_TravelSpeedRec;
	m_TravelSpeedRec.setParent(this);
	/// This code is currently not supported
}

ReportTravelSpeed::Body::~Body()
{
}

ReportTravelSpeed::Body* const ReportTravelSpeed::getBody()
{
	return &m_Body;
}

int ReportTravelSpeed::setBody(const Body &value)
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
const unsigned int ReportTravelSpeed::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportTravelSpeed::encode(unsigned char *bytes)
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

void ReportTravelSpeed::decode(const unsigned char *bytes)
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

ReportTravelSpeed &ReportTravelSpeed::operator=(const ReportTravelSpeed &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportTravelSpeed::operator==(const ReportTravelSpeed &value) const
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

bool ReportTravelSpeed::operator!=(const ReportTravelSpeed &value) const
{
	return !((*this) == value);
}

ReportTravelSpeed::ReportTravelSpeed()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

ReportTravelSpeed::ReportTravelSpeed(const ReportTravelSpeed &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

ReportTravelSpeed::~ReportTravelSpeed()
{
}


}

#include "urn_jaus_jss_core_NavigationAndReportingClient_1_0/Messages/SetLocalWaypoint.h"

namespace urn_jaus_jss_core_NavigationAndReportingClient_1_0
{

void SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec &SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x040d;
}

SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x040d;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

SetLocalWaypoint::JTS_DefaultHeader::DefaultHeaderRec* const SetLocalWaypoint::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int SetLocalWaypoint::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetLocalWaypoint::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int SetLocalWaypoint::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void SetLocalWaypoint::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void SetLocalWaypoint::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

SetLocalWaypoint::JTS_DefaultHeader &SetLocalWaypoint::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool SetLocalWaypoint::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool SetLocalWaypoint::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

SetLocalWaypoint::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

SetLocalWaypoint::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

SetLocalWaypoint::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

SetLocalWaypoint::JTS_DefaultHeader* const SetLocalWaypoint::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int SetLocalWaypoint::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void SetLocalWaypoint::Body::SetLocalWaypointRec::setParent(Body* parent)
{
	m_parent = parent;
}

void SetLocalWaypoint::Body::SetLocalWaypointRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte SetLocalWaypoint::Body::SetLocalWaypointRec::getPresenceVector()
{
	return m_PresenceVector;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::isYawValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getYaw()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
	double bias = -3.141592653589793;
	
	value = m_Yaw * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setYaw(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
		double bias = -3.141592653589793;
		
		m_Yaw= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(0);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::isRollValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getRoll()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
	double bias = -3.141592653589793;
	
	value = m_Roll * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setRoll(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
		double bias = -3.141592653589793;
		
		m_Roll= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::isPitchValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getPitch()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
	double bias = -3.141592653589793;
	
	value = m_Pitch * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setPitch(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
		double bias = -3.141592653589793;
		
		m_Pitch= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getX()
{
	double value;
	
	double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
	double bias = -100000.0;
	
	value = m_X * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setX(double value)
{
	if ((value >= -100000.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
		double bias = -100000.0;
		
		m_X= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getY()
{
	double value;
	
	double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
	double bias = -100000.0;
	
	value = m_Y * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setY(double value)
{
	if ((value >= -100000.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
		double bias = -100000.0;
		
		m_Y= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getZ()
{
	double value;
	
	double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
	double bias = -100000.0;
	
	value = m_Z * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setZ(double value)
{
	if ((value >= -100000.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
		double bias = -100000.0;
		
		m_Z= (jUnsignedInteger)((value - bias) / scaleFactor);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::isWaypointToleranceValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getWaypointTolerance()
{
	double value;
	
	double scaleFactor = ( 100.0 - 0.0 ) / 65535.0;
	double bias = 0.0;
	
	value = m_WaypointTolerance * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setWaypointTolerance(double value)
{
	if ((value >= 0.0) && (value <= 100.0))
	{
		double scaleFactor = ( 100.0 - 0.0 ) / 65535.0;
		double bias = 0.0;
		
		m_WaypointTolerance= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::isPathToleranceValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double SetLocalWaypoint::Body::SetLocalWaypointRec::getPathTolerance()
{
	double value;
	
	double scaleFactor = ( 100000.0 - 0.0 ) / 4.294967295E9;
	double bias = 0.0;
	
	value = m_PathTolerance * scaleFactor + bias;
	
	return value;
}

int SetLocalWaypoint::Body::SetLocalWaypointRec::setPathTolerance(double value)
{
	if ((value >= 0.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - 0.0 ) / 4.294967295E9;
		double bias = 0.0;
		
		m_PathTolerance= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
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
const unsigned int SetLocalWaypoint::Body::SetLocalWaypointRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	if (checkPresenceVector(0))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
	size += sizeof(jUnsignedInteger);
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedInteger);
	}
	
	return size;
}

void SetLocalWaypoint::Body::SetLocalWaypointRec::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_PresenceVectorTemp;
	
	m_PresenceVectorTemp = JSIDL_v_1_0::correctEndianness(m_PresenceVector);
	memcpy(bytes + pos, &m_PresenceVectorTemp, sizeof(jUnsignedByte));
	pos += sizeof(jUnsignedByte);
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_YawTemp;
		
		m_YawTemp = JSIDL_v_1_0::correctEndianness(m_Yaw);
		memcpy(bytes + pos, &m_YawTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_RollTemp;
		
		m_RollTemp = JSIDL_v_1_0::correctEndianness(m_Roll);
		memcpy(bytes + pos, &m_RollTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		m_PitchTemp = JSIDL_v_1_0::correctEndianness(m_Pitch);
		memcpy(bytes + pos, &m_PitchTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	jUnsignedInteger m_XTemp;
	
	m_XTemp = JSIDL_v_1_0::correctEndianness(m_X);
	memcpy(bytes + pos, &m_XTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_YTemp;
	
	m_YTemp = JSIDL_v_1_0::correctEndianness(m_Y);
	memcpy(bytes + pos, &m_YTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_ZTemp;
	
	m_ZTemp = JSIDL_v_1_0::correctEndianness(m_Z);
	memcpy(bytes + pos, &m_ZTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_WaypointToleranceTemp;
		
		m_WaypointToleranceTemp = JSIDL_v_1_0::correctEndianness(m_WaypointTolerance);
		memcpy(bytes + pos, &m_WaypointToleranceTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_PathToleranceTemp;
		
		m_PathToleranceTemp = JSIDL_v_1_0::correctEndianness(m_PathTolerance);
		memcpy(bytes + pos, &m_PathToleranceTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
}

void SetLocalWaypoint::Body::SetLocalWaypointRec::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte m_PresenceVectorTemp;
	
	memcpy(&m_PresenceVectorTemp, bytes + pos, sizeof(jUnsignedByte));
	m_PresenceVector = JSIDL_v_1_0::correctEndianness(m_PresenceVectorTemp);
	pos += sizeof(jUnsignedByte);
	if (checkPresenceVector(0))
	{
		jUnsignedShortInteger m_YawTemp;
		
		memcpy(&m_YawTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Yaw = JSIDL_v_1_0::correctEndianness(m_YawTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_RollTemp;
		
		memcpy(&m_RollTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Roll = JSIDL_v_1_0::correctEndianness(m_RollTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		memcpy(&m_PitchTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Pitch = JSIDL_v_1_0::correctEndianness(m_PitchTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	jUnsignedInteger m_XTemp;
	
	memcpy(&m_XTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_X = JSIDL_v_1_0::correctEndianness(m_XTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_YTemp;
	
	memcpy(&m_YTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Y = JSIDL_v_1_0::correctEndianness(m_YTemp);
	pos += sizeof(jUnsignedInteger);
	jUnsignedInteger m_ZTemp;
	
	memcpy(&m_ZTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_Z = JSIDL_v_1_0::correctEndianness(m_ZTemp);
	pos += sizeof(jUnsignedInteger);
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_WaypointToleranceTemp;
		
		memcpy(&m_WaypointToleranceTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_WaypointTolerance = JSIDL_v_1_0::correctEndianness(m_WaypointToleranceTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_PathToleranceTemp;
		
		memcpy(&m_PathToleranceTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_PathTolerance = JSIDL_v_1_0::correctEndianness(m_PathToleranceTemp);
		pos += sizeof(jUnsignedInteger);
	}
}

SetLocalWaypoint::Body::SetLocalWaypointRec &SetLocalWaypoint::Body::SetLocalWaypointRec::operator=(const SetLocalWaypointRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_Yaw = value.m_Yaw;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	m_X = value.m_X;
	m_Y = value.m_Y;
	m_Z = value.m_Z;
	m_WaypointTolerance = value.m_WaypointTolerance;
	m_PathTolerance = value.m_PathTolerance;
	
	return *this;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::operator==(const SetLocalWaypointRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	if (m_Yaw != value.m_Yaw)
	{
		return false;
	}
	if (m_Roll != value.m_Roll)
	{
		return false;
	}
	if (m_Pitch != value.m_Pitch)
	{
		return false;
	}
	if (m_X != value.m_X)
	{
		return false;
	}
	if (m_Y != value.m_Y)
	{
		return false;
	}
	if (m_Z != value.m_Z)
	{
		return false;
	}
	if (m_WaypointTolerance != value.m_WaypointTolerance)
	{
		return false;
	}
	if (m_PathTolerance != value.m_PathTolerance)
	{
		return false;
	}
	
	return true;
}

bool SetLocalWaypoint::Body::SetLocalWaypointRec::operator!=(const SetLocalWaypointRec &value) const
{
	return !((*this) == value);
}

SetLocalWaypoint::Body::SetLocalWaypointRec::SetLocalWaypointRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Yaw = 0;
	m_Roll = 0;
	m_Pitch = 0;
	m_X = 0;
	m_Y = 0;
	m_Z = 0;
	m_WaypointTolerance = 0;
	m_PathTolerance = 0;
}

SetLocalWaypoint::Body::SetLocalWaypointRec::SetLocalWaypointRec(const SetLocalWaypointRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_Yaw = 0;
	m_Roll = 0;
	m_Pitch = 0;
	m_X = 0;
	m_Y = 0;
	m_Z = 0;
	m_WaypointTolerance = 0;
	m_PathTolerance = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_Yaw = value.m_Yaw;
	m_Roll = value.m_Roll;
	m_Pitch = value.m_Pitch;
	m_X = value.m_X;
	m_Y = value.m_Y;
	m_Z = value.m_Z;
	m_WaypointTolerance = value.m_WaypointTolerance;
	m_PathTolerance = value.m_PathTolerance;
}

SetLocalWaypoint::Body::SetLocalWaypointRec::~SetLocalWaypointRec()
{
}

SetLocalWaypoint::Body::SetLocalWaypointRec* const SetLocalWaypoint::Body::getSetLocalWaypointRec()
{
	return &m_SetLocalWaypointRec;
}

int SetLocalWaypoint::Body::setSetLocalWaypointRec(const SetLocalWaypointRec &value)
{
	m_SetLocalWaypointRec = value;
	setParentPresenceVector();
	return 0;
}

void SetLocalWaypoint::Body::setParentPresenceVector()
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
const unsigned int SetLocalWaypoint::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_SetLocalWaypointRec.getSize();
	
	return size;
}

void SetLocalWaypoint::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_SetLocalWaypointRec.encode(bytes + pos);
	pos += m_SetLocalWaypointRec.getSize();
}

void SetLocalWaypoint::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_SetLocalWaypointRec.decode(bytes + pos);
	pos += m_SetLocalWaypointRec.getSize();
}

SetLocalWaypoint::Body &SetLocalWaypoint::Body::operator=(const Body &value)
{
	m_SetLocalWaypointRec = value.m_SetLocalWaypointRec;
	m_SetLocalWaypointRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetLocalWaypoint::Body::operator==(const Body &value) const
{
	if (m_SetLocalWaypointRec != value.m_SetLocalWaypointRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetLocalWaypoint::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetLocalWaypoint::Body::Body()
{
	m_SetLocalWaypointRec.setParent(this);
	/// No Initialization of m_SetLocalWaypointRec necessary.
}

SetLocalWaypoint::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_SetLocalWaypointRec.setParent(this);
	/// No Initialization of m_SetLocalWaypointRec necessary.
	
	/// Copy the values
	m_SetLocalWaypointRec = value.m_SetLocalWaypointRec;
	m_SetLocalWaypointRec.setParent(this);
	/// This code is currently not supported
}

SetLocalWaypoint::Body::~Body()
{
}

SetLocalWaypoint::Body* const SetLocalWaypoint::getBody()
{
	return &m_Body;
}

int SetLocalWaypoint::setBody(const Body &value)
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
const unsigned int SetLocalWaypoint::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetLocalWaypoint::encode(unsigned char *bytes)
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

void SetLocalWaypoint::decode(const unsigned char *bytes)
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

SetLocalWaypoint &SetLocalWaypoint::operator=(const SetLocalWaypoint &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetLocalWaypoint::operator==(const SetLocalWaypoint &value) const
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

bool SetLocalWaypoint::operator!=(const SetLocalWaypoint &value) const
{
	return !((*this) == value);
}

SetLocalWaypoint::SetLocalWaypoint()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetLocalWaypoint::SetLocalWaypoint(const SetLocalWaypoint &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

SetLocalWaypoint::~SetLocalWaypoint()
{
}


}

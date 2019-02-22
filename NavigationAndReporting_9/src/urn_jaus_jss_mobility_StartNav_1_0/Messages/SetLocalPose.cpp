#include "urn_jaus_jss_mobility_StartNav_1_0/Messages/SetLocalPose.h"

namespace urn_jaus_jss_mobility_StartNav_1_0
{

void SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec &SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x0403;
}

SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x0403;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

SetLocalPose::JTS_DefaultHeader::DefaultHeaderRec* const SetLocalPose::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int SetLocalPose::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void SetLocalPose::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int SetLocalPose::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void SetLocalPose::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void SetLocalPose::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

SetLocalPose::JTS_DefaultHeader &SetLocalPose::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool SetLocalPose::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool SetLocalPose::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

SetLocalPose::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

SetLocalPose::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

SetLocalPose::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

SetLocalPose::JTS_DefaultHeader* const SetLocalPose::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int SetLocalPose::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void SetLocalPose::Body::LocalPoseRec::setParent(Body* parent)
{
	m_parent = parent;
}

void SetLocalPose::Body::LocalPoseRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedByte SetLocalPose::Body::LocalPoseRec::getPresenceVector()
{
	return m_PresenceVector;
}

int SetLocalPose::Body::LocalPoseRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedByte)pvBitSet.to_ulong();
	return 0;
}

bool SetLocalPose::Body::LocalPoseRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedByte) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

void SetLocalPose::Body::LocalPoseRec::TimeStamp::setParent(LocalPoseRec* parent)
{
	m_parent = parent;
}

void SetLocalPose::Body::LocalPoseRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(0);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger SetLocalPose::Body::LocalPoseRec::TimeStamp::getMiliseconds()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<10> sfbs;
	int i = 0;
	
	for (int index = 0; index <= 9; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetLocalPose::Body::LocalPoseRec::TimeStamp::setMiliseconds(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 999)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<10> sfbs((int)value);
		int i = 0;
		
		for (int index = 0; index <= 9; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetLocalPose::Body::LocalPoseRec::TimeStamp::getSeconds()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<6> sfbs;
	int i = 0;
	
	for (int index = 10; index <= 15; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetLocalPose::Body::LocalPoseRec::TimeStamp::setSeconds(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 59)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<6> sfbs((int)value);
		int i = 0;
		
		for (int index = 10; index <= 15; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetLocalPose::Body::LocalPoseRec::TimeStamp::getMinutes()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<6> sfbs;
	int i = 0;
	
	for (int index = 16; index <= 21; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetLocalPose::Body::LocalPoseRec::TimeStamp::setMinutes(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 59)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<6> sfbs((int)value);
		int i = 0;
		
		for (int index = 16; index <= 21; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetLocalPose::Body::LocalPoseRec::TimeStamp::getHour()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<5> sfbs;
	int i = 0;
	
	for (int index = 22; index <= 26; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetLocalPose::Body::LocalPoseRec::TimeStamp::setHour(jUnsignedInteger value)
{
	if (((value >= 0) && (value <= 23)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<5> sfbs((int)value);
		int i = 0;
		
		for (int index = 22; index <= 26; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

jUnsignedInteger SetLocalPose::Body::LocalPoseRec::TimeStamp::getDay()
{
	std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
	std::bitset<5> sfbs;
	int i = 0;
	
	for (int index = 27; index <= 31; index++)
	{
	    sfbs[i++] = bfbs[index];
	}
	
	return (jUnsignedInteger)(sfbs.to_ulong());
}

int SetLocalPose::Body::LocalPoseRec::TimeStamp::setDay(jUnsignedInteger value)
{
	if (((value >= 1) && (value <= 31)))
	{
		std::bitset<sizeof(jUnsignedInteger) * 8> bfbs((int)m_SubFields);
		std::bitset<5> sfbs((int)value);
		int i = 0;
		
		for (int index = 27; index <= 31; index++)
		{
		    bfbs[index] = sfbs[i++];
		}
		
		m_SubFields = (jUnsignedInteger)bfbs.to_ulong();
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
const unsigned int SetLocalPose::Body::LocalPoseRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void SetLocalPose::Body::LocalPoseRec::TimeStamp::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_SubFieldsTemp;
	
	m_SubFieldsTemp = JSIDL_v_1_0::correctEndianness(m_SubFields);
	memcpy(bytes + pos, &m_SubFieldsTemp, sizeof(jUnsignedInteger));
	pos += sizeof(jUnsignedInteger);
}

void SetLocalPose::Body::LocalPoseRec::TimeStamp::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedInteger m_SubFieldsTemp;
	
	memcpy(&m_SubFieldsTemp, bytes + pos, sizeof(jUnsignedInteger));
	m_SubFields = JSIDL_v_1_0::correctEndianness(m_SubFieldsTemp);
	pos += sizeof(jUnsignedInteger);
}

SetLocalPose::Body::LocalPoseRec::TimeStamp &SetLocalPose::Body::LocalPoseRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool SetLocalPose::Body::LocalPoseRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool SetLocalPose::Body::LocalPoseRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

SetLocalPose::Body::LocalPoseRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

SetLocalPose::Body::LocalPoseRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

SetLocalPose::Body::LocalPoseRec::TimeStamp::~TimeStamp()
{
}

bool SetLocalPose::Body::LocalPoseRec::isTimeStampValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

SetLocalPose::Body::LocalPoseRec::TimeStamp* const SetLocalPose::Body::LocalPoseRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int SetLocalPose::Body::LocalPoseRec::setTimeStamp(const TimeStamp &value)
{
	m_TimeStamp = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

bool SetLocalPose::Body::LocalPoseRec::isAttitudeRMSValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getAttitudeRMS()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - 0.0 ) / 65535.0;
	double bias = 0.0;
	
	value = m_AttitudeRMS * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setAttitudeRMS(double value)
{
	if ((value >= 0.0) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - 0.0 ) / 65535.0;
		double bias = 0.0;
		
		m_AttitudeRMS= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalPose::Body::LocalPoseRec::isPitchValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getPitch()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
	double bias = -3.141592653589793;
	
	value = m_Pitch * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setPitch(double value)
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

bool SetLocalPose::Body::LocalPoseRec::isRollValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getRoll()
{
	double value;
	
	double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
	double bias = -3.141592653589793;
	
	value = m_Roll * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setRoll(double value)
{
	if ((value >= -3.141592653589793) && (value <= 3.141592653589793))
	{
		double scaleFactor = ( 3.141592653589793 - -3.141592653589793 ) / 65535.0;
		double bias = -3.141592653589793;
		
		m_Roll= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalPose::Body::LocalPoseRec::isPositionRMSValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getPositionRMS()
{
	double value;
	
	double scaleFactor = ( 100.0 - 0.0 ) / 4.294967295E9;
	double bias = 0.0;
	
	value = m_PositionRMS * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setPositionRMS(double value)
{
	if ((value >= 0.0) && (value <= 100.0))
	{
		double scaleFactor = ( 100.0 - 0.0 ) / 4.294967295E9;
		double bias = 0.0;
		
		m_PositionRMS= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalPose::Body::LocalPoseRec::isXValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getX()
{
	double value;
	
	double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
	double bias = -100000.0;
	
	value = m_X * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setX(double value)
{
	if ((value >= -100000.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
		double bias = -100000.0;
		
		m_X= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalPose::Body::LocalPoseRec::isYValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getY()
{
	double value;
	
	double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
	double bias = -100000.0;
	
	value = m_Y * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setY(double value)
{
	if ((value >= -100000.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
		double bias = -100000.0;
		
		m_Y= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool SetLocalPose::Body::LocalPoseRec::isZValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

double SetLocalPose::Body::LocalPoseRec::getZ()
{
	double value;
	
	double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
	double bias = -100000.0;
	
	value = m_Z * scaleFactor + bias;
	
	return value;
}

int SetLocalPose::Body::LocalPoseRec::setZ(double value)
{
	if ((value >= -100000.0) && (value <= 100000.0))
	{
		double scaleFactor = ( 100000.0 - -100000.0 ) / 4.294967295E9;
		double bias = -100000.0;
		
		m_Z= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(7);
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
const unsigned int SetLocalPose::Body::LocalPoseRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	if (checkPresenceVector(0))
	{
		size += m_TimeStamp.getSize();
	}
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(6))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(7))
	{
		size += sizeof(jUnsignedInteger);
	}
	
	return size;
}

void SetLocalPose::Body::LocalPoseRec::encode(unsigned char *bytes)
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
		m_TimeStamp.encode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_AttitudeRMSTemp;
		
		m_AttitudeRMSTemp = JSIDL_v_1_0::correctEndianness(m_AttitudeRMS);
		memcpy(bytes + pos, &m_AttitudeRMSTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		m_PitchTemp = JSIDL_v_1_0::correctEndianness(m_Pitch);
		memcpy(bytes + pos, &m_PitchTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_RollTemp;
		
		m_RollTemp = JSIDL_v_1_0::correctEndianness(m_Roll);
		memcpy(bytes + pos, &m_RollTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_PositionRMSTemp;
		
		m_PositionRMSTemp = JSIDL_v_1_0::correctEndianness(m_PositionRMS);
		memcpy(bytes + pos, &m_PositionRMSTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedInteger m_XTemp;
		
		m_XTemp = JSIDL_v_1_0::correctEndianness(m_X);
		memcpy(bytes + pos, &m_XTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedInteger m_YTemp;
		
		m_YTemp = JSIDL_v_1_0::correctEndianness(m_Y);
		memcpy(bytes + pos, &m_YTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedInteger m_ZTemp;
		
		m_ZTemp = JSIDL_v_1_0::correctEndianness(m_Z);
		memcpy(bytes + pos, &m_ZTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
}

void SetLocalPose::Body::LocalPoseRec::decode(const unsigned char *bytes)
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
		m_TimeStamp.decode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
	if (checkPresenceVector(1))
	{
		jUnsignedShortInteger m_AttitudeRMSTemp;
		
		memcpy(&m_AttitudeRMSTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_AttitudeRMS = JSIDL_v_1_0::correctEndianness(m_AttitudeRMSTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedShortInteger m_PitchTemp;
		
		memcpy(&m_PitchTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Pitch = JSIDL_v_1_0::correctEndianness(m_PitchTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedShortInteger m_RollTemp;
		
		memcpy(&m_RollTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_Roll = JSIDL_v_1_0::correctEndianness(m_RollTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_PositionRMSTemp;
		
		memcpy(&m_PositionRMSTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_PositionRMS = JSIDL_v_1_0::correctEndianness(m_PositionRMSTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedInteger m_XTemp;
		
		memcpy(&m_XTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_X = JSIDL_v_1_0::correctEndianness(m_XTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedInteger m_YTemp;
		
		memcpy(&m_YTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Y = JSIDL_v_1_0::correctEndianness(m_YTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedInteger m_ZTemp;
		
		memcpy(&m_ZTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_Z = JSIDL_v_1_0::correctEndianness(m_ZTemp);
		pos += sizeof(jUnsignedInteger);
	}
}

SetLocalPose::Body::LocalPoseRec &SetLocalPose::Body::LocalPoseRec::operator=(const LocalPoseRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_TimeStamp = value.m_TimeStamp;
	m_AttitudeRMS = value.m_AttitudeRMS;
	m_Pitch = value.m_Pitch;
	m_Roll = value.m_Roll;
	m_PositionRMS = value.m_PositionRMS;
	m_X = value.m_X;
	m_Y = value.m_Y;
	m_Z = value.m_Z;
	
	return *this;
}

bool SetLocalPose::Body::LocalPoseRec::operator==(const LocalPoseRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	if (m_TimeStamp != value.m_TimeStamp)
	{
		return false;
	}
	if (m_AttitudeRMS != value.m_AttitudeRMS)
	{
		return false;
	}
	if (m_Pitch != value.m_Pitch)
	{
		return false;
	}
	if (m_Roll != value.m_Roll)
	{
		return false;
	}
	if (m_PositionRMS != value.m_PositionRMS)
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
	
	return true;
}

bool SetLocalPose::Body::LocalPoseRec::operator!=(const LocalPoseRec &value) const
{
	return !((*this) == value);
}

SetLocalPose::Body::LocalPoseRec::LocalPoseRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_TimeStamp.setParent(this);
	m_AttitudeRMS = 0;
	m_Pitch = 0;
	m_Roll = 0;
	m_PositionRMS = 0;
	m_X = 0;
	m_Y = 0;
	m_Z = 0;
}

SetLocalPose::Body::LocalPoseRec::LocalPoseRec(const LocalPoseRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_TimeStamp.setParent(this);
	m_AttitudeRMS = 0;
	m_Pitch = 0;
	m_Roll = 0;
	m_PositionRMS = 0;
	m_X = 0;
	m_Y = 0;
	m_Z = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_TimeStamp = value.m_TimeStamp;
	m_AttitudeRMS = value.m_AttitudeRMS;
	m_Pitch = value.m_Pitch;
	m_Roll = value.m_Roll;
	m_PositionRMS = value.m_PositionRMS;
	m_X = value.m_X;
	m_Y = value.m_Y;
	m_Z = value.m_Z;
}

SetLocalPose::Body::LocalPoseRec::~LocalPoseRec()
{
}

SetLocalPose::Body::LocalPoseRec* const SetLocalPose::Body::getLocalPoseRec()
{
	return &m_LocalPoseRec;
}

int SetLocalPose::Body::setLocalPoseRec(const LocalPoseRec &value)
{
	m_LocalPoseRec = value;
	setParentPresenceVector();
	return 0;
}

void SetLocalPose::Body::setParentPresenceVector()
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
const unsigned int SetLocalPose::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_LocalPoseRec.getSize();
	
	return size;
}

void SetLocalPose::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_LocalPoseRec.encode(bytes + pos);
	pos += m_LocalPoseRec.getSize();
}

void SetLocalPose::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_LocalPoseRec.decode(bytes + pos);
	pos += m_LocalPoseRec.getSize();
}

SetLocalPose::Body &SetLocalPose::Body::operator=(const Body &value)
{
	m_LocalPoseRec = value.m_LocalPoseRec;
	m_LocalPoseRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool SetLocalPose::Body::operator==(const Body &value) const
{
	if (m_LocalPoseRec != value.m_LocalPoseRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool SetLocalPose::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

SetLocalPose::Body::Body()
{
	m_LocalPoseRec.setParent(this);
	/// No Initialization of m_LocalPoseRec necessary.
}

SetLocalPose::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_LocalPoseRec.setParent(this);
	/// No Initialization of m_LocalPoseRec necessary.
	
	/// Copy the values
	m_LocalPoseRec = value.m_LocalPoseRec;
	m_LocalPoseRec.setParent(this);
	/// This code is currently not supported
}

SetLocalPose::Body::~Body()
{
}

SetLocalPose::Body* const SetLocalPose::getBody()
{
	return &m_Body;
}

int SetLocalPose::setBody(const Body &value)
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
const unsigned int SetLocalPose::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void SetLocalPose::encode(unsigned char *bytes)
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

void SetLocalPose::decode(const unsigned char *bytes)
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

SetLocalPose &SetLocalPose::operator=(const SetLocalPose &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool SetLocalPose::operator==(const SetLocalPose &value) const
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

bool SetLocalPose::operator!=(const SetLocalPose &value) const
{
	return !((*this) == value);
}

SetLocalPose::SetLocalPose()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

SetLocalPose::SetLocalPose(const SetLocalPose &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

SetLocalPose::~SetLocalPose()
{
}


}

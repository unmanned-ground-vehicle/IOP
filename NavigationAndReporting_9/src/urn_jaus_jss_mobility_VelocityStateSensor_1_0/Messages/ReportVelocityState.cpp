#include "urn_jaus_jss_mobility_VelocityStateSensor_1_0/Messages/ReportVelocityState.h"

namespace urn_jaus_jss_mobility_VelocityStateSensor_1_0
{

void ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec &ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x4404;
}

ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x4404;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ReportVelocityState::JTS_DefaultHeader::DefaultHeaderRec* const ReportVelocityState::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ReportVelocityState::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportVelocityState::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ReportVelocityState::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ReportVelocityState::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ReportVelocityState::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ReportVelocityState::JTS_DefaultHeader &ReportVelocityState::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ReportVelocityState::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportVelocityState::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ReportVelocityState::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ReportVelocityState::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ReportVelocityState::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ReportVelocityState::JTS_DefaultHeader* const ReportVelocityState::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ReportVelocityState::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ReportVelocityState::Body::ReportVelocityStateRec::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportVelocityState::Body::ReportVelocityStateRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportVelocityState::Body::ReportVelocityStateRec::getPresenceVector()
{
	return m_PresenceVector;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setPresenceVector(unsigned int index)
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	pvBitSet[index] = 1;
	m_PresenceVector = (jUnsignedShortInteger)pvBitSet.to_ulong();
	return 0;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::checkPresenceVector(unsigned int index) const
{
	std::bitset<sizeof(jUnsignedShortInteger) * 8> pvBitSet((int)(m_PresenceVector));
	
	return (pvBitSet[index] == 1);
}

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setParent(ReportVelocityStateRec* parent)
{
	m_parent = parent;
}

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setPresenceVector(0);
		m_parent->setParentPresenceVector();
	}
}

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getMilliseconds()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setMilliseconds(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getSeconds()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setSeconds(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getMinutes()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setMinutes(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getHour()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setHour(jUnsignedInteger value)
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

jUnsignedInteger ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getDay()
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

int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::setDay(jUnsignedInteger value)
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
const unsigned int ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedInteger);
	
	return size;
}

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::encode(unsigned char *bytes)
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

void ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::decode(const unsigned char *bytes)
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

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp &ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::operator=(const TimeStamp &value)
{
	this->m_SubFields = value.m_SubFields;
	
	return *this;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::operator==(const TimeStamp &value) const
{
	return (this->m_SubFields == value.m_SubFields);
}

bool ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::operator!=(const TimeStamp &value) const
{
	return !((*this) == value);
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::TimeStamp()
{
	m_parent = NULL;
	m_SubFields = 0;
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::TimeStamp(const TimeStamp &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_SubFields = 0;
	
	/// Copy the values
	this->m_SubFields = value.m_SubFields;
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp::~TimeStamp()
{
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isTimeStampValid() const
{
	if (checkPresenceVector(0))
	{
		return true;
	}
	return false;
}

ReportVelocityState::Body::ReportVelocityStateRec::TimeStamp* const ReportVelocityState::Body::ReportVelocityStateRec::getTimeStamp()
{
	return &m_TimeStamp;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setTimeStamp(const TimeStamp &value)
{
	m_TimeStamp = value;
	setPresenceVector(0);
	setParentPresenceVector();
	return 0;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocityRmsValid() const
{
	if (checkPresenceVector(1))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocityRms()
{
	double value;
	
	double scaleFactor = ( 100.0 - 0.0 ) / 4.294967295E9;
	double bias = 0.0;
	
	value = m_VelocityRms * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocityRms(double value)
{
	if ((value >= 0.0) && (value <= 100.0))
	{
		double scaleFactor = ( 100.0 - 0.0 ) / 4.294967295E9;
		double bias = 0.0;
		
		m_VelocityRms= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(1);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocityZValid() const
{
	if (checkPresenceVector(2))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocityZ()
{
	double value;
	
	double scaleFactor = ( 327.67 - -327.67 ) / 4.294967295E9;
	double bias = -327.67;
	
	value = m_VelocityZ * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocityZ(double value)
{
	if ((value >= -327.67) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - -327.67 ) / 4.294967295E9;
		double bias = -327.67;
		
		m_VelocityZ= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(2);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocityYValid() const
{
	if (checkPresenceVector(3))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocityY()
{
	double value;
	
	double scaleFactor = ( 327.67 - -327.67 ) / 4.294967295E9;
	double bias = -327.67;
	
	value = m_VelocityY * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocityY(double value)
{
	if ((value >= -327.67) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - -327.67 ) / 4.294967295E9;
		double bias = -327.67;
		
		m_VelocityY= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(3);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isVelocityXValid() const
{
	if (checkPresenceVector(4))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getVelocityX()
{
	double value;
	
	double scaleFactor = ( 327.67 - -327.67 ) / 4.294967295E9;
	double bias = -327.67;
	
	value = m_VelocityX * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setVelocityX(double value)
{
	if ((value >= -327.67) && (value <= 327.67))
	{
		double scaleFactor = ( 327.67 - -327.67 ) / 4.294967295E9;
		double bias = -327.67;
		
		m_VelocityX= (jUnsignedInteger)((value - bias) / scaleFactor);
		setPresenceVector(4);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isRollRateValid() const
{
	if (checkPresenceVector(5))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getRollRate()
{
	double value;
	
	double scaleFactor = ( 32.768 - -32.768 ) / 65535.0;
	double bias = -32.768;
	
	value = m_RollRate * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setRollRate(double value)
{
	if ((value >= -32.768) && (value <= 32.768))
	{
		double scaleFactor = ( 32.768 - -32.768 ) / 65535.0;
		double bias = -32.768;
		
		m_RollRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(5);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isPitchRateValid() const
{
	if (checkPresenceVector(6))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getPitchRate()
{
	double value;
	
	double scaleFactor = ( 32.678 - -32.678 ) / 65535.0;
	double bias = -32.678;
	
	value = m_PitchRate * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setPitchRate(double value)
{
	if ((value >= -32.678) && (value <= 32.678))
	{
		double scaleFactor = ( 32.678 - -32.678 ) / 65535.0;
		double bias = -32.678;
		
		m_PitchRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(6);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isYawRateValid() const
{
	if (checkPresenceVector(7))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getYawRate()
{
	double value;
	
	double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
	double bias = -32.768;
	
	value = m_YawRate * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setYawRate(double value)
{
	if ((value >= -32.768) && (value <= 32.767))
	{
		double scaleFactor = ( 32.767 - -32.768 ) / 65535.0;
		double bias = -32.768;
		
		m_YawRate= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(7);
		setParentPresenceVector();
		return 0;
	}
	return 1;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::isRateRmsValid() const
{
	if (checkPresenceVector(8))
	{
		return true;
	}
	return false;
}

double ReportVelocityState::Body::ReportVelocityStateRec::getRateRms()
{
	double value;
	
	double scaleFactor = ( 3.14592653589793 - 0.0 ) / 65535.0;
	double bias = 0.0;
	
	value = m_RateRms * scaleFactor + bias;
	
	return value;
}

int ReportVelocityState::Body::ReportVelocityStateRec::setRateRms(double value)
{
	if ((value >= 0.0) && (value <= 3.14592653589793))
	{
		double scaleFactor = ( 3.14592653589793 - 0.0 ) / 65535.0;
		double bias = 0.0;
		
		m_RateRms= (jUnsignedShortInteger)((value - bias) / scaleFactor);
		setPresenceVector(8);
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
const unsigned int ReportVelocityState::Body::ReportVelocityStateRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	if (checkPresenceVector(0))
	{
		size += m_TimeStamp.getSize();
	}
	if (checkPresenceVector(1))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		size += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		size += sizeof(jUnsignedShortInteger);
	}
	
	return size;
}

void ReportVelocityState::Body::ReportVelocityStateRec::encode(unsigned char *bytes)
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
	if (checkPresenceVector(0))
	{
		m_TimeStamp.encode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_VelocityRmsTemp;
		
		m_VelocityRmsTemp = JSIDL_v_1_0::correctEndianness(m_VelocityRms);
		memcpy(bytes + pos, &m_VelocityRmsTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_VelocityZTemp;
		
		m_VelocityZTemp = JSIDL_v_1_0::correctEndianness(m_VelocityZ);
		memcpy(bytes + pos, &m_VelocityZTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_VelocityYTemp;
		
		m_VelocityYTemp = JSIDL_v_1_0::correctEndianness(m_VelocityY);
		memcpy(bytes + pos, &m_VelocityYTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_VelocityXTemp;
		
		m_VelocityXTemp = JSIDL_v_1_0::correctEndianness(m_VelocityX);
		memcpy(bytes + pos, &m_VelocityXTemp, sizeof(jUnsignedInteger));
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_RollRateTemp;
		
		m_RollRateTemp = JSIDL_v_1_0::correctEndianness(m_RollRate);
		memcpy(bytes + pos, &m_RollRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_PitchRateTemp;
		
		m_PitchRateTemp = JSIDL_v_1_0::correctEndianness(m_PitchRate);
		memcpy(bytes + pos, &m_PitchRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedShortInteger m_YawRateTemp;
		
		m_YawRateTemp = JSIDL_v_1_0::correctEndianness(m_YawRate);
		memcpy(bytes + pos, &m_YawRateTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		jUnsignedShortInteger m_RateRmsTemp;
		
		m_RateRmsTemp = JSIDL_v_1_0::correctEndianness(m_RateRms);
		memcpy(bytes + pos, &m_RateRmsTemp, sizeof(jUnsignedShortInteger));
		pos += sizeof(jUnsignedShortInteger);
	}
}

void ReportVelocityState::Body::ReportVelocityStateRec::decode(const unsigned char *bytes)
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
	if (checkPresenceVector(0))
	{
		m_TimeStamp.decode(bytes + pos);
		pos += m_TimeStamp.getSize();
	}
	if (checkPresenceVector(1))
	{
		jUnsignedInteger m_VelocityRmsTemp;
		
		memcpy(&m_VelocityRmsTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_VelocityRms = JSIDL_v_1_0::correctEndianness(m_VelocityRmsTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(2))
	{
		jUnsignedInteger m_VelocityZTemp;
		
		memcpy(&m_VelocityZTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_VelocityZ = JSIDL_v_1_0::correctEndianness(m_VelocityZTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(3))
	{
		jUnsignedInteger m_VelocityYTemp;
		
		memcpy(&m_VelocityYTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_VelocityY = JSIDL_v_1_0::correctEndianness(m_VelocityYTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(4))
	{
		jUnsignedInteger m_VelocityXTemp;
		
		memcpy(&m_VelocityXTemp, bytes + pos, sizeof(jUnsignedInteger));
		m_VelocityX = JSIDL_v_1_0::correctEndianness(m_VelocityXTemp);
		pos += sizeof(jUnsignedInteger);
	}
	if (checkPresenceVector(5))
	{
		jUnsignedShortInteger m_RollRateTemp;
		
		memcpy(&m_RollRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_RollRate = JSIDL_v_1_0::correctEndianness(m_RollRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(6))
	{
		jUnsignedShortInteger m_PitchRateTemp;
		
		memcpy(&m_PitchRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_PitchRate = JSIDL_v_1_0::correctEndianness(m_PitchRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(7))
	{
		jUnsignedShortInteger m_YawRateTemp;
		
		memcpy(&m_YawRateTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_YawRate = JSIDL_v_1_0::correctEndianness(m_YawRateTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
	if (checkPresenceVector(8))
	{
		jUnsignedShortInteger m_RateRmsTemp;
		
		memcpy(&m_RateRmsTemp, bytes + pos, sizeof(jUnsignedShortInteger));
		m_RateRms = JSIDL_v_1_0::correctEndianness(m_RateRmsTemp);
		pos += sizeof(jUnsignedShortInteger);
	}
}

ReportVelocityState::Body::ReportVelocityStateRec &ReportVelocityState::Body::ReportVelocityStateRec::operator=(const ReportVelocityStateRec &value)
{
	m_PresenceVector = value.m_PresenceVector;
	m_TimeStamp = value.m_TimeStamp;
	m_VelocityRms = value.m_VelocityRms;
	m_VelocityZ = value.m_VelocityZ;
	m_VelocityY = value.m_VelocityY;
	m_VelocityX = value.m_VelocityX;
	m_RollRate = value.m_RollRate;
	m_PitchRate = value.m_PitchRate;
	m_YawRate = value.m_YawRate;
	m_RateRms = value.m_RateRms;
	
	return *this;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::operator==(const ReportVelocityStateRec &value) const
{
	if (m_PresenceVector != value.m_PresenceVector)
	{
		return false;
	}
	
	if (m_TimeStamp != value.m_TimeStamp)
	{
		return false;
	}
	if (m_VelocityRms != value.m_VelocityRms)
	{
		return false;
	}
	if (m_VelocityZ != value.m_VelocityZ)
	{
		return false;
	}
	if (m_VelocityY != value.m_VelocityY)
	{
		return false;
	}
	if (m_VelocityX != value.m_VelocityX)
	{
		return false;
	}
	if (m_RollRate != value.m_RollRate)
	{
		return false;
	}
	if (m_PitchRate != value.m_PitchRate)
	{
		return false;
	}
	if (m_YawRate != value.m_YawRate)
	{
		return false;
	}
	if (m_RateRms != value.m_RateRms)
	{
		return false;
	}
	
	return true;
}

bool ReportVelocityState::Body::ReportVelocityStateRec::operator!=(const ReportVelocityStateRec &value) const
{
	return !((*this) == value);
}

ReportVelocityState::Body::ReportVelocityStateRec::ReportVelocityStateRec()
{
	m_parent = NULL;
	m_PresenceVector = 0;
	m_TimeStamp.setParent(this);
	m_VelocityRms = 0;
	m_VelocityZ = 0;
	m_VelocityY = 0;
	m_VelocityX = 0;
	m_RollRate = 0;
	m_PitchRate = 0;
	m_YawRate = 0;
	m_RateRms = 0;
}

ReportVelocityState::Body::ReportVelocityStateRec::ReportVelocityStateRec(const ReportVelocityStateRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_PresenceVector = 0;
	m_TimeStamp.setParent(this);
	m_VelocityRms = 0;
	m_VelocityZ = 0;
	m_VelocityY = 0;
	m_VelocityX = 0;
	m_RollRate = 0;
	m_PitchRate = 0;
	m_YawRate = 0;
	m_RateRms = 0;
	
	/// Copy the values
	m_PresenceVector = value.m_PresenceVector;
	m_TimeStamp = value.m_TimeStamp;
	m_VelocityRms = value.m_VelocityRms;
	m_VelocityZ = value.m_VelocityZ;
	m_VelocityY = value.m_VelocityY;
	m_VelocityX = value.m_VelocityX;
	m_RollRate = value.m_RollRate;
	m_PitchRate = value.m_PitchRate;
	m_YawRate = value.m_YawRate;
	m_RateRms = value.m_RateRms;
}

ReportVelocityState::Body::ReportVelocityStateRec::~ReportVelocityStateRec()
{
}

ReportVelocityState::Body::ReportVelocityStateRec* const ReportVelocityState::Body::getReportVelocityStateRec()
{
	return &m_ReportVelocityStateRec;
}

int ReportVelocityState::Body::setReportVelocityStateRec(const ReportVelocityStateRec &value)
{
	m_ReportVelocityStateRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportVelocityState::Body::setParentPresenceVector()
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
const unsigned int ReportVelocityState::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ReportVelocityStateRec.getSize();
	
	return size;
}

void ReportVelocityState::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportVelocityStateRec.encode(bytes + pos);
	pos += m_ReportVelocityStateRec.getSize();
}

void ReportVelocityState::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ReportVelocityStateRec.decode(bytes + pos);
	pos += m_ReportVelocityStateRec.getSize();
}

ReportVelocityState::Body &ReportVelocityState::Body::operator=(const Body &value)
{
	m_ReportVelocityStateRec = value.m_ReportVelocityStateRec;
	m_ReportVelocityStateRec.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportVelocityState::Body::operator==(const Body &value) const
{
	if (m_ReportVelocityStateRec != value.m_ReportVelocityStateRec)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportVelocityState::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportVelocityState::Body::Body()
{
	m_ReportVelocityStateRec.setParent(this);
	/// No Initialization of m_ReportVelocityStateRec necessary.
}

ReportVelocityState::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ReportVelocityStateRec.setParent(this);
	/// No Initialization of m_ReportVelocityStateRec necessary.
	
	/// Copy the values
	m_ReportVelocityStateRec = value.m_ReportVelocityStateRec;
	m_ReportVelocityStateRec.setParent(this);
	/// This code is currently not supported
}

ReportVelocityState::Body::~Body()
{
}

ReportVelocityState::Body* const ReportVelocityState::getBody()
{
	return &m_Body;
}

int ReportVelocityState::setBody(const Body &value)
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
const unsigned int ReportVelocityState::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportVelocityState::encode(unsigned char *bytes)
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

void ReportVelocityState::decode(const unsigned char *bytes)
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

ReportVelocityState &ReportVelocityState::operator=(const ReportVelocityState &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportVelocityState::operator==(const ReportVelocityState &value) const
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

bool ReportVelocityState::operator!=(const ReportVelocityState &value) const
{
	return !((*this) == value);
}

ReportVelocityState::ReportVelocityState()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

ReportVelocityState::ReportVelocityState(const ReportVelocityState &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

ReportVelocityState::~ReportVelocityState()
{
}


}

#include "urn_jaus_jss_mobility_LocalWaypointListDriver_1_0/Messages/ReportElementList.h"

namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

void ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::setParent(JTS_DefaultHeader* parent)
{
	m_parent = parent;
}

void ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

jUnsignedShortInteger ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::getMessageID()
{
	return m_MessageID;
}

int ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::setMessageID(jUnsignedShortInteger value)
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
const unsigned int ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::encode(unsigned char *bytes)
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

void ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::decode(const unsigned char *bytes)
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

ReportElementList::JTS_DefaultHeader::DefaultHeaderRec &ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::operator=(const DefaultHeaderRec &value)
{
	m_MessageID = value.m_MessageID;
	
	return *this;
}

bool ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::operator==(const DefaultHeaderRec &value) const
{
	if (m_MessageID != value.m_MessageID)
	{
		return false;
	}
	
	return true;
}

bool ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::operator!=(const DefaultHeaderRec &value) const
{
	return !((*this) == value);
}

ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec()
{
	m_parent = NULL;
	m_MessageID = 0x441b;
}

ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::DefaultHeaderRec(const DefaultHeaderRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_MessageID = 0x441b;
	
	/// Copy the values
	m_MessageID = value.m_MessageID;
}

ReportElementList::JTS_DefaultHeader::DefaultHeaderRec::~DefaultHeaderRec()
{
}

ReportElementList::JTS_DefaultHeader::DefaultHeaderRec* const ReportElementList::JTS_DefaultHeader::getDefaultHeaderRec()
{
	return &m_DefaultHeaderRec;
}

int ReportElementList::JTS_DefaultHeader::setDefaultHeaderRec(const DefaultHeaderRec &value)
{
	m_DefaultHeaderRec = value;
	setParentPresenceVector();
	return 0;
}

void ReportElementList::JTS_DefaultHeader::setParentPresenceVector()
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
const unsigned int ReportElementList::JTS_DefaultHeader::getSize()
{
	unsigned int size = 0;
	
	size += m_DefaultHeaderRec.getSize();
	
	return size;
}

void ReportElementList::JTS_DefaultHeader::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.encode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

void ReportElementList::JTS_DefaultHeader::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_DefaultHeaderRec.decode(bytes + pos);
	pos += m_DefaultHeaderRec.getSize();
}

ReportElementList::JTS_DefaultHeader &ReportElementList::JTS_DefaultHeader::operator=(const JTS_DefaultHeader &value)
{
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
	
	return *this;
}

bool ReportElementList::JTS_DefaultHeader::operator==(const JTS_DefaultHeader &value) const
{
	if (m_DefaultHeaderRec != value.m_DefaultHeaderRec)
	{
		return false;
	}
	return true;
}

bool ReportElementList::JTS_DefaultHeader::operator!=(const JTS_DefaultHeader &value) const
{
	return !((*this) == value);
}

ReportElementList::JTS_DefaultHeader::JTS_DefaultHeader()
{
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
}

ReportElementList::JTS_DefaultHeader::JTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	/// Initiliaze the protected variables
	m_DefaultHeaderRec.setParent(this);
	/// No Initialization of m_DefaultHeaderRec necessary.
	
	/// Copy the values
	m_DefaultHeaderRec = value.m_DefaultHeaderRec;
	m_DefaultHeaderRec.setParent(this);
}

ReportElementList::JTS_DefaultHeader::~JTS_DefaultHeader()
{
}

ReportElementList::JTS_DefaultHeader* const ReportElementList::getJTS_DefaultHeader()
{
	return &m_JTS_DefaultHeader;
}

int ReportElementList::setJTS_DefaultHeader(const JTS_DefaultHeader &value)
{
	m_JTS_DefaultHeader = value;
	return 0;
}

void ReportElementList::Body::ElementList::setParent(Body* parent)
{
	m_parent = parent;
}

void ReportElementList::Body::ElementList::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

void ReportElementList::Body::ElementList::ElementListRec::setParent(ElementList* parent)
{
	m_parent = parent;
}

void ReportElementList::Body::ElementList::ElementListRec::setParentPresenceVector()
{
	if(m_parent != NULL )
	{
		m_parent->setParentPresenceVector();
	}
}

double ReportElementList::Body::ElementList::ElementListRec::getElementUID()
{
	double value;
	
	double scaleFactor = ( 65534.0 - 1.0 ) / 65535.0;
	double bias = 1.0;
	
	value = m_ElementUID * scaleFactor + bias;
	
	return value;
}

int ReportElementList::Body::ElementList::ElementListRec::setElementUID(double value)
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
const unsigned int ReportElementList::Body::ElementList::ElementListRec::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedShortInteger);
	
	return size;
}

void ReportElementList::Body::ElementList::ElementListRec::encode(unsigned char *bytes)
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

void ReportElementList::Body::ElementList::ElementListRec::decode(const unsigned char *bytes)
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

ReportElementList::Body::ElementList::ElementListRec &ReportElementList::Body::ElementList::ElementListRec::operator=(const ElementListRec &value)
{
	m_ElementUID = value.m_ElementUID;
	
	return *this;
}

bool ReportElementList::Body::ElementList::ElementListRec::operator==(const ElementListRec &value) const
{
	if (m_ElementUID != value.m_ElementUID)
	{
		return false;
	}
	
	return true;
}

bool ReportElementList::Body::ElementList::ElementListRec::operator!=(const ElementListRec &value) const
{
	return !((*this) == value);
}

ReportElementList::Body::ElementList::ElementListRec::ElementListRec()
{
	m_parent = NULL;
	m_ElementUID = 0;
}

ReportElementList::Body::ElementList::ElementListRec::ElementListRec(const ElementListRec &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	m_ElementUID = 0;
	
	/// Copy the values
	m_ElementUID = value.m_ElementUID;
}

ReportElementList::Body::ElementList::ElementListRec::~ElementListRec()
{
}

unsigned int ReportElementList::Body::ElementList::getNumberOfElements() const
{
	return (unsigned int) m_ElementListRec.size();
}

ReportElementList::Body::ElementList::ElementListRec* const ReportElementList::Body::ElementList::getElement(unsigned int index)
{
	return &m_ElementListRec.at(index);
}

int ReportElementList::Body::ElementList::setElement(unsigned int index, const ElementListRec &value)
{
	if(m_ElementListRec.size()-1 < index)
	{
		return 1;
	}
	
	m_ElementListRec.at(index) = value;
	m_ElementListRec.at(index).setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportElementList::Body::ElementList::addElement(const ElementListRec &value)
{
	m_ElementListRec.push_back(value);
	m_ElementListRec.back().setParent(this);
	setParentPresenceVector();
	return 0;
}

int ReportElementList::Body::ElementList::deleteElement(unsigned int index)
{
	if(m_ElementListRec.size()-1 < index)
	{
		return 1;
	}
	
	m_ElementListRec.erase(m_ElementListRec.begin()+index);
	return 0;
}

int ReportElementList::Body::ElementList::deleteLastElement()
{
	m_ElementListRec.pop_back();
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
const unsigned int ReportElementList::Body::ElementList::getSize()
{
	unsigned int size = 0;
	
	size += sizeof(jUnsignedByte);
	for (int i = 0; i < m_ElementListRec.size(); i++)
	{
		size += m_ElementListRec[i].getSize();
	}
	
	return size;
}

void ReportElementList::Body::ElementList::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte size = (jUnsignedByte) m_ElementListRec.size();
	memcpy( bytes, &size, sizeof(size));
	pos += sizeof(size);
	for (int i = 0; i < m_ElementListRec.size(); i++)
	{
		m_ElementListRec[i].encode(bytes + pos);
		pos += m_ElementListRec[i].getSize();
	}
}

void ReportElementList::Body::ElementList::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	jUnsignedByte size;
	memcpy( &size, bytes, sizeof(size));
	pos += sizeof(size);
	m_ElementListRec.resize(size);
	for (int i = 0; i < m_ElementListRec.size(); i++)
	{
		m_ElementListRec[i].decode(bytes + pos);
		pos += m_ElementListRec[i].getSize();
	}
}

ReportElementList::Body::ElementList &ReportElementList::Body::ElementList::operator=(const ElementList &value)
{
	m_ElementListRec.clear();
	
	for (int i = 0; i < value.m_ElementListRec.size(); i++)
	{
		m_ElementListRec.push_back(value.m_ElementListRec[i]);
		m_ElementListRec[i].setParent(this);
	}
	
	return *this;
}

bool ReportElementList::Body::ElementList::operator==(const ElementList &value) const
{
	if (m_ElementListRec.size() !=  value.m_ElementListRec.size())
	{
		return false;
	}
	
	for (int i = 0; i < m_ElementListRec.size(); i++)
	{
		if (m_ElementListRec[i] !=  value.m_ElementListRec[i])
		{
			return false;
		}
	}
	
	return true;
}

bool ReportElementList::Body::ElementList::operator!=(const ElementList &value) const
{
	return !((*this) == value);
}

ReportElementList::Body::ElementList::ElementList()
{
	m_parent = NULL;
	for (unsigned int i = 0; i < m_ElementListRec.size(); i++)
	{
		m_ElementListRec[i].setParent(this);
	}
	/// No Initialization of m_ElementListRec necessary.
}

ReportElementList::Body::ElementList::ElementList(const ElementList &value)
{
	/// Initiliaze the protected variables
	m_parent = NULL;
	for (unsigned int i = 0; i < m_ElementListRec.size(); i++)
	{
		m_ElementListRec[i].setParent(this);
	}
	/// No Initialization of m_ElementListRec necessary.
	
	/// Copy the values
	m_ElementListRec.clear();
	
	for (int i = 0; i < value.m_ElementListRec.size(); i++)
	{
		m_ElementListRec.push_back(value.m_ElementListRec[i]);
		m_ElementListRec[i].setParent(this);
	}
}

ReportElementList::Body::ElementList::~ElementList()
{
}

ReportElementList::Body::ElementList* const ReportElementList::Body::getElementList()
{
	return &m_ElementList;
}

int ReportElementList::Body::setElementList(const ElementList &value)
{
	m_ElementList = value;
	setParentPresenceVector();
	return 0;
}

void ReportElementList::Body::setParentPresenceVector()
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
const unsigned int ReportElementList::Body::getSize()
{
	unsigned int size = 0;
	
	size += m_ElementList.getSize();
	
	return size;
}

void ReportElementList::Body::encode(unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ElementList.encode(bytes + pos);
	pos += m_ElementList.getSize();
}

void ReportElementList::Body::decode(const unsigned char *bytes)
{
	
	if (bytes == NULL)
	{
		return;
	}
	
	int pos = 0;
	m_ElementList.decode(bytes + pos);
	pos += m_ElementList.getSize();
}

ReportElementList::Body &ReportElementList::Body::operator=(const Body &value)
{
	m_ElementList = value.m_ElementList;
	m_ElementList.setParent(this);
	/// This code is currently not supported
	
	return *this;
}

bool ReportElementList::Body::operator==(const Body &value) const
{
	if (m_ElementList != value.m_ElementList)
	{
		return false;
	}
	/// This code is currently not supported
	return true;
}

bool ReportElementList::Body::operator!=(const Body &value) const
{
	return !((*this) == value);
}

ReportElementList::Body::Body()
{
	m_ElementList.setParent(this);
	/// No Initialization of m_ElementList necessary.
}

ReportElementList::Body::Body(const Body &value)
{
	/// Initiliaze the protected variables
	m_ElementList.setParent(this);
	/// No Initialization of m_ElementList necessary.
	
	/// Copy the values
	m_ElementList = value.m_ElementList;
	m_ElementList.setParent(this);
	/// This code is currently not supported
}

ReportElementList::Body::~Body()
{
}

ReportElementList::Body* const ReportElementList::getBody()
{
	return &m_Body;
}

int ReportElementList::setBody(const Body &value)
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
const unsigned int ReportElementList::getSize()
{
	unsigned int size = 0;
	
	size += m_JTS_DefaultHeader.getSize();
	size += m_Body.getSize();
	
	return size;
}

void ReportElementList::encode(unsigned char *bytes)
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

void ReportElementList::decode(const unsigned char *bytes)
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

ReportElementList &ReportElementList::operator=(const ReportElementList &value)
{
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
	
	return *this;
}

bool ReportElementList::operator==(const ReportElementList &value) const
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

bool ReportElementList::operator!=(const ReportElementList &value) const
{
	return !((*this) == value);
}

ReportElementList::ReportElementList()
{
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
}

ReportElementList::ReportElementList(const ReportElementList &value)
{
	/// Initiliaze the protected variables
	/// No Initialization of m_JTS_DefaultHeader necessary.
	/// No Initialization of m_Body necessary.
	m_IsCommand = true;
	
	/// Copy the values
	m_JTS_DefaultHeader = value.m_JTS_DefaultHeader;
	m_Body = value.m_Body;
}

ReportElementList::~ReportElementList()
{
}


}

#ifndef URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_SETELEMENT_H
#define URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_SETELEMENT_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jaus_jss_mobility_LocalWaypointListDriver_1_0
{

class DllExport SetElement: public JTS::Message
{
public:
	static const int ID = 0x041a;
	
	class DllExport JTS_DefaultHeader
	{
	public:
		class DllExport DefaultHeaderRec
		{
		public:
			void setParent(JTS_DefaultHeader* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getMessageID();
			int setMessageID(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			DefaultHeaderRec &operator=(const DefaultHeaderRec &value);
			bool operator==(const DefaultHeaderRec &value) const;
			bool operator!=(const DefaultHeaderRec &value) const;
			DefaultHeaderRec();
			DefaultHeaderRec(const DefaultHeaderRec &value);
			virtual ~DefaultHeaderRec();
		
		protected:
			JTS_DefaultHeader* m_parent;
			jUnsignedShortInteger m_MessageID;
		};
	
		DefaultHeaderRec* const getDefaultHeaderRec();
		int setDefaultHeaderRec(const DefaultHeaderRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		JTS_DefaultHeader &operator=(const JTS_DefaultHeader &value);
		bool operator==(const JTS_DefaultHeader &value) const;
		bool operator!=(const JTS_DefaultHeader &value) const;
		JTS_DefaultHeader();
		JTS_DefaultHeader(const JTS_DefaultHeader &value);
		virtual ~JTS_DefaultHeader();
	
	protected:
		DefaultHeaderRec m_DefaultHeaderRec;
	};
	class DllExport Body
	{
	public:
		class DllExport SetElementSeq
		{
		public:
			class DllExport RequestIDRec
			{
			public:
				void setParent(SetElementSeq* parent);
				void setParentPresenceVector();
				jUnsignedByte getRequestID();
				int setRequestID(jUnsignedByte value);
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				RequestIDRec &operator=(const RequestIDRec &value);
				bool operator==(const RequestIDRec &value) const;
				bool operator!=(const RequestIDRec &value) const;
				RequestIDRec();
				RequestIDRec(const RequestIDRec &value);
				virtual ~RequestIDRec();
			
			protected:
				SetElementSeq* m_parent;
				jUnsignedByte m_RequestID;
			};
			class DllExport ElementList
			{
			public:
				class DllExport ElementRec
				{
				public:
					class DllExport ElementData
					{
					public:
						void setParent(ElementRec* parent);
						void setParentPresenceVector();
						const jUnsignedByte getFormat() const;
						const jUnsignedByte getLength() const;
						const unsigned char *getData() const;
						int set(jUnsignedByte format, jUnsignedByte length, unsigned char *data);
						const unsigned int getSize();
						virtual void encode(unsigned char *bytes);
						virtual void decode(const unsigned char *bytes);
						ElementData &operator=(const ElementData &value);
						bool operator==(const ElementData &value) const;
						bool operator!=(const ElementData &value) const;
						ElementData();
						ElementData(const ElementData &value);
						virtual ~ElementData();
					
					protected:
						ElementRec* m_parent;
						jUnsignedByte m_Format;
						jUnsignedByte m_Length;
						unsigned char *m_Data;
					};
				
					void setParent(ElementList* parent);
					void setParentPresenceVector();
					double getNextUID();
					int setNextUID(double value);
					double getPreviousUID();
					int setPreviousUID(double value);
					double getElementUID();
					int setElementUID(double value);
					ElementData* const getElementData();
					int setElementData(const ElementData &value);
					const unsigned int getSize();
					virtual void encode(unsigned char *bytes);
					virtual void decode(const unsigned char *bytes);
					ElementRec &operator=(const ElementRec &value);
					bool operator==(const ElementRec &value) const;
					bool operator!=(const ElementRec &value) const;
					ElementRec();
					ElementRec(const ElementRec &value);
					virtual ~ElementRec();
				
				protected:
					ElementList* m_parent;
					jUnsignedShortInteger m_NextUID;
					jUnsignedShortInteger m_PreviousUID;
					jUnsignedShortInteger m_ElementUID;
					ElementData m_ElementData;
				};
			
				void setParent(SetElementSeq* parent);
				void setParentPresenceVector();
				unsigned int getNumberOfElements() const;
				ElementRec* const getElement(unsigned int index);
				int setElement(unsigned int index, const ElementRec &value);
				int addElement(const ElementRec &value);
				int deleteElement(unsigned int index);
				int deleteLastElement();
				const unsigned int getSize();
				virtual void encode(unsigned char *bytes);
				virtual void decode(const unsigned char *bytes);
				ElementList &operator=(const ElementList &value);
				bool operator==(const ElementList &value) const;
				bool operator!=(const ElementList &value) const;
				ElementList();
				ElementList(const ElementList &value);
				virtual ~ElementList();
			
			protected:
				SetElementSeq* m_parent;
				std::vector<ElementRec> m_ElementRec;
			};
		
			void setParent(Body* parent);
			void setParentPresenceVector();
			RequestIDRec* const getRequestIDRec();
			int setRequestIDRec(const RequestIDRec &value);
			ElementList* const getElementList();
			int setElementList(const ElementList &value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			SetElementSeq &operator=(const SetElementSeq &value);
			bool operator==(const SetElementSeq &value) const;
			bool operator!=(const SetElementSeq &value) const;
			SetElementSeq();
			SetElementSeq(const SetElementSeq &value);
			virtual ~SetElementSeq();
		
		protected:
			Body* m_parent;
			RequestIDRec m_RequestIDRec;
			ElementList m_ElementList;
		};
	
		SetElementSeq* const getSetElementSeq();
		int setSetElementSeq(const SetElementSeq &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		Body &operator=(const Body &value);
		bool operator==(const Body &value) const;
		bool operator!=(const Body &value) const;
		Body();
		Body(const Body &value);
		virtual ~Body();
	
	protected:
		SetElementSeq m_SetElementSeq;
	};

	unsigned int getID() { return ID; };
	JTS_DefaultHeader* const getJTS_DefaultHeader();
	int setJTS_DefaultHeader(const JTS_DefaultHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	SetElement &operator=(const SetElement &value);
	bool operator==(const SetElement &value) const;
	bool operator!=(const SetElement &value) const;
	SetElement();
	SetElement(const SetElement &value);
	virtual ~SetElement();

protected:
	JTS_DefaultHeader m_JTS_DefaultHeader;
	Body m_Body;
};

}

#endif // URN_JAUS_JSS_MOBILITY_LOCALWAYPOINTLISTDRIVER_1_0_SETELEMENT_H

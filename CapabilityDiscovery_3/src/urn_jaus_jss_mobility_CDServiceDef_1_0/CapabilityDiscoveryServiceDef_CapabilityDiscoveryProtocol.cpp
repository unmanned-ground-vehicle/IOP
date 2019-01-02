

#include "urn_jaus_jss_mobility_CDServiceDef_1_0/CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol.h"




using namespace JTS;

namespace urn_jaus_jss_mobility_CDServiceDef_1_0
{



CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocolContext(*this);
	count = 0;

}



CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::~CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol() 
{
	delete context;
}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::setupNotifications()
{

}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::broadcastQueryIdentificationAction()
{
	/// Insert User Code HERE
	QueryIdentification qi;
	qi.getBody()->getQueryIdentificationRec()->setQueryType(2);
	sendJausMessage(qi, JausAddress(0xffff, 0xff, 0xff));
}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::sendQueryIdentificationAction(ReportIdentification msg, unsigned int sender)
{
	/// Insert User Code HERE
	jUnsignedByte subs =  sender >> 16;
	jUnsignedByte node = sender >> 8;
	jUnsignedByte comp = sender;
	
	JausAddress client(subs, node, comp);
	std::cout<<(int)subs<<" "<<(int)(node)<<" "<<(int)comp<<" "<<count<<std::endl;
	
	if(count==0)  
	{
       QueryIdentification qiden;
	   qiden.getBody()->getQueryIdentificationRec()->setQueryType(2);
	   sendJausMessage(qiden, client);
	   count++;
	   std::cout<<"Received ReportIdentification from "<<(int)subs<<" "<<(int)node<<" " <<(int)comp <<". Sending QueryIdentification"<<std::endl;
	}
	if(count==1)  //sending QueryService if Reportidentification Triggered for second Time
	{   count++;
		QueryServices qs;
		QueryServices::Body::NodeList nlist;
		QueryServices::Body::NodeList::NodeSeq nseq;
		QueryServices::Body::NodeList::NodeSeq::NodeRec nrec;
		nrec.setNodeID(255);
		nseq.setNodeRec(nrec);
		QueryServices::Body::NodeList::NodeSeq::ComponentList clist;
		QueryServices::Body::NodeList::NodeSeq::ComponentList::ComponentRec crec;
		crec.setComponentID(255);
		clist.addElement(crec);
		nseq.setComponentList(clist);
		nlist.addElement(nseq);
		qs.getBody()->setNodeList(nlist);

        
		sendJausMessage(qs, client);
		std::cout<<"Received ReportIdentification from "<<(int)subs<<" "<<(int)node<<" " <<(int)comp <<". Sending QueryServices"<<std::endl;
		
	}

}

void CapabilityDiscoveryServiceDef_CapabilityDiscoveryProtocol::sendQueryServicesAction(ReportServices msg, unsigned int sender)
{
	
	
	ReportServices::Body::NodeList * nlist = msg.getBody()->getNodeList();
	unsigned int size = nlist->getNumberOfElements();
    std::cout<<"Recieved ReportServices.. Printing the services.."<<std::endl;
	if(size==0)
    std::cout<<"No services found Running"<<std::endl;
	for(unsigned int i=0;i<size;i++)   //Looking for Elements of NodeList
	{
		ReportServices::Body::NodeList::NodeSeq *nseq;
		nseq = nlist->getElement(i);
		ReportServices::Body::NodeList::NodeSeq::ComponentList *clist = nseq->getComponentList();
		unsigned int c_size = clist->getNumberOfElements();
		for(unsigned int j=0;j<c_size;j++)   //Looking for Elements for ComponentList
		{
			ReportServices::Body::NodeList::NodeSeq::ComponentList::ComponentSeq *cseq = clist->getElement(j);

			ReportServices::Body::NodeList::NodeSeq::ComponentList::ComponentSeq::ServiceList  *slist = cseq->getServiceList();
			int s_size = slist->getNumberOfElements();
			for(unsigned int k=0;k<s_size;k++)    //Looking for Elements of ServiceList
			{
				ReportServices::Body::NodeList::NodeSeq::ComponentList::ComponentSeq::ServiceList::ServiceRec *srec = slist->getElement(k);
                //Printing URI of the service...
				jVariableLengthString m_URI = srec->getURI(); 
				jUnsignedByte m_MajorVersionNumber = srec->getMajorVersionNumber();
				std::cout<<"The Service Is "<<m_URI;
			}
		}
	}

}





};

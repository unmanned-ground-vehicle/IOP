

#include "urn__jaus__jss__mobility__pfmgmtclient_1_0/PlatformManagementServiceDef_PlatformManagementProtocol.h"




using namespace JTS;

namespace urn__jaus__jss__mobility__pfmgmtclient_1_0
{



PlatformManagementServiceDef_PlatformManagementProtocol::PlatformManagementServiceDef_PlatformManagementProtocol()
{

	/*
	 * If there are other variables, context must be constructed last so that all 
	 * class variables are available if an EntryAction of the InitialState of the 
	 * statemachine needs them. 
	 */
	context = new PlatformManagementServiceDef_PlatformManagementProtocolContext(*this);
    count = 0;
}



PlatformManagementServiceDef_PlatformManagementProtocol::~PlatformManagementServiceDef_PlatformManagementProtocol() 
{
	delete context;
}

void PlatformManagementServiceDef_PlatformManagementProtocol::setupNotifications()
{

}



void PlatformManagementServiceDef_PlatformManagementProtocol::handleReportHeartbeatpulseAction(ReportHeartbeatPulse msg, unsigned int sender)
{
	/// Insert User Code HERE
	std::cout<<"Successfully recieved ReportHeartbeatPulse.. Congratulations"<<std::endl;
}

void PlatformManagementServiceDef_PlatformManagementProtocol::broadcastQueryIdentificationAction()
{
	/// Insert User Code HERE
	std::cout<<"broadcasting QueryIdentification"<<std::endl;
	JausAddress broadcast(0xffff, 0xff, 0xff );
	QueryIdentification qiden;
	
	sendJausMessage(qiden, broadcast);
}

void PlatformManagementServiceDef_PlatformManagementProtocol::sendQueryConfigurationAction(ReportSubsystemList msg, unsigned int sender)
{
	/// Insert User Code HERE
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	QueryConfiguration qc;
	qc.getBody()->getQueryConfigurationRec()->setQueryType(2);
	std::cout<<"Recieved ReportSubsystemList.. Sending QueryConfiguration"<<std::endl;
	sendJausMessage(qc, server);
}

void PlatformManagementServiceDef_PlatformManagementProtocol::sendQueryHeartbearPulseAction(ReportConfiguration msg, unsigned int sender)
{
	/// Insert User Code HERE
		unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	QueryHeartBeatPulse qh;
	sendJausMessage(qh, server);
	std::cout<<"Recieved ReportConfiguration.. Sending QueryHeartbeatPulse"<<std::endl;
	

}

void PlatformManagementServiceDef_PlatformManagementProtocol::sendQueryServicesAction(ReportIdentification msg, unsigned int sender)
{
	/// Insert User Code HERE
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
	JausAddress server(subs, node, comp);
	
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
    sendJausMessage(qs, server);
	std::cout<<"Recieved ReportIdentification from "<<subs<<" "<<node<<" "<<comp<<"Sending Query Services"<<std::endl;
}

void PlatformManagementServiceDef_PlatformManagementProtocol::sendRegisterServicesAction(ReportServices msg, unsigned int sender)
{
	/// Insert User Code HERE
	unsigned int subs = sender>>16;
	unsigned int node = sender>>8;
	unsigned int comp = sender;
    JausAddress server(subs, node, comp);

	if(count==0)
	{
    RegisterServices rs;
	RegisterServices::RegisterServicesBody::ServiceList slist;
	RegisterServices::RegisterServicesBody::ServiceList::ServiceRec srec;
	jVariableLengthString uri;
	
	uri = "urn::jaus::jss::mobility::NewCustomService";
	jUnsignedByte maj_v = 1;
	jUnsignedByte min_v = 0;
	srec.setURI(uri);
	srec.setMajorVersionNumber(maj_v);
	srec.setMinorVersionNumber(min_v);
    slist.addElement(srec);
	rs.getRegisterServicesBody()->setServiceList(slist);
	count++;
	std::cout<<"Registering Service ...   Sending Register Services..  "<<std::endl;
	sendJausMessage(rs, server);
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
		std::cout<<" Sending Query Services..  "<<std::endl;
    sendJausMessage(qs, server);
   
	


	}

	else if(count>=1)
	{
	ReportServices::Body::NodeList * nlist = msg.getBody()->getNodeList();
	unsigned int size = nlist->getNumberOfElements();
    int flag = 0;

    std::cout<<"Recieved ReportServices.. Printing the services.."<<std::endl;
	if(size==0)
    std::cout<<"No services found Running"<<std::endl;
    
	else if(size>=1)
	{
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
				if(m_URI=="urn::jaus::jss::mobility::NewCustomService")
				{
					flag=1;
				}
				std::cout<<m_URI<<std::endl;
			}
		}
	}
	if(flag==1)
				{
					std::cout<<"Congratulations, The service you requested has been created "<<std::endl;
				}
				else{
					std::cout<<"No new Service Created";
				}

	QuerySubsystemList qsl;
	sendJausMessage(qsl, server);

	}

	
}



}
};

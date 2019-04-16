#ifndef IMUSERMESSAGE_H
#define IMUSERMESSAGE_H

#include <QObject>

enum MessageState
{
	MESSAGE_STATE_WAITSEND = 0, 
	MESSAGE_STATE_PRESEND,      
	MESSAGE_STATE_SENDING,      
	MESSAGE_STATE_DELIVER,      
	MESSAGE_STATE_SEND,         
	MESSAGE_STATE_RECEIVE,      
	MESSAGE_STATE_READ,         
	MESSAGE_STATE_UNREAD,         
	MESSAGE_STATE_FAILURE,     
	MESSAGE_STATE_UNLOADED		
};

enum MessageType
{
	Message_TEXT = 0,       
	Message_PIC = 1,        
	Message_AUDIO = 2,      
	Message_VEDIO = 3,      
	Message_FILE = 5,       
	Message_AD = 7,         
	Message_TRANSFER = 8,   
	Message_REDBAG = 9,     
	Message_VOICE = 10,     
	Message_AT = 11,        
	Message_SECRETLETTER = 20,
	Message_SECRETIMAGE = 21, 
	Message_SECRETFILE = 22,  
	Message_NOTICE = 23,      
	Message_URL = 24,         
	Message_LOCATION = 55,    
	Message_COMMON = 62,    
	Message_GW = 80,        
	Message_ROBOT=85,       
	Message_NOTIFY = 97,    
	Message_SYSTEM = 100,   
	Message_RECEIPT = 101,    
	Message_VIEW = 102,       
	Message_INPUTTING = 103,  
	MessageRecordAll = 1000, 
	Message_Ticket = 201     
};

typedef struct Message :QObjectUserData
{
	short version;        
	int nFromUserID;      
	int nToUserID;        
	qlonglong ClientTime;
	qlonglong ServerTime;
	int nMsgOrder;       
	unsigned char MsgDeliverType;  
	short MessageChildType; 

	QString strMsg;      
	QString strMessageListDesc;
	QString strMessageListJson;


	unsigned char isHavePMsgId;  
	QByteArray PMSGID;
	int nUserID;
	unsigned char PerByte[10];
	QByteArray msgID;
	int MessageState;    
	unsigned long long SendTime;  
	unsigned char offLineFlag;    
	unsigned char interalTypeMain;
	unsigned char interalTypeVice;
	short integral;               
	bool bIsSend;

	QString strRowId;
}MessageInfo;
Q_DECLARE_METATYPE(MessageInfo);

#endif // IMUSERMESSAGE_H

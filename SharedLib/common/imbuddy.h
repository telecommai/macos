#ifndef IMBUDDY_H
#define IMBUDDY_H

typedef struct Buddy :QObjectUserData
{
	QString strHttpAvatar;
	QString strLocalAvatar;
	QString strDefaultAvatar;    
	QString strEmail;
	QString strMobilePhone;
	QString strNickName;
	QString strNote;
	QString strPhone;
	QString strSex;
	QString strSign;
	int nUserId;
	QString strUserName;
	int nUserType;
	QString strPingYin;  
	int BuddyType;       
	int disableStrangers;
	int msgTopOrder;	
	int msgPrompt = 0;
}BuddyInfo;
Q_DECLARE_METATYPE(BuddyInfo);

typedef struct Group : QObjectUserData
{
	QString groupId;
	QString createTime;
	QString createUserId;
	QString groupName;
	QString groupLoacalHeadImage;
	QString groupHttpHeadImage;
	QString groupDefaultAvatar;   
	int noSpeak;
	int groupType;
	int msgTopOrder;		
	int msgPrompt = 0;

	QString groupKey;
	QString groupDesc;

	bool operator <(const Group& other) const
	{
		return groupId < other.groupId;
	}

}GroupInfo;
Q_DECLARE_METATYPE(GroupInfo);

struct MessageListInfo
{
	int nBudyyID;           
	QString strBuddyName;
	QString strBuddyHeaderImage;
	QString strLastMessage; 
	QString strLastMessageJson;
	qlonglong nLastTime;  
	int nUnReadNum;       
	int isGroup;          
	int messageType;      
	int msgTopOrder = 0;	
};

struct ApplyMessage
{
	int applyId;       
	QString applyName; 
	int userId;        
	int groupId;       
	QString groupName; 
	int applyType;     
	int agree;         
};

struct AddApplyMessage 
{
	QString strMegId;		
	int		iType;			
	int		iId;			
	QString strMessage;		
	int		iState;			
	QString strDate;		
	QString	strGroupId;		
	int		iRead;			
};

struct OrgStruct
{
	QString mc;
	QString bh;
	int js;
	QString mx;
	QString type;
	int userID;
	QString parent_bh;
	int groupID;
};
#endif // IMBUDDY_H
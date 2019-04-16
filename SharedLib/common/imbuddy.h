#ifndef IMBUDDY_H
#define IMBUDDY_H

/*好友信息*/
typedef struct Buddy :QObjectUserData
{
	QString strHttpAvatar;
	QString strLocalAvatar;
	QString strDefaultAvatar;    //默认头像
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
	QString strPingYin;  //首字母拼音
	int BuddyType;       //好友类型  1是好友 0是非好友
	int disableStrangers;  //是否允许陌生人消息
	int msgTopOrder;		//消息置顶顺序
	int msgPrompt = 0;
}BuddyInfo;
Q_DECLARE_METATYPE(BuddyInfo);

/*群组信息*/
typedef struct Group : QObjectUserData
{
	QString groupId;
	QString createTime;
	QString createUserId;
	QString groupName;
	QString groupLoacalHeadImage;
	QString groupHttpHeadImage;
	QString groupDefaultAvatar;   //默认头像
	int noSpeak;
	int groupType;
	int msgTopOrder;			//消息置顶顺序
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
	int nBudyyID;           //好友ID
	QString strBuddyName;
	QString strBuddyHeaderImage;
	QString strLastMessage;  //最后一条消息,展示层数据，可能会带<font>标签来展示@成员等特殊效果
	QString strLastMessageJson;//最后一条消息的json格式，其实就是MESSAGELIST表中的LastMsgJson存的JSON数组信息
	qlonglong nLastTime;    //最后一条消息时间
	int nUnReadNum;         //未读消息
	int isGroup;           //是否群组
	int messageType;       //消息类型
	int msgTopOrder = 0;		//消息置顶顺序
};

struct ApplyMessage
{
	int applyId;         //申请人的id。
	QString applyName;   //申请人的昵称。
	int userId;          //用户id。
	int groupId;         //加群消息中，群组的id。
	QString groupName;   //加群消息中，群组的名字。
	int applyType;       //申请消息的类型，0是添加好友，1是添加群组。
	int agree;           //是否已经同意，0是未同意， 1是已同意。
};

struct AddApplyMessage //上面的旧结构ApplyMessage暂不使用 
{
	QString strMegId;			//消息编号
	int		iType;				//申请类型
	int		iId;				//申请人ID
	QString strMessage;			//附加信息
	int		iState;				//处理状态
	QString strDate;			//消息接收时间
	QString	strGroupId;			//申请群组的ID
	int		iRead;				//是否已阅读
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
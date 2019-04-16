#ifndef IMDATABASEOPERAINFO_H
#define IMDATABASEOPERAINFO_H

#include "sqllitesharelib.h"
#include "imbuddy.h"
#include <QObject>

class IMDataBaseOperaInfo : public QObject
{
    Q_OBJECT
public:
	IMDataBaseOperaInfo(QObject *parent = 0);
	~IMDataBaseOperaInfo();

	void ConnectDB(QString strDBPath, QString strDBName);

	QList<BuddyInfo> DBGetBuddyInfo();

	void DBInsertGroupInfo(GroupInfo groupInfo);

	void DBInsertGroupBuddyInfo(QString strGroupID, BuddyInfo buddyInfo);

	void DBUpdateAllGroupUserInfo(BuddyInfo buddyInfo);

	void DBUpdateAllGroupNickName(int UserID,QString nickName);

	void DBUpdateGroupUserNote(int GroupId, int UserID, QString strNote);

	QMap<GroupInfo, QList<BuddyInfo> > DBGetGroupInfo();

	GroupInfo DBGetGroupFromID(QString strGroupID);

	QList<BuddyInfo> DBGetGroupBuddyInfoFromID(QString strGroupID);

	void DBUpdateGroupInfo(GroupInfo groupInfo);

	BuddyInfo DBGetBuddyInfoByID(QString nUserID);

	BuddyInfo DBGetGroupUserFromID(QString nUserID);

	QList<BuddyInfo> DBSearchBuddyInfo();

	QList<GroupInfo> DBSearchGroupInfo();

	QList<BuddyInfo> DBSearchGroupUser(int groupID, QString key);

	void DBUpdateGroupBuddyHeaderImg(QString strBuddyID, QString strGroupID, QString strPath);

	void DBDeleteBuddyInfoByID(QString strBuddyID);

	void DBDeleteGroupUserByID(QString strBuddyID, QString strUserID);

	void DBDeleteGroupInfoByID(QString strBuddyID);

	void DBDeleteGroupBuddyByID(QString strGroupID);

	QList<ApplyMessage> DBGetApplyMessageList();
	void DBInsertApplyMessage(ApplyMessage);
	void DBApplyMessageRead(QString applyId, QString groupId = "");

	void DBInsertOrgTree(OrgStruct orgStruct);

	QList<OrgStruct> DBGetOrgTree(QString bh);

	void DisConnectDB();

	void DBOnInsertFileInfo(QString strMsgID, QString strFileLocalPath, QString strFileHttpPath);

	QString DBGetFileInfoLocalPath(QString strMsgID);

	QString DBGetFileInfoHttpPathByLocalPath(QString strMsgID);
	
	QString DBGetFileLocalPathByHttpPath(QString strHttpPath);

	void DBInsertBuddyInfo(BuddyInfo buddyInfo);

	void DBInsertBuddyInfo(QList<BuddyInfo>);

	void DBInsertPerMessageListInfo(MessageListInfo messagelist);

	void DBInsertGroupMessageListInfo(MessageListInfo messagelist);

	void DBUpdateMessageListInfo(int nBuddyID);

	void DBDeleteMessageByID(QString userID);

	void DBClearAllMessageList();

	bool DBJudgeBuddyIsHaveByID(QString strUserID);

	bool DBJudgeFriendIsHaveByID(QString strUserID);

	bool DBJudgetGroupBuddyIsEmpty(QString strGroupID);

	QList<MessageListInfo> DBGetALLMessageListInfo();

	bool DBJudgeBuddyIsEmpty();

	bool DBJudgeGroupIsHaveByID(QString strGroupID);

	bool DBJudgeGroupIsHaveBuddy(QString strGroupID, QString strBuddyID);

	void DBUpdateLastMsgJsonInMessageList(QString strBuddyOrGroupID, QString lastMsgJson, int msgType);

	QString DBGetLastMsgJsonInMessageList(QString strBuddyOrGroupID);

	BuddyInfo DBGetGroupBuddyInfoWithGroupBuddyID(QString strGroupID, QString strBuddyID);

	QList<GroupInfo> DBGetAllGroupInfo();

	bool DBJudgetGroupIsEmpty();

	QMap<QString, QList<BuddyInfo>> DB_GetBuddyInfo();

	void DBUpdateMsgTopOrderInMessageList(int strID, int topOrder);

	void DBGetMaximumTopOrderInMessageList(int *maxValue, int *minValue);

	int DBGetMsgTopOrderInMessageList(int id);

	void DBDeleteOneRecordInMessageList(int id);

	void DBSetMsgPromptInInfoTables(int id, int tableType);

	void DBCancleMsgPromptInInfoTables(int id, int tableType);

	int DBGetMsgPromptFlagInInfoTables(int id, int tableType);

	void DBInsertAddApplyMessage(AddApplyMessage Info);

	void DBUpdateAddApplyMessage(AddApplyMessage Info);

	bool DBFindAddApplyMessage(int iType, int iId, QString strGroupId ,AddApplyMessage& info);

	bool DBFindAddApplyMessageByMegId(QString strMegID, AddApplyMessage& info);

	void DBUpdateAddApplyRead();

	bool DBFindByIdAddApplyMessage(int iId, AddApplyMessage& info);

	QList<AddApplyMessage>  DBFindALLAddApplyMessage();

	QList<AddApplyMessage>  DBFindALLAddApplyMessageDealt();

	void DBGetEWallet();

	void ChangeOldHeaderPath();

	void ClearUserData();

	QList<BuddyInfo> DBGetAllGroupUserInfo();

private:
	SqlLiteShareLib *mDateBase;
};

#endif // IMDATABASEOPERAINFO_H

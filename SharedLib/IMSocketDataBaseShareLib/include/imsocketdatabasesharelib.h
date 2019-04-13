#ifndef IMSOCKETDATABASESHARELIB_H
#define IMSOCKETDATABASESHARELIB_H

#include "sqllitesharelib.h"
#include "imusermessage.h"

#define DB_MESSAGEINFO_INIT_MAX_NUM  10 
#define DB_MESSAGEINFO_FETCH_MAX_NUM 50 

class IMSocketDataBaseShareLib
{
public:
	IMSocketDataBaseShareLib();
	~IMSocketDataBaseShareLib();

	bool ConnectDB(QString strDBPath, QString strDBName, QString strPsw="");

	void DisConnectDB();

	void InserMessageInfo(int nSelfID, int nUserID, MessageInfo messageInfo);

	QMap<QString, QList<MessageInfo> > GetAllMessage(int nSelfID);

	QMap<QString, QList<MessageInfo> > GetDBRecentMessage(int nSelfID, int chatID,QString strEndRowId = "");

	QMap<QString, QList<MessageInfo> > GetDBCurrentDayMessage(int nSelfID);

	void GetDBUnSendMessageInfo(int nSelfID);

	void UpdataMessageStateInfo(QByteArray msgID, int nState, int integral);

	void UpdataMessageContent(QByteArray msgID, QString content);

	MessageInfo GetDBMessageInfoWithMsgID(int nIMUserID, QString strMsgID);

	QMap<QString, QList<MessageInfo> > GetDBCurrentDayMessageWithIMUserID(int nIMUserID, int nChatID);

	int GetDBMessageRecordPageNum(int nChatID, int nPageNum);

	QList<MessageInfo> GetDBMessageRecordByPage(int nChatID, int nPage, int messageType);

	int GetSearchMessagePageNum(int nChatID, QString strLikeMsg, int nPageNum);

	QList<MessageInfo> GetDBSearchMessageRecordByPage(int nChatID, int nPage);

	QString DBGetMessageLastTime(int nIMUserID);

	void ChangeOldPath();

	void ClearUserData();

	void DeleteByMsgId(QString);

	void setUserPath(QString);

	bool IsLastMsgIdFailure(QString myUserId, QString chatBuddyOrGroupId);


	QString RestoreLocalPathInMessageInfo(QByteArray msgID, QString localPath);
	QString GetLastSysMsgInMessageList(int msgID, QString &fromUser, QString &toUser, int msgType);
	int GetFromUserOfLastMsgInMessageList(int msgID, int messageType);


private:
	void DealWithJsonMsg(MessageInfo&);
	
private:
	SqlLiteShareLib *mSocketDB;
	QString strSql;
	int mPageNum;         
	int mSearchPageNum;   
	QString mSearchMsg;   
	QString m_strUserPath;
};

#endif // IMSOCKETDATABASESHARELIB_H

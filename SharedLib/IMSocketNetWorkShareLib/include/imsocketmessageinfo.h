#ifndef IMSOCKETMESSAGEINFO_H
#define IMSOCKETMESSAGEINFO_H

#include <QObject>
#include "imsocketnetworksharelib.h"

struct PicMessage : QObjectUserData {
	int nFromUserID;
	int nToUserID;
	int nDeliverType;
	QString strUpLoadUrl;
	QString strDownLoadUrl;
	QString strPicPath;
	int nPicHeight;
	int nPicWidth;
};
struct FileMessage : QObjectUserData
{
	int nFromUserID;
	int nToUserID;
	int nDeliverType;
	QString strUpLoadUrl;
	QString strDownLoadUrl;
	QString strFilePath;
	QString FileType;
	QString FileSize;
	QString FileName;
};
Q_DECLARE_METATYPE(PicMessage)
Q_DECLARE_METATYPE(FileMessage)

typedef struct IM_Server
{
	QString ServerIP;
	QString ServerPort;
	QString ServerToken;
}ServerInfo;

struct RequestSocketInfo      
{
	QString strUrl;
	QString strUserID;
	QString strPwd;
};

class IMSocketMessageInfo : public QObject
{
	Q_OBJECT

public:
	IMSocketMessageInfo(QObject *parent=0);
	~IMSocketMessageInfo();

	void RequestSocketUrl(QString strUrl,QString strUserID,QString strUserPwd);

	QString ByteConversion(qint64 nByte);

	QString GetExeDir();


	void setUserPath(QString);

	void DBUpdateMessageStateInfo(QByteArray msgID, int nState, int integral);

	void DBMsgReLoad(MessageInfo msgInfo);
	void DBPicReLoad(MessageInfo msgInfo);
	void DBVideoReLoad(MessageInfo msgInfo);
	void DBAudioReLoad(MessageInfo msgInfo);

private:

	QString StitchSocketParameter(QString url, QString AccountName, QString PassWord);

	bool OnConnectSocket(QString strServerIP, QString strServerPort, QString strToken);
	
	void ConnectDataBase();

public:

	MessageInfo SendTextMessage(int nFromUserID, int nToUserID, int nDeliverType, short MessageChildType, QString strMsg);

	MessageInfo SendVideoMessage(int nFromUserID, int nToUserID, int nDeliverType, short MessageChildType, QString strMsg);

	void SendMessageReadMessage(int nFromUserID, int nToUserID, int nDeliverType, QString strMsg);

	MessageInfo SendPicMessage(int nFromUserID, int nToUserID, int nDeliverType, QString strMsg);
	
	MessageInfo SendFileMessage(int nFromUserID, int nToUserID, int nDeliverType, QString strMsg);

	void setReConnectState(bool bState);

	void setUpFileReplyFinished(QByteArray result,FileMessage*,MessageInfo);

	void setUpPicReplyFinished(QByteArray result,PicMessage *,MessageInfo);

	void setUpNoticePicReplyFinished(QByteArray result, QMap<QString, QString> mapData, MessageInfo msgInfo);

	void SetMessageState(QByteArray msgID, int nState);

	void DBUpdateMessageContent(QByteArray msgID, QString content);

	void SetIMUserID(int nIMID);

	QMap<QString, QList<MessageInfo> > DBGetAllMessage();

	QMap<QString, QList<MessageInfo> > DBGetRecnetMessage(int userID, int chatID,QString strEndRowId = "");

	QMap<QString, QList<MessageInfo> > DBGetCurrentDayMessage();

	QMap<QString, QList<MessageInfo> > DBGetCurrentDayMessageWithIMUserID(int nChatID);

	int DBGetMessageRecordPageNum(int nChatID, int nPageNum = 20);

	QList<MessageInfo> DBGetMessageRecordByPage(int nChatID, int nPage = 0, int messageType = MessageRecordAll);

	int DBGetSearchMessagePageNum(int nChatID, QString strLikeMsg, int nPageNum = 20);

	QList<MessageInfo> DBGetSearchMessageRecordByPage(int nChatID, int nPage = 0);

	MessageInfo DBGetMessageInfoWithMsgID(QString strMsgID);

	QList<QByteArray> SetPerMessageRead(int nUserID);

	QList<QByteArray> SetGroupMessageRead(int nGroupID);

	void ChangeOldPathCmd();

	void ClearUserData();

	MessageInfo SendNoteiceMessage(int nFromUserID, int nToUserID, int nDeliverType, QString strMsg);

	void DeleteByMsgId(QString);

	void DBInsertMessageInfo(int nSelfID, int nUserID, MessageInfo messageInfo);

	bool IsLastMsgIdFailure(QString myUserId,QString chatBuddyOrGroupId);

	void DBRestoreLocalPathInMessageInfo(QByteArray msgID, QString localPath);

	QString DBGetLastSysMsgInMessageInfo(int msgID, QString &fromUser, QString &toUser, int msgType);

	int DBGetFromUserOfLastMsgInMessageList(int chatID, int msgType);


private:
	
	bool ParseSocketInfo(QString socketInfo);

	MessageInfo SendMessage(int nFromUserID, int nToUserID, int nDeliverType, short MessageChildType, int nMessageState, QString strMsg);

	QString DBGetMessageLastTime(int nIMUserID);

	void OnDealMessageText(MessageInfo msgInfo);

	void OnDealMessagePic(MessageInfo msgInfo);

	void OnDealMessageAudio(MessageInfo msgInfo);

	void onDealMessageAD(MessageInfo msgInfo);
	void onDealMessageRedBag(MessageInfo msgInfo);
	void onDealMessageVoice(MessageInfo msgInfo);
	void OnDealMessageAt(MessageInfo msgInfo);
	
	void OnDealMessageVideo(MessageInfo msgInfo);

	void OnDealMessageFile(MessageInfo messageInfo);

	void OnDealMessageCommon(MessageInfo messageInfo);

	void OnDealMessageRobot(MessageInfo messageInfo);

	void OnDealMessageInputting(MessageInfo messageInfo);

private slots:
	
	void slotRecSystemMessage(MessageInfo msgInfo);

	void slotRevServerMessage(MessageInfo msgInfo);

	void slotRevUpdateMessage(MessageInfo, int);

	void slotSendMessage(MessageInfo);

	void slotDisConnectServerServer();

	void slotReplySocketInfoFinished(bool bResult, QString strResult);

	void slotReConnectSocketInfoFinished(bool bResult, QString result);

	void slotDownFileFinish(bool bResult);

	void slotDownVideoFinish(bool bResult);

	void slotDownAudioFinish(bool bResult);

	void slotDBSetMessageInfo(MessageInfo msgInfo);

	void slotDBSetMessageState(QByteArray msgID, int nState);
signals:

	void sigInsertLocalFileTable(QByteArray, QString, QString);

	void sigSendMessage(MessageInfo);

	void sigRevSystemMessage(MessageInfo);

	void sigRevOtherDeviceMsg(MessageInfo);

	void sigRevMsgInfo(MessageInfo, int);

	void sigRevUpdateMessageState(MessageInfo msgInfo, int nState);

	void sigDisConnectServerServer(QString msg);

	void sigGetSocketAddressErro(QString errMsg);

	void sigConnectSocketSuccess();

	void sigReConnectSuccess();

	void sigInputting(MessageInfo);

private:
	IMSocketNetWorkShareLib *mSocketOpera;
	IMSocketDataBaseShareLib *mSocketDataBase; 
	int		nIMUserID;     
	ServerInfo mSocketInfo;
	RequestSocketInfo mRequestSocketInfo;     
	QTimer		*mReConnectTimer; 
	bool mbReConnect;
	QString m_strUserPath;
};

#endif // IMSOCKETMESSAGEINFO_H

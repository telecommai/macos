#ifndef IMGROUPCHATSTORE_H
#define IMGROUPCHATSTORE_H

#include <QObject>
#include <QMap>
#include "imusermessage.h"
#include "imbuddy.h"

class IMGroupChatDispatcher;
class IMGroupChatViewModel;
class IMGroupChatView;

class IMGroupChatStore : public QObject
{
    Q_OBJECT
private:
	IMGroupChatDispatcher* m_dispatcher;
	IMGroupChatViewModel* m_vm;
	IMGroupChatView* m_view;

	QList<QString> m_listPic;

	int m_iHttp;

	QString m_foremostRowId;
	bool m_isShowingMore;

	QList<MessageInfo> waitMessages;
	bool initFinisthed;     
private:
	QString objectName() const;

	QString GetBuddyHeaderImage(QString strGroupID, QString strBuddyID);
	void onInsertTimeLine(qlonglong time_t);
	QString convertHeaderToHtmlSrc(QString headerImage);
	bool IsValidImage(QString imgPath);
	QString formatMessageFromImgDescriptionWithHtmlEncode(const QString& strMessage);
	QString recognizeUrl(const QString& strMessage);
	const QString GetSmallImg(QString strPath);
	QString GetFileMd5(QString fileNamePath);
	int CalWavLength(QString strPath);

	
	void OnInsertRecvPictureInfo(QString strIsUserDefine, QString strUserDefinePicPath, QString strPicPath, QString strHeadImage, QString strNickName, QString strMsgId, int score, QString strBuddyId);
	void OnRecvAudioMessage(MessageInfo messageInfo, QString nickName, QString strHeadImage);
	void OnInsertRecVideoInfo(QString strIsLoading, QString strVideoPicPath, QString strVideoPath, QString strHeadImage, QString strNickName, QString strMsgId, int score, QString strBuddyId);

	void OnInsertGroupUserItem(QString strUserID, QString strPicPath, QString strNickName, int mana, bool bHasNote);

	void OnClearMessageInfo();
	void OnInertSendMessageTextInfo(QString strMsg, QString strHeadImage, MessageInfo msgInfo);
	void InsertSendFileMessage(MessageInfo msgInfo);
	void ChangeFileState(QString strMsgId, int iState);
	void OnInsertRecvFileMessage(MessageInfo msgInfo, QString strBuddyNickName);
	void OnSendTransmitMessage(MessageInfo msg);


	void sendTransmitFile(MessageInfo msg);
	void SendVideo(MessageInfo msg);

	void OnInsertRecvMessageTextInfo(QString strMsg, QString strHeadImage, QString strNickName, QString strMsgId, int score, QString strBuddyId);
	void OnProcessRecvImgMessage(MessageInfo messageInfo, QString strBuddyNickName, QString strBuddyHeadImage);
	void OnProcessRecvAudioMessage(MessageInfo messageInfo, QString strBuddyNickName, QString strBuddyHeadImage);
	void OnProcessRecvVideoMessage(MessageInfo messageInfo, QString strBuddyNickName, QString strBuddyHeadImage);
	void OnProcessRecvAtMessage(MessageInfo messageInfo, QString strBuddyNickName, QString strBuddyHeadImage);
	void OnRecvGroupFile(MessageInfo messageInfo, QString strBuddyNickName);
	void onRecvRedBagMessage(MessageInfo messageInfo, QString nickName, QString strHeadImage);
	void OnRecvNoticeMessage(MessageInfo msgInfo, QString nickName, QString headerImage);
	void onRecvShareUrlMessage(MessageInfo msgInfo, QString nickName, QString headerImage);
	void onRecvLocationMessage(MessageInfo msgInfo, QString nickName, QString headerImage);
	void OnRecvNotifyMessage(MessageInfo msgInfo);
	void OnRecvCommonMessage(MessageInfo messageInfo, QString nickName, QString strHeadImage);

	void OnSendMessageTextInfo(QString strPath, MessageInfo msgInfo);
	void OnSendImgMessage(QString strPath, MessageInfo msgInfo);
	void OnSendFileMessage(QString strPath, MessageInfo msgInfo);
	void OnSendRedBagMessage(QString strPath, MessageInfo msgInfo);
	void OnSendNoticeMessage(QString strPath, MessageInfo msgInfo);
	void OnSendShareUrlMessage(QString strPath, MessageInfo msgInfo);
	void OnSendLocationMessage(QString strPath, MessageInfo msgInfo);
	void OnSendCommonMessage(QString strPath, MessageInfo msgInfo);
	void OnSendAudioMessage(QString strPath, MessageInfo msgInfo);
	void OnSendVideoMessage(QString strPath, MessageInfo msgInfo);
	void OnSendNotifyMessage(QString strPath, MessageInfo msgInfo);
	void OnSendAtMessage(QString strPath, MessageInfo msgInfo);

	void UpdateMessageStateInfo(QByteArray msgID, int nState, int integral);
public:
    explicit IMGroupChatStore(QObject *parent = nullptr);

	void init();

	void InitMessageInfo(QString strEndRowId = "");

	bool IsDownloading();

	QString getDraft();

	void SendTextMessage(QString strText, QString strHtmlText);
	void SendPicture(QString fileName);
signals:

public slots:
	void slotProcessRecvMessageInfo(MessageInfo messageInfo);
	void slotUserQuitGroup(QString strUserId);
	void slotInsertGroupUser(BuddyInfo info);
	void slotThreadLoadGroupUserInfo(BuddyInfo buddyInfo);
	void slotUpdateGroupBuddyImagePath(int userID, QString imagePath);
	void slotSetNoSpeak(int noSpeak);
	void slotInsertGroupUserList();
	void slotGetFile(QString msgID);
	void slotShowByChatId(bool isNew);
	void slotUpdateMessageStateInfo(QByteArray msgID, int nState, int integral);
	void slotProcessSendMessageInfo(QString strHeadImage, MessageInfo msgInfo);
	void slotInsertTextEditPic(QString strPath);
	void slotSendTransmitMessage(MessageInfo msg);
	void slotShareID(int type, QString contactID);
	void slotSendAtMessage(QString content, QString message);
	void slotItemDoubleClicked(int index);
	void slotGivePacketData(QString packetData);
	void slotSendFile(QString fileName);
	void slotSendNotice(QMap<QString, QString> mapData);

	void slotZoomImg(QString strId);
	void slotSaveFile(QString msgID);
	void slotRequestHttpFileResult(bool result);
	void slotDownLoadFileProgress(qint64 recvnum, qint64 total);
	void slotDownFailed();
	void slotDrags(QStringList list);
	void slotLoadMore();

	void slotTipMessage(int type, QString recvID, QString strMessage);

	void slotUpdateNotice(bool);
	void slotCoverFile();
	void slotUpPicReplyFinished(bool result, QByteArray strResult);
	void slotUpFileReplyFinished(bool bResult, QByteArray result);
	void doUpLoadFileProgress(qint64 sendnum, qint64 total);
	void slotUpNoticePicReplyFinished(bool result, QByteArray strResult);
};

#endif // IMGROUPCHATSTORE_H
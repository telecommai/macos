#ifndef IMPERCHATSTORE_H
#define IMPERCHATSTORE_H

#include <QObject>
#include <QMap>
#include "imusermessage.h"
#include "imbuddy.h"

class IMPerChatDispatcher;
class IMPerChatViewModel;
class IMPerChatView;

class IMPerChatStore : public QObject
{
    Q_OBJECT
private:
	IMPerChatDispatcher* m_dispatcher;
	IMPerChatViewModel* m_vm;
	IMPerChatView* m_view;

	QList<QString> m_listPic;

	bool initFinished;
	QList<MessageInfo> waitMessages;

	QString m_foremostRowId;
	bool m_isShowingMore;

	int m_iHttp;
private:
	bool IsValidImage(QString imgPath);
	QString convertHeaderToHtmlSrc(QString headerImage);
	QString formatMessageFromImgDescriptionWithHtmlEncode(const QString& strMessage);
	QString recognizeUrl(const QString& strMessage);
	const QString GetSmallImg(QString strPath);
	QString GetFileMd5(QString fileNamePath);
	int CalWavLength(QString strPath);
	void ChangeFileState(QString strMsgId, int iState);
	void clearHtml();

	void UpdateMessageStateInfo(QByteArray msgID, int nState, int score);

	QString objectName() const;

	void InitMessageInfo(QString strEndRowId = "");

	void InsertRecMessagePictureInfo(QString strIsUserDefine, QString strUserDefinePicPath, QString strPicPath, QString strHeadImage, QString strMsgID, int score, QString strBuddyId);
	void InsertRecVideoInfo(QString strIsLoading, QString strVideoPicPath, QString strVideoPath, QString strHeadImage, QString strMsgID, int score, QString strBuddyId);

	void OnRecvMessageTextInfo(QString strMsg, QString strHeadImage, QString strMsgID, int score, QString strBuddyId);
	void OnRecvImgMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvAudioMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvVideoMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvFileMessage(MessageInfo messageInfo, QString strHeadImage, QString fileLocalPath);
	void OnRecvTransferMessage(MessageInfo msgInfo, QString headerImage);
	void OnRecvRedBagMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvSecretLetter(MessageInfo msgInfo, QString headerImage);
	void OnRecvSecretImage(MessageInfo msgInfo, QString headerImage);
	void OnRecvSecretFile(MessageInfo msgInfo, QString headerImage);
	void OnRecvNoticeMessage(MessageInfo msgInfo, QString headerImage);
	void OnRecvShareUrlMessage(MessageInfo msgInfo, QString headerImage);
	void OnRecvLocationMessage(MessageInfo msgInfo, QString headerImage);
	void OnRecvCommonMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvGWMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvNotifyMessage(MessageInfo messageInfo);

	void OnSendMessageTextInfo(QString strPath, MessageInfo msgInfo);
	void OnSendImgMessage(QString strPath, MessageInfo msgInfo);
	void OnSendFileMessage(QString strPath, MessageInfo msgInfo);
	void OnSendRedBagMessage(QString strPath, MessageInfo msgInfo);
	void OnSendSecretLetter(QString strPath, MessageInfo msgInfo);
	void OnSendSecretImage(QString strPath, MessageInfo msgInfo);
	void OnSendSecretFile(QString strPath, MessageInfo msgInfo);
	void OnSendNoticeMessage(QString strPath, MessageInfo msgInfo);
	void OnSendShareUrlMessage(QString strPath, MessageInfo msgInfo);
	void OnSendLocationMessage(QString strPath, MessageInfo msgInfo);
	void OnSendCommonMessage(QString strPath, MessageInfo msgInfo);
	void OnSendAudioMessage(QString strPath, MessageInfo msgInfo);
	void OnSendVideoMessage(QString strPath, MessageInfo msgInfo);
	void OnSendNotifyMessage(QString strPath, MessageInfo msgInfo);
	void OnSendTransferMessage(QString strPath, MessageInfo msgInfo);

public:
    explicit IMPerChatStore(QObject *parent = nullptr);

	void init();

	bool isFriend(QString strBuddyId);
	bool isSpecialBuddy(QString strBuddyId);

	QString getDraft();

	void SendTextMessage(QString strText, QString strHtmlText);
	void SendPicture(QString fileName);
	void SendTransmitFile(MessageInfo msg);
	void SendVideo(MessageInfo msg);

	bool IsDownloading();
signals:

public slots :
	void slotInsertTimeLine(qlonglong time_t);
	void slotSetNickNameAndBuddyId(QString strText, QString strBuddyID);
	void slotShowByChatId(bool isNew);
	void slotUpdateMessageStateInfo(QByteArray msgID, int nState, int score);
	void slotProcessRecvMessageInfo(MessageInfo messageInfo, BuddyInfo buddyInfo);
	void slotProcessSendMessageInfo(QString strHeadImage, MessageInfo msgInfo);
	void slotInsertTextEditPic(QString strPath);
	void slotSendTransmitMessage(MessageInfo msg);
	void slotShareID(int type, QString contactID);
	void slotRecvNotifyMessage(MessageInfo messageInfo);

	void slotStartInputting();
	void slotEndInputting();

	void slotParseScreenCutMessage(QString strMsg);
	void slotScreenCanclePixMap();
	void slotSendScreenShotPic();

	void slotUpdateHtmlBuddyHeaderImagePath(int nIMUserID, QString headerPath);
	void slotUpdateHtmlBuddyNickName(int nIMUserID, QString nickName, int nGroupID);

	void slotGivePacket(QString data);

	void slotSendFile(QString fileName);

	void slotSendSecretLetter(QString password, QString text, QString message);
	void slotSendSecretImage(QString message);
	void slotSendSecretFile(QString message);

	void slotSendNotice(QMap<QString, QString> mapData);

	void slotZoomImg(QString strId);
	void slotGetFile(QString msgID);
	void slotSaveFile(QString msgID);
	void slotDrags(QStringList list);
	void slotLoadMore();
	void slotWebEngineFinish(bool ok);

	void slotUpdateNotice(bool);
	void slotCoverFile();
	void slotRequestHttpFileResult(bool result);
	void slotDownFailed();
	void slotDownLoadFileProgress(qint64 recvnum, qint64 total);
	void slotUpPicReplyFinished(bool result, QByteArray strResult);
	void slotUpFileReplyFinished(bool bResult, QByteArray result);
	void doUpLoadFileProgress(qint64 sendnum, qint64 total);
	void slotUpNoticePicReplyFinished(bool result, QByteArray strResult);
	
};

#endif // IMPERCHATSTORE_H
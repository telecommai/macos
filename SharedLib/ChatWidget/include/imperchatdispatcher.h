#ifndef IMPERCHATDISPATCHER_H
#define IMPERCHATDISPATCHER_H

#include <QObject>
#include <QKeyEvent>
#include <QMap>
#include "imusermessage.h"
#include "imbuddy.h"
#include "opcommon.h"

class IMPerChatDispatcher : public QObject
{
    Q_OBJECT
public:
    explicit IMPerChatDispatcher(QObject *parent = nullptr);

	void init();
signals:

	void sigOpenPerLog(QString);
	void sigWidgetMinSize();
	void sigShowNormalWindow();
	void sigKeyUpDown(QKeyEvent *);
	void sigUpdateSelfMessage(bool, QVariant, QString, bool, QMap<QString, QVariant>);
	void sigTransferRecord(RecordInfo);
	void sigAddChatGroup(QString);
	void sigTransmit(QString);
	void sigTransferWindow(QString, QString);
	void sigETHWindow(QString, QString);
	void sigBTCWindow(QString, QString);
	void sigEOSWindow(QString, QString);
	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigHostingCharge(int, QString, QString, QString);
	void sigUserInputting(int);

	void sigInsertTimeLine(qlonglong time_t);
	void sigProcessRecvMessageInfo(MessageInfo messageInfo, BuddyInfo buddyInfo);
	void sigSetNickNameAndBuddyId(QString strText, QString strBuddyID);
	void sigShowByChatId(bool isNew);
	void sigUpdateMessageStateInfo(QByteArray msgID, int nState, int score);
	void sigProcessSendMessageInfo(QString strHeadImage, MessageInfo msgInfo);
	void sigInsertTextEditPic(QString strPath);
	void sigSendTransmitMessage(MessageInfo msg);
	void sigShareID(int type, QString contactID);
	void sigRecvNotifyMessage(MessageInfo messageInfo);

	void sigStartInputting();
	void sigEndInputting();

	void sigParseScreenCutMessage(QString strMsg);
	void sigUpdateHtmlBuddyHeaderImagePath(int nIMUserID, QString headerPath);
	void sigUpdateHtmlBuddyNickName(int nIMUserID, QString nickName, int nGroupID);
	void sigSelectExpress();
	void sigSendMessage();             
	void sigGivePacket(QString data);

	void sigSendFile(QString fileName);

	void sigSendSecretLetter(QString password, QString text, QString message);
	void sigSendSecretImage(QString message);
	void sigSendSecretFile(QString message);

	void sigSendNotice(QMap<QString, QString> mapData);

	void sigZoomImg(QString strId);
	void sigCancel(QString msgId);
	void sigGetFile(QString msgID);
	void sigSaveFile(QString msgID);
	void sigDrags(QStringList list);
	void sigLoadMore();
	void sigWebEngineFinish(bool ok);
public slots:
};

#endif // IMPERCHATDISPATCHER_H
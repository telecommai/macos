#ifndef IMGROUPCHATDISPATCHER_H
#define IMGROUPCHATDISPATCHER_H

#include <QObject>
#include <QRect>
#include <QVariant>

#include "imusermessage.h"
#include "imbuddy.h"

class QKeyEvent;

class IMGroupChatDispatcher : public QObject
{
    Q_OBJECT
public:
    explicit IMGroupChatDispatcher(QObject *parent = nullptr);

	void init();
signals:
	void sigExpressHide(QRect rect, QPoint pos);
	void sigSendFile(QString strFileName);
	void sigCloseExpress();
	
	void sigUserQuitGroup(QString strUserId);
	void sigInsertGroupUser(BuddyInfo info);
	void sigSetNoSpeak(int noSpeak);

	void sigInsertGroupUserList();

	void sigUpdateSelfMessage(bool, QVariant, QString, bool, QMap<QString, QVariant>);

	void sigShowByChatId(bool isNew);
	void sigUpdateMessageStateInfo(QByteArray msgID, int nState, int integral);

	void sigProcessRecvMessageInfo(MessageInfo message);
	void sigProcessSendMessageInfo(QString strHeadImage, MessageInfo msgInfo);

	void sigInsertTextEditPic(QString strPath);
	void sigSendTransmitMessage(MessageInfo msg);
	void sigShareID(int type, QString contactID);

	void sigSendAtMessage(QString content, QString message);
	void sigItemDoubleClicked(int index);

	void sigGivePacketData(QString packetData);
	void sigSendNotice(QMap<QString, QString> mapData);
	void sigThreadLoadGroupUserInfo(BuddyInfo buddyInfo);

	void sigZoomImg(QString strId);
	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigCancel(QString);
	void sigGetFile(QString msgID);
	void sigSaveFile(QString msgID);
	void sigDrags(QStringList list);
	void sigLoadMore();

	void sigTipMessage(int type, QString recvID, QString strMessage);
	void sigTransmit(QString);

	void sigMakeGroupHeader(QString groupID);
	void sigHostingCharge(int, QString, QString, QString);
	void sigKeyUpDown(QKeyEvent *);
public slots:
};

#endif // IMGROUPCHATDISPATCHER_H
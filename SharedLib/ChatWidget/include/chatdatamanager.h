#ifndef CHATDATAMANAGER_H
#define CHATDATAMANAGER_H

#include <QObject>
#include "chatwidget.h"
#include "imtranstype.h"
#include "imrequestbuddyinfo.h"
#include "messagelog/messagelog.h"
#include "childWidget/transmitmessagewidget.h"

class IMPerChatView;
class IMGroupView;

class ChatDataManager : public QObject
{
	Q_OBJECT
private:
	static ChatDataManager* pThis;
public:
	bool m_isFirstShowChat;
public:
	ChatDataManager(QObject *parent=NULL);
	~ChatDataManager();

	static ChatDataManager* self();

	ChatWidget *getChatWidget();

    void InsertTextEditPic(QString strPath);

	void updateBuddyHeaderImgPath(int userId,QString path);

	QString m_currentSelectedChatId;

	void RevInputting(MessageInfo);

public slots:
	
	void recvChat(int type, QVariant message, QVariant buddy = QVariant());

	void slotQuickReply(int type, QString contactID, QString strMsg);

	void slotRefreshDeviceInfo();

private slots:
    void slotClickedChat(QString);
	void slotCloseChat(QString);
	void slotCloseAllChat();

	void slotCloseChatQuery(QString);
	void slotCloseAllChatQuery();
	void slotAskExit();

	void slotSearchText(QString);

	void slotParseGroupBuddyInfo(QString, QList<BuddyInfo>);

	void slotUpdateMessageState(MessageInfo, int);
	void slotShowPerLog(QString buddyID);
	void slotOpenGroupLog(QString groupID);
	void slotRevOtherDeviceMsg(MessageInfo);

	void slotTransmitWidget(QString msgID);
	void slotTransmitMessage(int type, QString contactID);

	void slotShareWidget(int type, QString shareID);
	void slotShareMessage(int type, QString recvID);

	void slotTipMessage(int type, QString recvID, QString strMessage);
	

	void slotLoadGroupLogByID();
	void slotLoadPerLogByID();

	void slotDeviceInfoResult(bool success, QString result);

	void slotOpenPic(QString, QList<QString>*,QWidget *);
	void slotClosePic();
	void slotChangePic(int);

	void slotTransferMsg(QString, QString, QString);

	void slotWebEngineViewTermination(QString);

	void slotSetMsgRead(QString);

	void slotUserInputting(int);

	void slotCloseMessagelog();

	void slotContuinueClose();
private:
	IMPerChatView *getPerChat(QString uesrID);
	IMGroupView *getGroupChat(QString groupID);

	void RecvFileMessage(MessageInfo msgInfo, QString Avatar);

	void OnDealPerMessage(QVariant message, QVariant info);

	void OnDealGroupMessage(QVariant message, QVariant info);

	void  OnDealOpenPerMessage(QVariant message);

	void  OnDealOpenGroupMessage(QVariant message);

	void  OnDealBuddyUpdateMessage(QVariant message);

	void OnDealGroupUpdateMessage(QVariant message);

	void OnDealQuitGroupMessage(QVariant message, QVariant info);

	void OnDealGroupAddUserMessage(QVariant message, QVariant info);

	void OnDealGroupNoSpeak(QVariant id, QVariant noSpeak);

	void OnDealBuddyDelete(QVariant message);

	QString decodeURI(QString str);

	void saveDraft(QString);
signals:
	
	void sigWidgetMinSize();

	void sigShowNormalWindow();

	void sigDealTrayIocnFlash(QString);
	void sigMakeGroupHeader(QString);
	void sigCountMessageNum(int);

	void sigUpdateSelfMessage(bool, QVariant, QString,bool, QMap<QString, QVariant>);

	void sigShowDeviceWidget();

	void sigAddChatGroup(QString);

	void sigUpdateSelfImage(int, QPixmap);

	void sigTransferRecord(RecordInfo);

    void sigTransferWindow(QString,QString);

	void sigETHWindow(QString, QString);

	void sigBTCWindow(QString, QString);

	void sigEOSWindow(QString, QString);

	void sigHostingCharge(int, QString, QString, QString);

	void sigWebEngineViewTermination(QString);
private:
	ChatWidget *chatWidget;
	MessageListView *messageList;
	SearchList *searchList;
	QStackedWidget *stackedWidget;
	MessageLog *messageLog;

	QString m_strTmpLogId;
	PicWidget * m_pPicWidget;
	QList<QString> m_listPic;
	QList<QString>::iterator m_PicIter;
};

#endif // CHATDATAMANAGER_H

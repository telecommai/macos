#ifndef MESSAGELISTDISPATCHER_H
#define MESSAGELISTDISPATCHER_H

#include <QObject>
#include <QVariant>
#include <QMap>
#include <QKeyEvent>
#include "imbuddy.h"
#include "imusermessage.h"

class MessageListStore;

class MessageListDispatcher : public QObject
{
    Q_OBJECT
private:
	static MessageListDispatcher* s_instance;
	MessageListStore* m_store;	
public:
    explicit MessageListDispatcher(QObject *parent = nullptr);
	static MessageListDispatcher* instance();
	void init();

signals:
	void sigSetMsgRead(QString strUserId);
	void sigDealTrayIocnFlash(QString strUserId);
	void sigMessageUnreadNumChanged(int num);


	void sigUpdateMessage(bool isGroup, QVariant var);


	void sigClickIndex(int idx);
	void sigClickItem(QString strUserId);
	void sigRightClickItem(QString strUserId);

	
	void sigInsertSelfMessage(bool isGroup, QVariant var, QString msg, bool bNeedOpen, QMap<QString, QVariant> params);
	void sigInsertPerToPerMessage(MessageInfo messageinfo, BuddyInfo buddyInfo, bool bChangeNum);
	void sigInsertPerToGroupMessage(MessageInfo messageinfo, GroupInfo groupInfo, bool bChangeNum);

	void sigDealPerMessageType(MessageInfo msgTmp, BuddyInfo buddyInfo);
	void sigDealGroupMessageType(MessageInfo msgTmp, GroupInfo groupInfo);

	

	void sigViewKeyPressEvent(QKeyEvent *event);
	void sigKeyUpDown(QKeyEvent *event);


	void sigSetDraft(QString strUserId, QString strMsg);

	void sigCloseChat(QString strUserId);
	void sigCloseAllChat();
	void sigCloseChatQuery(QString strUserId);
	void sigCloseAllChatQuery();
	void sigViewDetails(QString strUserId,bool isPer);
	void sigCancleMessageTop(QString strUserId);
	void sigMessageTop(QString strUserId);
	void sigMessagePrompt(QString strUserId);
	void sigMessageNoPrompt(QString strUserId);
	void sigDissolveGroup(QString strUserId);
	void sigUserQuitGroup(QString strUserId);

	void sigCheckHttp(bool bResult, QString strResult);
public slots:
	void slotClickIndex(int idx);
	void slotClickItem(QString strUserId);
	void slotRightClickItem(QString strUserId);

	void slotCloseChat(QString strUserId);
	void slotCloseAllChat();

	void slotInsertPerToPerMessage(MessageInfo messageinfo, BuddyInfo buddyInfo, bool bChangeNum);
	void slotInsertPerToGroupMessage(MessageInfo messageinfo, GroupInfo groupInfo, bool bChangeNum);

	void slotDealPerMessageType(MessageInfo msgTmp, BuddyInfo buddyInfo);
	void slotDealGroupMessageType(MessageInfo msgTmp, GroupInfo groupInfo);
	void slotUpdateMessage(bool isGroup, QVariant var);

	void slotKeyUpDown(QKeyEvent *event);
	void slotInsertSelfMessage(bool isGroup, QVariant var, QString msg, bool bNeedOpen, QMap<QString, QVariant> params);

	void slotSetDraft(QString strUserId, QString strMsg);

	void slotViewDetails(QString strUserId, bool isPer);
	void slotCancleMessageTop(QString strUserId);
	void slotMessageTop(QString strUserId);
	void slotMessagePrompt(QString strUserId);
	void slotMessageNoPrompt(QString strUserId);
	void slotDissolveGroup(QString strUserId);
	void slotUserQuitGroup(QString strUserId);

	void slotCheckHttp(bool bResult, QString strResult);
};

#endif // MESSAGELISTDISPATCHER_H
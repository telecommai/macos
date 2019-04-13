#ifndef MESSAGELIST_H
#define MESSAGELIST_H

#include <QListWidget>
#include <QListWidgetItem>
#include <QScrollBar>
#include <QKeyEvent>
#include <QJsonDocument>
#include "cfrientitemmessage.h"
#include "imbuddy.h"
#include "imusermessage.h"
#include "stdafx.h"
#include <QDebug>

class MessageList : public QListWidget
{
	Q_OBJECT

public:
	MessageList(QWidget *parent);
	~MessageList();

	MessageListInfo OnInsertPerToPerMessage(MessageInfo, BuddyInfo);

	MessageListInfo OnInsertPerToGroupMessage(MessageInfo, GroupInfo);

	MessageListInfo OnClickPerMessage(MessageInfo, BuddyInfo);

	MessageListInfo OnClickGroupMessage(MessageInfo, GroupInfo);

	QString OnDealMessageType(MessageInfo StInfo);

	void OnInsertMessage(QString strUserID, QString strPicPath, QString strNickName, QString strAutoGrapthText, int messageTime, QString strMessageNum, int nType = 0, int nHeight = 64);

	void OnUpdateMessage(bool isGroup, QVariant var);

	void onDeleteItem(int row);

	int getMessageUnreadNum();

    MessageListInfo getCurrentItemInfo();

protected:
	void keyPressEvent(QKeyEvent * event);
	void enterEvent(QEvent * event);
	void leaveEvent(QEvent * event);

signals:
	void sigDoubleClickItem(QString);
	
	void sigCloseChat(QString);

	void sigDealTrayIocnFlash(QString);

	void sigMessageNum(int);

	//void 

private slots:
	void doDoubleClickedItem(QListWidgetItem *item);

    void slotInsertSelfMessage(bool isGroup, QVariant var, QString msg,bool bNeedOpen = true);
	void slotCountMessageNum();

	void slotKeyUpDown(QKeyEvent *);
};

#endif // MESSAGELIST_H

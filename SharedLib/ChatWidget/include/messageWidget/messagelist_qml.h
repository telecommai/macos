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
#include <QQuickWidget>
#include "MessageListModel.h"

class MessageList : public QQuickWidget
{
	Q_OBJECT
public:
	MessageListModel* m_pMsglistModel;
public:
	MessageList(QWidget *parent);
	~MessageList();

	bool IsValidImage(QString imgPath);

	int getCurrentIndex();
	void doClickIndex(int index);
	void doUpDownKeyClick(bool isUp);

	Q_INVOKABLE void doClickItem(QString userId);

	Q_INVOKABLE void showToolTip(QString txt);

	MessageListInfo OnInsertPerToPerMessage(MessageInfo, BuddyInfo);

	MessageListInfo OnInsertPerToGroupMessage(MessageInfo, GroupInfo);

	MessageListInfo OnClickPerMessage(MessageInfo, BuddyInfo);

	MessageListInfo OnClickGroupMessage(MessageInfo, GroupInfo);

	void OnInsertMessage(QString strUserID, QString strPicPath, QString strNickName, QString strAutoGrapthText, int messageTime, QString strMessageNum, int nType = 0, int nHeight = 64);

	void OnUpdateMessage(bool isGroup, QVariant var);

	void onDeleteItem(int row);

	int getMessageUnreadNum();

    MessageListInfo getCurrentItemInfo();

protected:
	void keyPressEvent(QKeyEvent * event);

signals:
	void sigDoubleClickItem(QString);
	
	void sigCloseChat(QString);

	void sigDealTrayIocnFlash(QString);

	void sigMessageNum(int);

	//void 

private slots:
	void slotInsertSelfMessage(bool isGroup, QVariant var, QString msg);
	void slotCountMessageNum();

	void slotKeyUpDown(QKeyEvent *);
};

#endif // MESSAGELIST_H

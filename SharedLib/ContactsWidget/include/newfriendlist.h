#ifndef NEWFRIENDLIST_H
#define NEWFRIENDLIST_H

#include <QListWidget>
#include <QListWidgetItem>
#include <QScrollBar>
#include <QKeyEvent>
#include <QMenu>
#include <QDebug>
#include "imbuddy.h"
#include "imtranstype.h"
#include "cfrientitembuddy.h"
#include "stdafx.h"
#include "messagebox.h"
#include "interplanetnoticewidget.h"
#include "cfrientitemmessage.h"

class NewFriendList : public QListWidget
{
	Q_OBJECT

public:
	NewFriendList(QWidget *parent = NULL);
	~NewFriendList();
	void setLableNum(QString strNum);

protected:
	void keyPressEvent(QKeyEvent * event);
	void enterEvent(QEvent * event);
	void leaveEvent(QEvent * event);
private:
	InterPlanetNoticeWidget *buddy;
	

private slots:
	void doDoubleClickedItem(QListWidgetItem *item);
	void doClickedItem(QListWidgetItem *item);

signals:
	void sigPerChat(int type, QVariant strBuddyID);
	void sigProfile(QString strBuddyID);
	void sigChangeFoucs();
	void sigNewFirendFile();
	void sigNewFriendItemClicked();
};

#endif // CONTACTSLIST_H

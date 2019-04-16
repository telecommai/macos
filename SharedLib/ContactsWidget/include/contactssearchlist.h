#pragma once

#include <QMenu>
#include <QListWidget>
#include <QListWidgetItem>
#include <QScrollBar>
#include <QKeyEvent>
#include <QDebug>
#include "cfrientitemgroup.h"
#include "cfrientitembuddy.h"
#include "imbuddy.h"
#include "imtranstype.h"


namespace Ui { class ContactsSearchList; };

class ContactsSearchList : public QListWidget
{
	Q_OBJECT

public:
	ContactsSearchList(QWidget *parent = Q_NULLPTR);
	~ContactsSearchList();

	void onInsertContacts(QList<BuddyInfo>, QList<GroupInfo>, QList<BuddyInfo>);
	void onChangeItem(QKeyEvent *);

protected:
	void keyPressEvent(QKeyEvent * event);
	void enterEvent(QEvent * event);
	void leaveEvent(QEvent * event);

	private slots:
	
	void slotDoubleClickedItem(QListWidgetItem *item);
signals:

	void sigOpenChat(int type, QVariant strID);

private:
	Ui::ContactsSearchList *ui;
};

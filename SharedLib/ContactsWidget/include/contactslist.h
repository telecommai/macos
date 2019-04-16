#ifndef CONTACTSLIST_H
#define CONTACTSLIST_H

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
#include "httpnetworksharelib.h"

class ContactsList : public QListWidget
{
	Q_OBJECT

public:
	ContactsList(QWidget *parent = NULL);
	~ContactsList();

	void OnInsertContactsInfo(BuddyInfo buddyInfo);

	void OnUpdateBuddyInfo(BuddyInfo buddyInfo);

	void UpdateBuddyImage(QString userID, QPixmap pix);

	void deleteFriend(QString userID);

protected:
	void keyPressEvent(QKeyEvent * event);
	void enterEvent(QEvent * event);
	void leaveEvent(QEvent * event);

private:
	
	bool OnJudgeIsListTitle(QString strTitle);

	void OnInsertContactsofIndex(BuddyInfo info, int nIndex, int nHeight = 62);

private slots:
	void doDoubleClickedItem(QListWidgetItem *item);
	void doClickedItem(QListWidgetItem *item);
	void doListContextMenu(const QPoint& point);

	void slotUpdateBuddyInfo(BuddyInfo buddyInfo);
	void slotDeleteBuddy();
	void slotCheckHttp(bool bSuccess, QString strValue);
signals:
	
	void sigPerChat(int type, QVariant strBuddyID);
	void sigProfile(QString strBuddyID);
	void sigChangeFoucs();

private:
};

#endif // CONTACTSLIST_H

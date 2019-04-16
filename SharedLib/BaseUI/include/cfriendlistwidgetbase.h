#ifndef CFRIENDLISTWIDGETBASE_H
#define CFRIENDLISTWIDGETBASE_H

#include <QWidget>
#include <QListWidget>
#include <iostream>
#include <map>
#include <set>
#include "cfrientstylewidget.h"
#include <QMouseEvent>


class CFriendListWidgetBase : public QListWidget
{
    Q_OBJECT


public:
    explicit CFriendListWidgetBase(QWidget *parent = 0);

	void OnInsertMessage(QString strUserID, QString strPicPath, QString strNickName, QString strAutoGrapthText, QString strMessageTime, QString strMessageNum, int nType=0,int nHeight = 64);

	void OnInsertContacts(QString strData, QString strUserID, QString strPicPath, QString strNickName, QString strSign, int nType=0 , int nHeight = 62);
	void OnInsertGroup(QString strData, QString strUserID, QString strPicPath, QString strNickName, int nType = 0, int nHeight = 62);

	void OnInsertContactsofIndex(QString strData, QString strUserID, QString strPicPath, QString strNickName, QString strSign, int nIndex, int nHeight = 62);

    void OnInsertGroupUserList(QString strUserID,QString strPicPath,QString strNickName, int mana, int nHeight=30);
	
	void OnInsertLogUserList(QString strUserID, QString strPicPath, QString strNickName, int ntype,int nHeight = 30);
	
	void OnInsertManagerUserList(QString strUserID, QString strPicPath, QString strNickName, int nHeight, bool hasAccept = false);
	void OnInsertManagerApplyGroup(QString groupID, QString strUserID, QString strPicPath, QString text, int nHeight, bool hasAccpet = false);
	
	void OnInsertMessageBoxList(QString strTime,QString strMsg,QString strUserID, QString strPicPath, QString strNickName, int nHeight = 64);

	void OnInsertAddCreateWidgetList(QString strAddID,QString strPicPath,QString strAddName,QString strNote,int nHeight = 70);

	void OnInsertSearchBuddyList(QString strAddID, QString strPicPath, QString strAddName, int nHeight = 70);

	void OnInsertSearchGroupList(QString strAddID, QString strPicPath, QString strAddName, int iType, int nHeight = 62);

protected: 
	
private slots:
	void doAddPerson(QString strBuddyID);

	void slotOnMouseEnteredListWidgetItem(QListWidgetItem* item);      
	void slotOnMouseLeavedListWidgetItem(QListWidgetItem* item);		

	void slotClickAcceptBtn();

	void slotClickCloseBtn(QString);
	void slotCountMessageNum();
signals:
	void sigAddPerson(QString strBuddyID);

	void sigMouseEnteredItem(QListWidgetItem* item);   
	void sigMouseLeavedItem(QListWidgetItem* item);    

	void sigClickAcceptBtn();

	void sigChatClose(QString);
	void sigMessageNum(int);

private:
   
    int SearchContactItem(QString strFlags);

private:
	int m_type;      
};

#endif // CFRIENDLISTWIDGETBASE_H

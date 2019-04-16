#ifndef CFRIENDTABLEWIDGETBASE_H
#define CFRIENDTABLEWIDGETBASE_H

#include <QTableWidget>
#include "cfrientstylewidget.h"

class CFriendTableWidgetBase : public QTableWidget
{
	Q_OBJECT

public:
	CFriendTableWidgetBase(QWidget *parent = 0);
	~CFriendTableWidgetBase();

	void OnInsertSearchGroupList(QString strAddID, QString strPicPath, QString strAddName, int iType, int nHeight=62);
	void OnInsertSearchBuddyList(QString strAddID, QString strPicPath, QString strAddName, int nHeight = 62);
	void FriendTableSize(int iValue);
	int m_iNum;

private slots:
	void doAddPerson(QString strBuddyID);
	void slotClickChange();
	void slotOpenProFile(QString);
protected:
	void mousePressEvent(QMouseEvent *event);
signals:
	void sigAddPerson(QString strBuddyID,int iType);
	void sigOpenProfile(QString);
};

#endif // CFRIENDTABLEWIDGETBASE_H

#pragma once

#include <QWidget>
#include <QMoveEvent>
#include <QListWidgetItem>
#include <qjsondocument.h>
#include "shadow.h"
#include "stdafx.h"
#include "pinyin.h"
#include "messagebox.h"
#include "imtranstype.h"
#include "cfrientstylewidget.h"
#include "httpnetworksharelib.h"
namespace Ui { class GroupAddBuddyWidget; };

class GroupAddBuddyWidget : public QWidget
{
	Q_OBJECT

public:
	GroupAddBuddyWidget(QWidget *parent = Q_NULLPTR);
	~GroupAddBuddyWidget();

	void setGroupID(QString groupID) { this->groupID = groupID; }

public slots:
	void show();
#ifdef Q_OS_LINUX
    void setLinuxCenter();
#endif
protected:
	void changeEvent(QEvent * event);
	void moveEvent(QMoveEvent *event);
	void resizeEvent(QResizeEvent* event);

	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

	bool eventFilter(QObject *obj, QEvent *e);

	private slots:
	void slotContactsItemClicked(QListWidgetItem* the_item);
	void slotMemberItemClicked(QString buddy_id);

	void slotSearch(QString);
	void slotClickSearchList(QListWidgetItem *);

	void slotClickEnterBtn();

signals:
	void sigTipMessage(int type, QString recvID, QString strMessage);
	
private:
	void initContactsList();
	void updateGroupMembersCount();
	
private:
	Ui::GroupAddBuddyWidget *ui;

	Shadow *shadow;
	QPoint mouse;

	QString groupID;
};

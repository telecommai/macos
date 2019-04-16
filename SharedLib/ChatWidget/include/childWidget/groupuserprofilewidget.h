#pragma once

#include <QWidget>
#include <QPushButton>
#include <QBitmap>
#include <QClipboard>
#include <QEvent>
#include <QMouseEvent>
#include "stdafx.h"
#include "imbuddy.h"
#include "opcommon.h"
#include "zooming/picwidget.h"
#include "oprequestsharelib.h"

namespace Ui {
	class GroupUserProfileWidget;
}

class GroupUserProfileWidget : public QWidget
{
	Q_OBJECT

public:
	GroupUserProfileWidget(QWidget *parent = Q_NULLPTR);
	~GroupUserProfileWidget();

	void setBuddy(BuddyInfo buddy);

private slots:
    void slotAddressInfo(AddressInfo);
	void slotCopyAddress();

	void slotOpenChat();

	void slotAddGroupUser();
	void slotApplyResult(bool, QString);

	void slotPicClose();

protected:
	bool eventFilter(QObject *obj, QEvent *e);

signals:
	void sigOpenChat(QString);

private:
	void setStar(QString star);

private:
	Ui::GroupUserProfileWidget *ui;
	QPoint mouse; 

	QPushButton *closeBtn;


	QString headerPath;
	QString buddyID;
	PicWidget* m_pPicWidget;
};

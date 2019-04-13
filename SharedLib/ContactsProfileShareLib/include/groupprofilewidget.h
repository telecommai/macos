#ifndef GROUPPROFILEWIDGET_H
#define GROUPPROFILEWIDGET_H

#include <QWidget>
#include <qbitmap.h>
#include <QFile>
#include <QJsonDocument>
#include <QPainter>
#include "qlabelheader.h"
#include "imbuddy.h"
#include "stdafx.h"
#include "imtranstype.h"
#include "groupavatarwidget.h"
#include "httpnetworksharelib.h"
#include "zoomimg.h"
#include "qrencodesharelib.h"
 
namespace Ui {
	class GroupProfileWidget;
}


class GroupProfileWidget : public QWidget
{
	Q_OBJECT

public:
	GroupProfileWidget(QWidget *parent = 0);
	~GroupProfileWidget();

	void setGroup(GroupInfo);
	void setGroup(QString);
	QString getGroupID();

private slots:
	void slotGroupChat();
	void slotUploadHeaderImage(QString filePath);
	void slotHttpChangeAvatar(bool success, QByteArray byte);
	void slotAvatarChanged(bool success, QString byte);

	void slotToggledFreeBtn();
	void slotClickQRcodeBtn();

	void slotEditName();
	void slotEditNote();
	void slotEditKey();
	void slotEditDesc();

	void slotGroupAddBuddy();

	void slotShare();
	void slotApplyJoinGroup();
	void slotJoinSuccess();
	void slotJoinFailed();

signals:
	void sigGroupChat(int, QVariant);

	void sigCloseProfile();

	void sigTipMessage(int type, QString recvID, QString strMessage);

	void sigShareID(int type, QString  buddyID);
private:
	bool eventFilter(QObject *, QEvent *);
	void setManagerNote();
	void setAdjustText(QLabel *, QString text);

protected:	
	void closeEvent(QCloseEvent * event);

private:
	Ui::GroupProfileWidget *ui;

	QPoint mouse;
	QPushButton *closeBtn;

	QLabelHeader *headerLabel;
	QPushButton *groupChatBtn;
	QPushButton *shareBtn;
	QString groupID;

	QPixmap headerImage;

	GroupAvatarWidget *avatarWidget;

	QString ui_nameEditStyleSheet, ui_enEditStyleSheet, ui_descEditStyleSheet;
};

#endif // GROUPPROFILEWIDGET_H

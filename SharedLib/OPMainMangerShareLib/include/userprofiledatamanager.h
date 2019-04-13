#ifndef USERPROFILEDATAMANAGER_H
#define USERPROFILEDATAMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include <QDesktopWidget>
#include <QApplication>
#include "userprofile/userprofilewidget.h"
#include "userprofile/changeavatarwidget.h"
#include "userprofile/userinfowidget.h"
#include "common.h"
#include "stdafx.h"
#include "httpnetworksharelib.h"

class UserProfileDataManager : public QObject
{
	Q_OBJECT

public:
	UserProfileDataManager(QWidget *parent = NULL);
	~UserProfileDataManager();

private slots:
	void slotProfileWidget();
	void slotDisableStrangers(bool);
	void slotUploadHeaderImage(QString);
	void slotHttpChangeAvatar(bool, QByteArray);
	void slotAvatarChanged(bool, QString);
	void slotUserInfo(UserInfo);

private:
	QWidget *parentWidget;

	UserProfileWidget *userWidget;
	ChangeAvatarWidget *avatarWidget;
	UserInfoWidget *infoWidget;

	QPixmap headerImage;
};

#endif // USERPROFILEDATAMANAGER_H

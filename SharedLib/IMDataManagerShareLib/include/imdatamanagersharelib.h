#ifndef IMDATAMANAGERSHARELIB_H
#define IMDATAMANAGERSHARELIB_H

#include "common.h"
#include <QWidget>

class IMDataManagerShareLib
{
public:
	IMDataManagerShareLib();
	~IMDataManagerShareLib();

	void setAppConfigInfo(AppConfig conf) { mAppConf = conf; }

	AppConfig getAppConfigInfo() { return mAppConf; }

	void setUserInfo(UserInfo userInfo);

	void updateUserInfo(UserInfo userInfo);

	UserInfo getUserInfo() { return mUserInfo; }

#ifdef Q_OS_WIN
    void setCurrentChatWidget(WId id);
	HWND getCurrentChatWidget();
    WId currentChatWidget;
#endif

	void setMainWidget(QWidget *widget) { this->mainWidget = widget; }
	QWidget *getMainWidget() { return this->mainWidget; }

private:
	AppConfig mAppConf;
	UserInfo mUserInfo;

	QWidget *mainWidget;
};

#endif // IMDATAMANAGERSHARELIB_H

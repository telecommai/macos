#ifndef OPWINDOWSMANAGERSHARELIB_H
#define OPWINDOWSMANAGERSHARELIB_H

#include <QObject>
#include <QJsonDocument>
#include "stdafx.h"
#include "opmainmanagersharelib.h"
#include "opdatamanager.h"
#include "common.h"
#include "scanqrloginsharelib.h"
#include "opdatebasesharelib.h"
#include "recoverywidget.h"
#include "messagebox.h"

class OPWindowsManagerShareLib:public QObject
{
	Q_OBJECT
public:
	OPWindowsManagerShareLib(QObject *parent = 0);
	~OPWindowsManagerShareLib();

	void StartLoginWidget(QString strYWYHRequestURL, QString appID);

	void DestroyLoginWidget();

	void StartIMMainWidget(UserInfo userInfo);

	void DestroyIMMainWidget();

	void RevServerMessageInfo(MessageInfo msgInfo);

	void ChangeLoginWidget(QString);

	void ReadWalletAddress();

	bool JudgeMainWindow();

	void RevInputting(MessageInfo);

private slots:

	void slotInsertBuddyInfo(BuddyInfo);

	void slotInsertGroupInfo(GroupInfo groupInfo);

	void slotCloseApp();

	void slotRecoveryWallet(QString);
	
	void slotRecoveryResult(QString);
signals:
	
	void sigLoginSuccess(QVariantMap);

	void sigUpdateMessageState(MessageInfo, int);

	void sigSetMainWidgetStatusLabel(QString msg);

	void sigNetWarning(bool);

	void sigRefreshDeviceState();
	
	void sigOpenChat(int, QVariant);

	void sigUpdateUserInfo(UserInfo);

	void sigUpdateInfo(int, QVariant);

	void sigUserQuitGroup(QString groupID, QString buddyID);

	void sigAddFriendSuccess(BuddyInfo);

	void sigApplyFriend(int, MessageInfo * = NULL);

	void sigAddSuccessGroup(GroupInfo);

	void sigAddSuccessGroupUserInfo(QString strMap, BuddyInfo buddyInfo);

	void sigDeleteFriend(int type, QVariant userID);

	void sigRevOtherDeviceMsg(MessageInfo msgInfo);

	void sigExit();

	void sigInitBuddyGroup();

	void sigDeleteGroup(QString groupID);

	void sigGroupNoSpeak(int, int);

    void sigClickedDock();

    void sigGlobalMouseMouse();

	void sigCancel();

	void sigCancelandDelete(QString);

    void sigSendScreenShotPic();

	void sigGlobalScreenShot();

	void sigCheckUpdate();
private:
	OPMainManagerShareLib  *mMainManager;
	ScanQRLoginShareLib *m_pScanQR;
	RecoveryWidget* recoveryWidget;

    QWebEngineView *cefView;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;
};

#endif // OPWINDOWSMANAGERSHARELIB_H

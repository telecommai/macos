#ifndef OPOBJECTMANAGER_H
#define OPOBJECTMANAGER_H

#include <QObject>
#include <qtranslator.h>
#include <qsharedmemory.h>
#include "imrequestbuddyinfo.h"
#include "imsocketmessageinfo.h"
#include "opwindowsmanagersharelib.h"
#include "parsesystemmessage.h"
#include "updatesharelib.h"
#include "getdeviceinfo.h"
#ifdef Q_OS_WIN
#include "qhttpserver.h"
#include "dump.h"
#endif
class OPObjectManager : public QObject
{
	Q_OBJECT
public:
	OPObjectManager(QObject *parent = NULL);
	~OPObjectManager();

	void update();

	AppConfig readAppConf();

	void StartLoginWidget();

	void InitApp();
	
	int InitMain();

	void initLanguage();
	
private:

	void initUpdate(bool doUpdate=true);

	void RegisterMetaType();

	void installTranslator(QString qmPath);

	void InitLog();

	void RequestPersonInfo();

	void RequestBuddyInfo();

	void RequestGroupInfo();

	void ConnectSocketServer();

	void InitBuddyInfo();

	void InitGroupInfo();

	void LoadBuddyInfo();

	void LoadGroupInfo();

	UserInfo ParseUserInfoFromServer(QVariantMap varMap);

	void requestOffline();

	void loadRccResource();

private slots:
  
    void slotRestartMain();

	void slotStart();

	void slotLoginSuccess(QVariantMap varMap);

	void slotParsePersonInfo(bool bResult, UserInfo userInfo);

	void slotRevSystemMessage(MessageInfo);

	void slotRevMsgInfo(MessageInfo, int);

	void slotGetSocketAddressErro(QString);

	void slotConnectSocketSuccess();

	void slotReConnectSuccess();

	void slotExit();

	void slotInitBuddyGroup();

	void slotGetGroupByKey(QString);

	void slotApplyGroup(bool, QString);

	void slotCancel();

	void slotGlobalScreenShot();

	void slotCancelandDelete(QString);

	void slotCheckUpdate();

	void slotInputting(MessageInfo);       

	void slotInsertLocalFileTable(QByteArray, QString, QString);

	void slotDisConnectServerServer(QString);

	void slotThemeSwitch(QString);

#ifndef Q_OS_WIN
    void slotScreenCanclePixMap();
    void slotSendScreenShotPic();
#endif
signals:
	void sigReConnectServerSuccess(QString msg);

	void sigOpenChat(int, QVariant);

	void sigUpdateBuddyInfo(BuddyInfo buddyInfo);

    void sigClickedDock();

    void sigGlobalMouseMouse();

	void sigRestart();

#ifndef Q_OS_WIN
    void sigSendScreenShotPic();
#endif
private:
	OPWindowsManagerShareLib *mWindowManager;
	ParseSystemMessage *sysMessage;
	bool m_bChecking;
#ifdef Q_OS_WIN
	QHttpServer *mHttpServer;
	QSharedMemory shareMem;
#endif
};

#endif // OPOBJECTMANAGER_H

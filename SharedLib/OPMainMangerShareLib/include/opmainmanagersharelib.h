#ifndef OPMAINMANAGERSHARELIB_H
#define OPMAINMANAGERSHARELIB_H

#include <QObject>
#include "immainwidget.h"
#include "contactsdatamanager.h"
#include "chatdatamanager.h"
#include "common.h"
#include "define.h"
#include "userprofiledatamanager.h"
#include "ewalletmanager.h"
#include "creategroupwidget.h"
#include "imaddperson.h"
#include "alphabeticalsortsharedlib.h"
#include "settings/settingswidget.h"
#include "profilemanager.h"
#include "childrenWidget/recorddetailperwidget.h"
class QxtGlobalShortcut;
class OPMainManagerShareLib : public QObject
{
	Q_OBJECT
public:
	OPMainManagerShareLib(QObject *parent);
	~OPMainManagerShareLib();

	void startMainWidget(UserInfo userInfo);

	void RevServerMessage(MessageInfo msgInfo);

	void setWalletInfo(WalletInfo);

	void RevInputting(MessageInfo);

private:
	bool InitScreenShot();
	bool InitQuickOpen();
#ifndef Q_OS_WIN

    QString GetNoticeMsgType(MessageInfo);
#ifdef Q_OS_MAC

    void MessageNoticePer(MessageInfo,BuddyInfo);

    void MessageNoticeGroup(MessageInfo,GroupInfo);
    #endif
#endif

	public slots:

	void slotBuddysManager(int type, QVariant data);

	void slotGroupsManager(int type, QVariant data);

	void slotUpdateUserHeaderImg(int nUserID, QPixmap pix);


	void slotUpdateBuddyHeaderImgPath(int nUserID, QString path);

	void slotUpdateBuddyHeaderImg(int nUserID, QString imgPath);

	void slotUpdateGroupHeaderImg(int nUserID, QString imgPath);

	void slotOpenChat(int type, QVariant userID);

	void slotUpdateInfo(int type, QVariant var);

	void slotUserQuitGroup(QString groupID, QString buddyID);

	void slotAddFriendSuccess(BuddyInfo buddyInfo); 

	void slotApplyFriend(int i, MessageInfo * = NULL);

	void slotAddSuccessGroup(GroupInfo);

	void slotAddSuccessGroupUserInfo(QString, BuddyInfo);

	void slotInitMainWidget(UserInfo userInfo);

	void slotWidgetMinSize();

	void slotShowNormalWindow();

	void slotSettings();
	void slotSettingsClose();

	void slotClearPath();
	void slotChangePath(QString);

	void slotShowDeviceWidget();
	void slotShowChatWidget();

	void slotUpdateSelfMessage(bool, QVariant, QString, bool, QMap<QString, QVariant>);

	void slotLanguage(QString);
	void slotRestart();
public slots:
#ifndef Q_OS_WIN
    void slotSendScreenShotPic();
    #ifdef Q_OS_MAC
    void slotNotifyReplied(QString userID, QString reply);
    #endif
#endif

private slots:
	void slotAddCreateGroup();
	void slotAddChatGroup(QString buddyID);
	void slotOpenCreateGroup(QString groupID);
	void slotCloseCreateGroup();
	void slotAddPerson();
	void slotCloseAddPerson();
	void slotDormancyState(bool bState);
	void slotDeleteGroup(QString);   
	void slotGroupNoSpeak(int, int);  
	void slotDeleteBuddy(int type, QVariant userID);

	void slotMakeGroupHeader(QString);

	void slotAddStranger(MessageInfo);

	void slotStrangerResult(bool, QString);
	void slotDownloadStrangerHeader(bool);

	void slotRequestGroupResult(bool, QString);
	void slotDownloadGroupHeader(bool);

	void slotTransferRecord(RecordInfo);
	void slotScreenCut(QString strValue);
	void slotSetQuickOpen(QString strValue);
	void slotSendMsg(int iValue);
	void slotCheckKey(int);

	void slotRefreshDeviceState();

	void setScreenShot(QString strValue);
	void setQuickOpen(QString strValue);

	void slotUpdateHtmlBuddyHeaderImagePath(int buddyId, QString path);
signals:
	void sigUpdateMessageState(MessageInfo, int);
	void sigSetMainWidgetStatusLabel(QString);
	void sigExit();
	void sigRevOtherDeviceMsg(MessageInfo);
    void sigClickedDock();
    void sigGlobalMouseMouse();
	void sigCancel();
	void sigCancelandDelete(QString);
	void sigGlobalScreenShot();
	void sigQuickOpen();
	void sigUpdateSelfMessage(bool, QVariant, QString, bool, QMap<QString, QVariant>);
	void sigCheckUpdate();
	void sigNetWarning(bool);
private:
	IMMainWidget *mainWidget;
	UserProfileDataManager *userProfileManager;
	ContactsDataManager *contactsManager;
	ChatDataManager *chatManager;
	EWalletManager *walletManager;
	profilemanager *m_pProFileManager;
	CreateGroupWidget *createGroupWidget;
	IMAddPerson *addPersonWidget;

	SettingsWidget * m_pSettingsWidget;
	bool m_bSShootFaild;
	bool m_bQOpenFaild;

	QxtGlobalShortcut* m_shortcutPic;
	QxtGlobalShortcut* m_shortcutOpen;
};

#endif // OPMAINMANAGERSHARELIB_H

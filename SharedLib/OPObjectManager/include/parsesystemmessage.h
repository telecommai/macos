#ifndef PARSESYSTEMMESSAGE_H
#define PARSESYSTEMMESSAGE_H

#include <QObject>
#include "stdafx.h"
#include "alphabeticalsortsharedlib.h"
#include "imdownloadheaderimg.h"
#include "opcommon.h"

class ParseSystemMessage : public QObject
{
	Q_OBJECT

public:
	ParseSystemMessage(QObject *parent = 0);
	~ParseSystemMessage();

	void ParseSysMessage(MessageInfo messageInfo);

private:
	
	QString GetExeDir();

	void OnDealUpDateUser(MessageInfo msgInfo, QVariantMap mapResult);

	void OnDealUpDateFriend(MessageInfo msgInfo, QString userID);

	void onDealUpdateOwnerNoteInGroup(QVariantMap mapResult);

	void OnDealUpdateGroupInfo(QVariantMap mapResult);

	void OnDealUserQuitGroup(QVariantMap mapResult);

	void OnDealAddFriend(QVariantMap result);

	void OnDealAddUserToGroup(QVariantMap result);

	void OnDealDisSolveGroup(QVariantMap result);

	void OnDealGroupNoSpeak(QVariantMap result);
	void OnDealUpdateGroupType(QVariantMap result);
	void OnDealUpdateGroupDesc(QVariantMap result);
	void OnDealUpdateGroupKey(QVariantMap result);
	void OnDealApplyFriend(QVariantMap result,QString strMegId);
	void OnDealApplyGroup(QVariantMap result, QString strMegId);
	void OnDealRejectFriend(QVariantMap result, QString strMegId);
	void OnDealRejectGroup(QVariantMap result, QString strMegId);
	private slots:
	void slotRequestPersonInfoFinished(bool bResult, QString result);
	void slotRequestGroupInfoFinished(bool bResult, QString result);
	void slotRecvAddGroupUser(bool success, QString data);
	void slotUpdateBuddyHeaderImage(int buddyID, QPixmap pix);
	void slotUpdateGroupHeaderImage(int buddyID, QPixmap pix);
	void slotTempFriend(bool bSuc, QString strValue);
	void slotInsertAddressInfo(AddressInfo);
signals:
	
	void sigDeviceLogout();
	
	void sigRefreshDeviceState();
	
	void sigUpdateUserInfo(UserInfo userInfo);

	void sigUpdateInfo(int,QVariant);

	void sigAddFriendSuccess(BuddyInfo);

	void sigApplyFriend(int, MessageInfo *messageInfo = NULL);

	void sigAddSuccessGroup(GroupInfo);

	void sigAddSuccessGroupUserInfo(QString strMsg, BuddyInfo buddy);

	void sigUserQuitGroup(QString groupID, QString userID);

	void sigDeleteFriend(int type, QVariant userID);

	void sigDeleteGroup(QString groupID);

	void sigGroupNoSpeak(int groupID, int noSpeak);

private:
	AlphabeticalSortSharedLib mAlphabeticalSort;  
};

#endif // PARSESYSTEMMESSAGE_H

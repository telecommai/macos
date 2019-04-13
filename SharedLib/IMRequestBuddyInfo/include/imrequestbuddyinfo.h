#ifndef IMREQUESTBUDDYINFO_H
#define IMREQUESTBUDDYINFO_H

#include <QObject>
#include "imbuddy.h"
#include "common.h"
#include "alphabeticalsortsharedlib.h"

class IMRequestBuddyInfo : public QObject
{
	Q_OBJECT
public:
	IMRequestBuddyInfo(QObject *parent = NULL);
	~IMRequestBuddyInfo();

	void RequestBuddyInfo(QString strUrl, QString strIMUserID, QString strPwd,QString appID);

	void RequestBuddyInfo(QList<BuddyInfo>);

	void RequestGroupInfo(QString strUrl, QString strIMUserID, QString strPwd, QString appID);
	void RequestGroupInfo(QList<GroupInfo>);

	void RequestGroupBuddyInfo(QString strUrl, QString strIMUserID, QString strPwd, QString groupID);

	void RequestPersonInfo(QString strUrl, QString strUserID);

private slots:

	void slotRequestPersonInfoFinished(bool bResult, QString strResult);
signals:

	void sigParseBuddyInfo(BuddyInfo);

	void sigParseGroupInfo(GroupInfo);

	void sigParseGroupBuddyInfo(QString strGroupID,QList<BuddyInfo> listbuddyInfo);

	void sigRequestPersonInfoSuccess(bool,UserInfo);

	void sigInsertGroupBuddyInfo(QString,BuddyInfo);
private:

	QString SwitchRequestBuddyInfo(QString url, QString AccountName, QString PassWord, QString appID);

	QString StitchGroupBuddyParameter(QString url, QString AccountName, QString PassWord, QString strGroupID);

	QString GetExeDir();
private:
	AlphabeticalSortSharedLib mAlphabeticalSort;   
};

#endif // IMREQUESTBUDDYINFO_H

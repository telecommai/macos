#ifndef CONTACTSDATAMANAGER_H
#define CONTACTSDATAMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include "contactswidget.h"
#include "contactlist.h"
#include "grouplist.h"
#include "contactssearchlist.h"
#include "imtranstype.h"
#include "opcommon.h"



#include "newfriendlist.h"

class GroupProfileWidget;
class perProfileWidget;

class ContactsDataManager : public QObject
{
	Q_OBJECT
private:
	static ContactsDataManager* s_instance;
public:
	ContactsDataManager(QObject *parent=NULL);
	~ContactsDataManager();

	static ContactsDataManager* instance();

	ContactsWidget *getContactsWidget();

	void recvBuddyData(int type, QVariant data);

	void recvGroupData(int type, QVariant data);

	void updateImage(int type, int nIMuserID, QString imgPath);

	void UpdateNewFriendWidget();

	void SetMessageNumUp(int);

	static bool currentProfileFlag;

	void setUpdateIndexFlag(bool bVal);

private slots:
	void slotSendChat(int type, QVariant ID);

    void slotAddressInfo(QString);
    void slotPerProfile(QString);
    void slotGroupProfile(QString);
	void slotGroupProfileNoShow(QString);


	void slotSearchText(QString);

	void slotDownloadImageFinished(int ID, QString imgPath);

	void slotConChangeFoucs();
	void slotNewChangeFoucs();
	void slotNewFirendFile();

	void slotApplyFriend(QString);
	void slotRejectFriend(QString);
	void slotAddFriendUrl(bool, QString);
	void slotApplyGroup(QString);
	void slotRejectGroup(QString);
	void slotNewApply();
	void slotFilter(int);
	void slotSetNote(QString);
	void slotUpdateBuddyInfo(BuddyInfo);
	void slotSetCurrentProfile(bool);
	void slotSendPerOrGroupFlag(int);

	void slotOpenPerOrGroupChat(QString strUserId);
signals:
	void sigAddCreateGroup();
	void sigAddPerson();
	void sigOpenChat(int, QVariant);
	void sigUpdateImage(int, QVariant);
	void sigMessageNum(int);
	void sigUpdateBuddyInfo(BuddyInfo);
	void sigOpenPic(QString, QList<QString>*, QWidget*);

	void sigTipMessage(int type, QString recvID, QString strMessage);
	void sigShareID(int, QString);
	void sigUpdateInfo(int, QVariant);

	void sigUpdateSelfMessage(bool, QVariant,QString, bool, QMap<QString, QVariant>);

	void sigOpenPerOrGroupChat(QString strUserId);
private:
	ContactsWidget *widget;
	ContactsSearchList *searchList;
	ContactList *contactsList;
	NewFriendList *newfriendList;
	GroupList *groupList;
	perProfileWidget *perWidget;
	GroupProfileWidget *groupWidget;
	QWidget * BigWidget;
	QListWidget* newFriendWidget;
	int m_iMessageNum;
	int perOrGroupFlag = 1;
	QString m_style1;
	QString m_style2;
};

#endif // CONTACTSDATAMANAGER_H

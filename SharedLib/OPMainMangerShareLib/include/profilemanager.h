#ifndef PROFILEMANAGER_H
#define PROFILEMANAGER_H

#include <QObject>
#include <QMap>
#include <QVariant>
#include "imbuddy.h"
#include "opcommon.h"
class perProfileWidget;
class GroupProfileWidget;
class profilemanager : public QObject
{
	Q_OBJECT

public:
	static profilemanager* getInstance();
private:
	profilemanager(QObject *parent);
	profilemanager(const profilemanager&);
	profilemanager& operator=(const profilemanager&);
	~profilemanager();
	static profilemanager* instance;
private slots:

	void slotCreatePerFile(QString);
	void slotCreatePerFileByInfo(BuddyInfo);

	void slotCreateGrpFile(QString);
	void slotCreateGrpFileByInfo(GroupInfo);

	void slotClosePerFile();

	void slotCloseGrpFile();

	void slotShareBuddyHeader(bool success);
	void slotShareBuddyInfoResult(bool success, QString result);
	void slotShareGroupHeader(bool success);
	void slotShareGroupInfoResult(bool success, QString result);
	void slotAddressInfo(AddressInfo);
signals:
	void sigCreatePerFile(QString);
	void sigCreateGrpFile(QString);
	void sigCreatePerFileByInfo(BuddyInfo);
	void sigCreateGrpFileByInfo(GroupInfo);
	void sigShareID(int, QString);
	void sigOpenPic(QString, QList<QString>*, QWidget*);
	void sigOpenChat(int, QVariant);

private:
	QMap<QString,perProfileWidget*> mapPerFile;
	QMap<QString,GroupProfileWidget*> mapGrpFile;
};
#endif // PROFILEMANAGER_H
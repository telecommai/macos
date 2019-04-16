#ifndef THREADLOADGROUPUSERLIST_H
#define THREADLOADGROUPUSERLIST_H

#include <QObject>
#include <QMetaType>
#include <QThread>
#include "imbuddy.h"

class ThreadLoadGroupUserList : public QThread
{
	Q_OBJECT

public:
	explicit ThreadLoadGroupUserList(QObject *parent = 0);
	~ThreadLoadGroupUserList();

	void SetListBuddyInfo(QList<BuddyInfo> tempList);

protected:
	virtual void run() Q_DECL_OVERRIDE;

signals:
	void sigLoadGroupUserList(BuddyInfo buddyInfo);


private:
	QList<BuddyInfo> listBuddyInfo;

	int singleCount;
};

#endif // THREADLOADGROUPUSERLIST_H

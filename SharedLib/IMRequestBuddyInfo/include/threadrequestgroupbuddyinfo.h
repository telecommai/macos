#ifndef THREADREQUESTGROUPBUDDYINFO_H
#define THREADREQUESTGROUPBUDDYINFO_H

#include <QThread>
#include "imbuddy.h"

class ThreadRequestGroupBuddyInfo : public QThread
{
	Q_OBJECT

public:
	ThreadRequestGroupBuddyInfo(QObject *parent = 0);
	~ThreadRequestGroupBuddyInfo();

	void setUrl(QString url){ mUrl = url; }

private:
	void ParseGroupBuddyInfo(QByteArray byteArray);

	QString GetExeDir();

signals:
	
	void sigParseGroupBuddyInfo(QString,QList<BuddyInfo>);
protected:
	virtual void run();
private:
	QString mUrl;
};

#endif // THREADREQUESTGROUPBUDDYINFO_H

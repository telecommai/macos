#ifndef THREADREQUESTGROUPINFO_H
#define THREADREQUESTGROUPINFO_H

#include <QThread>
#include "imbuddy.h"

class ThreadRequestGroupInfo : public QThread
{
	Q_OBJECT

public:
	ThreadRequestGroupInfo(QObject *parent = 0);
	~ThreadRequestGroupInfo();

	void setUrl(QString url){ mUrl = url; }

	void setGroupInfoList(QList<GroupInfo> listGroupInfo) { mListGroupInfo = listGroupInfo; }
private:

	void ParseGroupInfo(QByteArray byteArray);

	QString GetExeDir();
signals:
	
	void sigParseGroupInfo(GroupInfo);
protected:
	virtual void run();

private:
	QString mUrl;
	QList<GroupInfo> mListGroupInfo;
};

#endif // THREADREQUESTGROUPINFO_H

#ifndef THREADREQUESTBUDDYINFO_H
#define THREADREQUESTBUDDYINFO_H

#include <QThread>
#include "alphabeticalsortsharedlib.h"
#include "imbuddy.h"

class ThreadRequestBuddyInfo : public QThread
{
	Q_OBJECT

public:
	ThreadRequestBuddyInfo(QObject *parent=0);
	~ThreadRequestBuddyInfo();

	void setUrl(QString url){ mUrl = url; }

	void setBuddyList(QList<BuddyInfo> listBuddy) { mListBuddy = listBuddy; }

private:
	
	void ParseBuddyInfo(QByteArray byteArray);

	QString GetExeDir();
signals:
	
	void sigParseBuddyInfo(BuddyInfo);
protected:
	virtual void run();
private:
	QString mUrl;
	QList<BuddyInfo> mListBuddy;
	AlphabeticalSortSharedLib mAlphabeticalSort;  
};

#endif // THREADREQUESTBUDDYINFO_H

#ifndef THREADPOLL_H
#define THREADPOLL_H

#include <QThread>
#include <QVariantMap>
#include "messagebox.h"
class ThreadPoll : public QThread
{
	Q_OBJECT

public:
	ThreadPoll(QObject *parent);
	~ThreadPoll();

private:
	QByteArray RequestUrl(QString strUrl);
	void RequestCodeID();
	QString ParseCodeID(QByteArray byteArray);
	QString GenerateQRJson();

	void RequestCodeStatus();

	void ParseCodeStatus(QByteArray byteArray);
protected:
	virtual void run();

signals:
	void sigCreateQR(QString);
	void sigLoginSuccess(QVariantMap);
	void sigLoginFailed();
private:
	QString mClientID;
	QString mCodeID;
	bool mbScanQr;
	QVariantMap resultMap;
};

#endif // THREADPOLL_H

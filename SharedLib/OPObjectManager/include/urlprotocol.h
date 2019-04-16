#ifndef URLPROTOCOL_H
#define URLPROTOCOL_H

#include <QObject>
#include <qnetworkaccessmanager.h>
#include <QNetworkReply>
#include <qsettings.h>
#include <qapplication.h>

class UrlProtocol : public QObject
{
	Q_OBJECT

public:
	UrlProtocol(QObject *parent = NULL);
	~UrlProtocol();

	void setURL(QString protocol);

private slots:
	void slotFinished(QNetworkReply* reply);

private:
	QNetworkAccessManager *manager;
};

#endif // URLPROTOCOL_H

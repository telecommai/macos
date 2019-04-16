#pragma once

#include <QObject>
#include "messagebox.h"
#include "oprequestsharelib.h"
#include "eosBase/eoshelp.h"
#include "opdatamanager.h"
#include "stdafx.h"

class EOSTurnOutManager : public QObject
{
	Q_OBJECT

public:
	EOSTurnOutManager(QObject *parent);
	~EOSTurnOutManager();

	void setPriKey(QString key) { this->strKey = key;  };

	void setTurnOutData(QString userAddress, QString otherAddress, QString value);

	private slots:
	void slotDataParam(QString);
	void slotEOSInfo(QString);
	void slotBlockNum(int, int);
	void slotTransFinished(bool);

private:
	QString strKey;

	QString from;

	QString dataParam;
	QByteArray infoByte;
};

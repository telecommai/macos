#pragma once

#include <QObject>
#include <QWebEngineView>
#include <QWebChannel>
#include "webobjectsharelib.h"
#include "opdatamanager.h"
#include "messagebox.h"
#include "stdafx.h"
#include "oprequestsharelib.h"

class BTCTurnOutManager : public QObject
{
	Q_OBJECT

public:
	BTCTurnOutManager(QObject *parent = NULL);
	~BTCTurnOutManager();

	void setPriKey(QString strKey);
	void turnOut(QString fromAddress, QString toAddress, QString value);

	

	private slots:
	void slotBtcUtxo(QString);
	void slotTransactionData(QString);
	void slotTransResult(bool);

private:
    QWebEngineView *cefView;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;
	QString strKey;

	QString fromAddress;
	QString toAddress;
	QString value;
};

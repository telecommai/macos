#pragma once

#include <QObject>
#include <QWebEngineView>
#include <QWebChannel>
#include "webobjectsharelib.h"
#include "opdatamanager.h"
#include "oprequestsharelib.h"
#include "messagebox.h"
#include "detailswidget.h"

class TransferManager : public QObject
{
	Q_OBJECT

public:
	TransferManager(QObject *parent = NULL);
	~TransferManager();

	void setPrivateKey(QString);

	void turnOut(QString userID, QString otherID, QString fromAddress, QString toAddress, QString miner, QString value,bool bIsWindow);
	void hostingCharge(QString userID, QString trusteeshipId,
		QString value, QString txFrom, QString txTo);

private slots:
	void slotGetNonce(QString);
	
	void slotGetTransactionData(QString);

	void slotWebEngineFinish(bool bResult);

	void slotTransfer(bool, QVariant);

	void slotHostingChargeResult(bool success);
signals:
	void sigFinished();
	void sigTransferMsg(QString, QString, QString);

private:
    QWebEngineView *cefView;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;

	QString userID;
	QString otherID;
	QString fromAddress;
	QString toAddress;
	QString miner;
	QString value;
	bool bIsWindow;

	QString trusteeshipId;

	QString priKey;
};

#pragma once

#include <QObject>
//#ifdef Q_OS_WIN
//#include "qcefview.h"
//#else
#include <QWebEngineView>
#include <QWebChannel>
#include "webobjectsharelib.h"
//#endif
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
//#ifdef Q_OS_WIN
//    QCefView *cefView;
//#else
    QWebEngineView *cefView;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;
//#endif

	QString userID;
	QString otherID;
	QString fromAddress;
	QString toAddress;
	QString miner;
	QString value;
	bool bIsWindow;

	//托管账户充值。
	QString trusteeshipId;

	QString priKey;
};

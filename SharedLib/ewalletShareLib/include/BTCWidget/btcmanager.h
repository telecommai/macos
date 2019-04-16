#pragma once

#include <QObject>
#include <QMenu>
#include <QStackedWidget>
#include "opcommon.h"
#include "btcwidget.h"
#include "recoverywidget.h"

#include "../childrenWidget/walletinfowidget.h"
#include <QWebEngineView>
#include <QWebChannel>
#include "webobjectsharelib.h"
#include "opdatamanager.h"
#include "oprequestsharelib.h"

#include "../childrenWidget/walletmanager.h"
#include "../childrenWidget/turninwidget.h"
#include "../childrenWidget/turnoutwidget.h"
#include "../childrenWidget/recordswidget.h"

#include "btcturnoutmanager.h"

class BTCManager : public QObject
{
	Q_OBJECT

public:
	BTCManager(QObject *parent = NULL);
	~BTCManager();

	BTCWidget *getBTCWidget();

	void setStackedWidget(QStackedWidget *);
	void setMainAddress(QString);
	void setPriKey(QString);
	void setWallets(QList<ChildrenWallet>);

	void OtherWindow(QList<ChildrenWallet>);

private slots:
	void slotShowInfoWidget();
	void slotShowRecWidget(QString, QString);
	void slotRecoveryWallet(QString string);
	void slotRecoveryResult(QString json);
	void slotRecoveryFinished(bool);

	void slotTurnInWidget();
	void slotTurnOutWidget();
	void slotProfileWidget();

	void slotOpenMenu();
	void slotSwitchWallet();
	void slotGetBalance(QString);

	void slotWalletManager(QString address);
	void slotSetWalletInfo(QString accountAddress, QString mainAccountAddress,
		QString accountName, QString accountIcon, QString blockChainName);
	void slotDeleteWallet(QString accountAddress, QString mainAccountAddress, QString blockChainName);

	void slotTurnOutManager(QString address, QString value);

	void slotClearChecked();

signals:
	void sigRefresh();
	void sigClearChecked();

private:
	void switchWallet(ChildrenWallet* wallet = NULL);

private:
	BTCWidget *btcWidget;
	QStackedWidget *stackedWidget;

	TurnInWidget *turnInWidget;
	TurnOutWidget *turnOutWidget;
	RecordsWidget *recordsWidget;

    QWebEngineView *cefView;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;

	QString mainAddress;
	QString walletKey;
	QString iconID;
	QString walletName;

	QList<ChildrenWallet> walletList;
	ChildrenWallet * m_pCurrentWallet;
	QString m_strBalance;
};

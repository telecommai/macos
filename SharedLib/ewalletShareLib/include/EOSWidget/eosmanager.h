#pragma once

#include <QObject>
#include <QMenu>
#include <QStackedWidget>
#include "eoswidget.h"
#include "messagebox.h"
#include "oprequestsharelib.h"
#include "opcommon.h"
#include "eosBase/eoshelp.h"
#include "../childrenWidget/walletinfowidget.h"

#include "opdatamanager.h"

#include "eosrecoverywidget.h"
#include "../childrenWidget/walletmanager.h"
#include "../childrenWidget/turninwidget.h"
#include "../childrenWidget/turnoutwidget.h"
#include "../childrenWidget/recordswidget.h"

#include "eosturnoutmanager.h"

class EOSManager : public QObject
{
	Q_OBJECT

public:
	EOSManager(QObject *parent = NULL);
	~EOSManager();

	void setStackedWidget(QStackedWidget *);
	EOSWidget *getEOSWidget();
	void setMainAddress(QString);
	void setPriKey(QString);
	void setWallets(QList<ChildrenWallet> walletList);
	void OtherWindow(QList<ChildrenWallet>);

public slots:
	void slotClearChecked();

private slots:
	void slotShowInfoWidget();
	void slotShowRecWidget(QString name, QString ID);
	void slotRecovryWallet(QString ownPubKey, QString ownPriKey,
		QString actPubKey, QString actPriKey);
	void slotRecoveryResult(QString);
	void slotRecoveryFinished(bool);

	void slotGetBalance(QString balance);

	void slotProfileWidget();

	void slotTurnInWidget();
	void slotTurnOutWidget();

	void slotWalletManager(QString address);
	void slotSetWalletInfo(QString accountAddress, QString mainAccountAddress, QString accountName, QString accountIcon, QString blockChainName);
	void slotDeleteWallet(QString accountAddress, QString mainAccountAddress, QString blockChainName);
	void slotAccountChanged(QString);

	void slotOpenMenu();
	void slotSwitchWallet();

	void slotTurnOutManager(QString userAddress, QString otherAddress, QString value);

signals:
	void sigRefresh();
	void sigClearChecked();

private:
	void switchWallet(ChildrenWallet* wallet = NULL);

private:
	QStackedWidget *stackedWidget;
	EOSWidget *eosWidget;

	QList<ChildrenWallet> walletList;
	ChildrenWallet * m_pCurrentWallet;
	QString m_strBalance;

	QString mainAddress;
	QString walletKey;

	QString iconID;
	QString walletName;

	QString ownerPubKey;
	QString ownerPriKey;
	QString activePubKey;
	QString activePriKey;

	TurnInWidget *turnInWidget;
	TurnOutWidget *turnOutWidget;
	RecordsWidget *recordsWidget;
};

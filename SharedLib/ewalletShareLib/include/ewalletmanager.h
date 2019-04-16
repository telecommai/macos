#ifndef EWALLETMANAGER_H
#define EWALLETMANAGER_H

#include <QObject>

#include "ETHWidget/ethmanager.h"
#include "BTCWidget/btcmanager.h"
#include "EOSWidget/eosmanager.h"
#include "ewalletassetswidget.h"

#include "pwrWidget/changeintoWidget/changeintowidget.h"
#include "pwrWidget/myDeviceWidget/mydevicewidget.h"
#include "pwrWidget/hostingAccountWidget/hostingaccoutwidget.h"
#include "pwrWidget/transferWidget/transferwidget.h"
#include "pwrWidget/transferWidget/transfermanager.h"
#include "childrenWidget/recordswidget.h"
#include "opcommon.h"
#include "common.h"
#include "oprequestsharelib.h"
#include "opdatamanager.h"

#include "ewalletwidget.h"
#include "starflashwidget.h"

class EWalletManager : public QObject
{
	Q_OBJECT

public:
	EWalletManager(QObject *parent);
	~EWalletManager();

	EWalletWidget *getWalletWidget();

	void setUserInfo(UserInfo);
	void setWalletInfo(WalletInfo);

	void countBuddysNum();
	void countGroupsNum();

	void refreshDeviceState();
	void showDeviceWidget();

private slots:
    void slotRefresh();
    void slotSetIntegral(QString);
    void slotSetBalance(QString);

    void slotTransfer(QString otherID, QString toAddress, QString miner, QString value,bool bIsWindow);

	void slotLoadChildren();
	void SlotChildrenWallet(QList<ChildrenWallet>);

	void slotGetRecords();

	void slotTransferWindow(QString,QString);
	void slotETHWindow(QString, QString);
	void slotBTCWindow(QString, QString);
	void slotEOSWindow(QString, QString);

	void slotBuddyBTCWallets(QList<ChildrenWallet>);
	void slotBuddyETHWallets(QList<ChildrenWallet>);
	void slotBuddyEOSWallets(QList<ChildrenWallet>);

	void slotHostingCharge(int trusteeshipId, QString fromAddress, QString toAddress, QString value);

signals:
	void sigTransferMsg(QString, QString, QString);
private:
	QString stringToThousandth(QString string, int keep = 0);
private:
	UserInfo userInfo;
	WalletInfo walletInfo;

	EWalletWidget *walletWidget;
	StarFlashWidget *starWidget;

	IntegralCardWidget *cardWidget;
	MyDeviceWidget *deviceWidget;
	HostingAccoutWidget *hostingWidget;
	ChangeIntoWidget *intoWidget;
	TransferWidget *transWidget;
	SafeWidget *safeWidget;
	RecordsWidget *recordsWidget;

	TransferManager *trans;

	EWalletAssetsWidget *assetsWidget;
	ETHManager *ethManager;
	BTCManager *btcManager;
	EOSManager *eosManager;

	QString m_balance;
};

#endif // EWALLETMANAGER_H

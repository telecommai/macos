#pragma once

#include <QObject>
#include <QMenu>
#include <QStackedWidget>
#include "opcommon.h"
#include "ethwidget.h"
#include "recoverywidget.h"
#include "../childrenWidget/walletinfowidget.h"

#include <QWebEngineView>
#include <QWebChannel>
#include "webobjectsharelib.h"

#include "opdatamanager.h"
#include "oprequestsharelib.h"

#include "ethturnoutwidget.h"
#include "ethturnoutmanager.h"
#include "../childrenWidget/walletmanager.h"
#include "../childrenWidget/recordswidget.h"
#include "../childrenWidget/turninwidget.h"

class ETHManager : public QObject
{
	Q_OBJECT

public:
	ETHManager(QObject *parent = NULL);
	~ETHManager();

	ETHWidget *getETHWidget();

	void setStackedWidget(QStackedWidget *);
	void setMainAddress(QString);
	void setPriKey(QString);
	void setWallets(QList<ChildrenWallet>);
	void OtherWindow(QList<ChildrenWallet>,QString);

private slots:
    void slotShowInfoWidget();
    void slotShowRecWidget(QString, QString);
    void slotRecoveryWallet(QString string);
    void slotRecoveryResult(QString json);
    void slotRecoveryFinished(bool);

	void slotOpenMenu();
	void slotSwitchWallet();
	void slotGetBalance(QString);

	void slotTurnInWidget();
	void slotProfileWidget();
	void slotProfileWidget(QString address, QString name, QString tokenID);
	void slotTurnOutWidget();
	void slotDoTurnOut(QString from, QString to, QString value,QString,bool);

	void slotSetAllChain();
	void slotSetFollowChain();
	void slotFollowToken(QString, QString, QString, bool);

	void slotWalletManager(QString address);
	void slotSetWalletInfo(QString accountAddress, QString mainAccountAddress,
		QString accountName, QString accountIcon, QString blockChainName);
	void slotDeleteWallet(QString accountAddress, QString mainAccountAddress, QString blockChainName);

	void slotClearChecked();

signals:
    void sigRefresh();
	void sigTransferMsg(QString, QString, QString);
	void sigClearChecked();

private:
	QString stringToThousandth(QString string, int keep /*= 0*/);
	
private:
	ETHWidget *ethWidget;
	QStackedWidget *stackedWidget;

    QWebEngineView *cefView;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;

	QString mainAddress;
	QString walletKey;
	QString iconID;
	QString walletName;

	QList<ChildrenWallet> walletList;
	ChildrenWallet  m_pCurrentWallet;
	QString m_strBalance;


	TurnInWidget *turnInWidget;
	ETHTurnOutWidget *turnOutWidget;
	ETHTurnOutManager *turnOutManager;
	RecordsWidget *recordsWidget;
};

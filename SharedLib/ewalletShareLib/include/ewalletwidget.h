#pragma once

#include <QWidget>
#include <QMovie>
#include <QDebug>
#include <QStackedWidget>
#include "starflashwidget.h"
#include "pwrWidget/changeintoWidget/changeintowidget.h"
#include "pwrWidget/transferWidget/transferwidget.h"
#include "pwrWidget/integralCardWidget/integralcardwidget.h"
#include "pwrWidget/myDeviceWidget/mydevicewidget.h"
#include "pwrWidget/hostingAccountWidget/hostingaccoutwidget.h"
#include "pwrWidget/safeWidget/safewidget.h"
#include "childrenWidget/recordswidget.h"

namespace Ui { class EWalletWidget; };

enum STATE
{
	FRONT, BACK, BACKTOFRONT, FRONTOBACK
};

class EWalletWidget : public QWidget
{
	Q_OBJECT

public:
	EWalletWidget(QWidget *parent = Q_NULLPTR);
	~EWalletWidget();

	StarFlashWidget *getStarWidget();
	ChangeIntoWidget *getIntoWidget();
	TransferWidget *getTransWidget();
	SafeWidget *getSafeWidget();
	RecordsWidget *getRecordsWidget();
	IntegralCardWidget *getCardWidget();
	MyDeviceWidget *getDeviceWidget();
	HostingAccoutWidget *getHostingWidget();

	void addWidget(QWidget *);
	QStackedWidget *getStackedWidget();

	void setEnergySum(QString);

	void switchDeviceWidget();

public slots:
	void slotClearChecked();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

private slots:
	void slotGifToBack();
	void slotGifToFront();

	void slotTurnInWidget();
	void slotTurnOutWidget();

	void slotSwitchAssetsPage();
	void slotSwitchPWRPage();
	void slotSwitchETHPage();
	void slotSwitchBTCPage();
	void slotSwitchEOSPage();
	void slotOpenMenu();

signals:
	void sigETHMenu();
	void sigBTCMenu();
	void sigEOSMenu();

	void sigGetRecords();

	void sigRefreshAccount();

	void sigClearChecked();
private:
	void initGif();

private:
	Ui::EWalletWidget *ui;

	int gifState;

	ChangeIntoWidget *intoWidget;
	TransferWidget *transferWidget;
	RecordsWidget *recordsWidget;

	SafeWidget *safeWidget;
	IntegralCardWidget *cardWidget;
	MyDeviceWidget *deviceWidget;
	HostingAccoutWidget *hostingWidget;
};

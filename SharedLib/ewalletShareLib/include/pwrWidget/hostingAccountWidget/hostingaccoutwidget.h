#pragma once

#include <QWidget>
#include <QListWidgetItem>
#include "stdafx.h"
#include "hostingitemwidget.h"
#include "hostingrecorditemwidget.h"
#include "oprequestsharelib.h"
#include "hostingchargewidget.h"
#include "hostingcoinwidget.h"

namespace Ui { class HostingAccoutWidget; };

class HostingAccoutWidget : public QWidget
{
	Q_OBJECT

public:
	HostingAccoutWidget(QWidget *parent = Q_NULLPTR);
	~HostingAccoutWidget();

	void setMainAddress(QString address) { this->mainAddress = address; }
	void setPrivateKey(QString priKey) { this->privateKey = priKey; }

	void getHostingAccount();

private slots:
	void slotHostingAccount(QList<AssetInfo>);
	void slotDownloadAccountIcon(bool success);

	void slotDBClickedAssetsList(QListWidgetItem *);
	void slotRecordsPage(QString name);
	void slotAccountsPage();

	void slotRecords(QList<RecordInfo> recordsList);

	void slotAllTab();
	void slotChargeTab();
	void slotCoinTab();
	void slotOtherTab();

	void slotCharge();
	void slotCoin();

private:
	Ui::HostingAccoutWidget *ui;

	QList<AssetInfo> assetsList;
	QList<RecordInfo> recordsList;

	QString mainAddress;
	QString privateKey;
	AssetInfo localAsset;
};

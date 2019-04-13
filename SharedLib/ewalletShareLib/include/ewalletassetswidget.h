#pragma once

#include <QWidget>
#include "common.h"
#include "opcommon.h"
#include "oprequestsharelib.h"
#include "opdatebasesharelib.h"
#include "ewalletItem/ewalletitemasset.h"
namespace Ui { class EWalletAssetsWidget; };

class EWalletAssetsWidget : public QWidget
{
	Q_OBJECT

public:
	EWalletAssetsWidget(QWidget *parent = Q_NULLPTR);
	~EWalletAssetsWidget(); 

	void getAssets(QString phoneNumber);

	private slots:
	void slotRefresh();
	void slotInitAssets(QList<AssetInfo>);

private:
	Ui::EWalletAssetsWidget *ui;

	QString account;
};

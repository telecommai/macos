#pragma once

#include <QWidget>
#include <QDir>
#include <QClipboard>
#include "httpnetworksharelib.h"
#include "opcommon.h"
#include "ewalletItem/ewalletitemfollow.h"
#include "ewalletItem/ewalletitemchecked.h"

namespace Ui { class BTCWidget; };

class BTCWidget : public QWidget
{
	Q_OBJECT

public:
	BTCWidget(QWidget *parent = Q_NULLPTR);
	~BTCWidget();

	void initShow(bool hasWallet);

	void setIndexWallet(ChildrenWallet);
	void setBalance(QString);

	QString getAddress();

public slots:
	void slotClearChecked();

protected:
	bool eventFilter(QObject *, QEvent *);

	private slots:
	void slotDownloadIcon(bool);

	void slotCopyAddress();

signals:
	void sigRecoveryWallet();

	void sigTurnInWidget();
	void sigTurnOutWidget();
	void sigProfileWidget();

	void sigWalletManager(QString address);

	void sigClearChecked();
private:
	Ui::BTCWidget *ui;
};

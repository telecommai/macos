#pragma once

#include <QWidget>
#include <QDir>
#include <QClipboard>
#include "httpnetworksharelib.h"
#include "opcommon.h"
#include "ewalletItem/ewalletitemfollow.h"
#include "ewalletItem/ewalletitemchecked.h"

namespace Ui { class EOSWidget; };

class EOSWidget : public QWidget
{
	Q_OBJECT

public:
	EOSWidget(QWidget *parent = Q_NULLPTR);
	~EOSWidget();

	void initShow(bool hasWallet);

	void setIndexWallet(ChildrenWallet);
	void setBalance(QString);

	QString getAddress();
	QString getEOSAccounts();

public slots:
	void slotClearChecked();
protected:
	bool eventFilter(QObject *obj, QEvent *event);

private slots:
	void slotDownloadIcon(bool success);

	void slotCopyAddress();

signals:
	void sigRecoveryWallet();

	void sigWalletManager(QString);

	void sigTurnInWidget();
	void sigTurnOutWidget();
	void sigProfileWidget();

	void sigClearChecked();

private:
	Ui::EOSWidget *ui;

	ChildrenWallet wallet;
};

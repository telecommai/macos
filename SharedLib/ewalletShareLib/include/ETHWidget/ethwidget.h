#pragma once

#include <QWidget>
#include <QDir>
#include <QClipboard>
#include <QListWidgetItem>
#include "httpnetworksharelib.h"
#include "opcommon.h"
#include "ewalletItem/ewalletitemfollow.h"
#include "ewalletItem/ewalletitemchecked.h"

namespace Ui { class ETHWidget; };

class ETHWidget : public QWidget
{
	Q_OBJECT

public:
	ETHWidget(QWidget *parent = Q_NULLPTR);
	~ETHWidget();

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

	void slotSetFollowChain(QList<TokenInfo>);
	void slotSetAllChain(QList<TokenInfo>);
	void slotDownloadTokenIcon(bool);

	void slotClickedAddBtn();

	void slotClickFollowBtn(QString tokenID, bool checked);

	void slotDBClickFollowItem(QListWidgetItem *);

signals:
	void sigRecoveryWallet();

	void sigTurnInWidget();
	void sigProfileWidget();
	void sigProfileWidget(QString address, QString tokeName, QString tokenID);
	void sigTurnOutWidget();

	void sigLoadAllToken();
	void sigLoadFollowToken();

	void sigFollowToken(QString chainID, QString tokenID,
		QString address, bool followed);

	void sigWalletManager(QString address);

	void sigClearChecked();

private:
	Ui::ETHWidget *ui;
};

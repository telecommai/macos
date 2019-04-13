#pragma once

#include <QWidget>
#include <QJsonDocument>
#include <QFile>
#include <QInputDialog>
#include "opcommon.h"
#include "qrencodesharelib.h"
#include "inputbox.h"
#include "messagebox.h"
#include "oprequestsharelib.h"
#include "../ETHWidget/ethtokenlistwidget.h"

namespace Ui { class TurnInWidget; };

class TurnInWidget : public QWidget
{
	Q_OBJECT

public:
	TurnInWidget(QWidget *parent = Q_NULLPTR);
	~TurnInWidget();

	void setTurnInData(ChildrenWallet);

	private slots:
	void slotChangeAmount();
	void slotSetAmount(QString);

	void slotTokenList(QList<TokenInfo>);
	void slotOpenTokenWidget();
	void slotSelectToken(QString name, QString address, QString tokenID);

private:
	void setImage();

private:
	Ui::TurnInWidget *ui;

	ChildrenWallet walletInfo;
	QString tokenID;
	QString contractAddress;

	QList<TokenInfo> tokenList;

	double amount;
};

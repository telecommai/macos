#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QDoubleValidator>
#include <QStyledItemDelegate>
#include "opcommon.h"
#include "messagebox.h"
#include "oprequestsharelib.h"
#include "stdafx.h"
#include "../transferWidget/passwordwidget.h"
#include "../transferWidget/transfermanager.h"
namespace Ui { class HostingChargeWidget; };

class HostingChargeWidget : public QWidget
{
	Q_OBJECT

public:
	HostingChargeWidget(QWidget *parent = Q_NULLPTR);
	~HostingChargeWidget();

	void setAsset(AssetInfo);
	void setMainAddress(QString address) { this->mainAddress = address; }
	void setPrivateKey(QString priKey) { this->privateKey = priKey; }

	private slots:
	void slotSetBalance(QString);
	void slotInsertWallet(QList<ChildrenWallet>);
	void slotChangeAddress(int);

	void slotEnter();
	void slotChargeHosting();

public slots:
	void show();

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

private:
	Ui::HostingChargeWidget *ui;

	QPoint mouse;

	QString mainAddress;
	QString privateKey;
	AssetInfo asset;

	QList<ChildrenWallet> walletsList;
};

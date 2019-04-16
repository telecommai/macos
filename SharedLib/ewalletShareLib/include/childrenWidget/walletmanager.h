#pragma once

#include <QWidget>
#include <QEvent>
#include <QFileDialog>
#include <QJsonDocument>
#include "opcommon.h"
#include "stdafx.h"
#include "messagebox.h"
#include "inputbox.h"
#include "../childrenWidget/walletprikeywidget.h"
#include "httpnetworksharelib.h"
#include "opdatamanager.h"

namespace Ui { class WalletManager; };

class WalletManager : public QWidget
{
	Q_OBJECT

public:
	WalletManager(QWidget *parent = Q_NULLPTR);
	~WalletManager();

	void setWallet(ChildrenWallet);

protected:
	bool eventFilter(QObject *, QEvent *);

private slots:
	void slotDownloadIcon(bool success);

	void slotUploadImage(bool success, QByteArray byte);

	void slotChangeName();

	void slotBackupPriKey(QString);

	void slotDeleteWallet();

signals:
	void sigSetWalletInfo(QString accountAddress, QString mainAccountAddress,
		QString accountName, QString accountIcon, QString blockChainName);

	void sigDeleteWallet(QString accountAddress, QString mainAccountAddress, QString blockChainName);

	void sigAccountChanged(QString);
private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

private:
	Ui::WalletManager *ui;

	QPoint mouse;

	ChildrenWallet walletInfo;
};

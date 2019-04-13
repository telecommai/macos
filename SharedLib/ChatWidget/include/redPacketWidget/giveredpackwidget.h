#pragma once

#include <QWidget>
#include <qmath.h>
#include <qpainter.h>
#include <qevent.h>
#include "opcommon.h"
#include "stdafx.h"
#include "inputbox.h"
#include "messagebox.h"
#include "oprequestsharelib.h"
#include "RedPackHistory.h"
#include "TransAccWidget.h"
namespace Ui { class GiveRedPackWidget; };

class GiveRedPackWidget : public QWidget
{
	Q_OBJECT

public:
	GiveRedPackWidget(QWidget *parent = Q_NULLPTR);
	~GiveRedPackWidget();

	public slots:
	void show();

private:
	void paintEvent(QPaintEvent * event);
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);

	void getHostingAccount();
    void setLinuxCenter();
private slots:
	void slotHostingAccount(QList<AssetInfo> assetList);

	void slotClickTurnInBtn();
	void slotClickRecordBtn();
	void slotChangeGiveNumber(QString);
	void slotGiveRedPacket();
	void slotConfirmPassword(QString password);
	void slotCreatePacket(QString);

	void slotCloseHistoryWidget();
	void slotCloseTransWidget();

signals:
	void sigHostingCharge(int, QString, QString, QString);
	void sigGivePacketData(QString packetData);
	void sigClose();

private:
	Ui::GiveRedPackWidget *ui;
	bool		mMoveing;
	QPoint	    mMovePosition;

	RedPackHistory *historyWidget;
	TransAccWidget *transWidget;

	QList<AssetInfo> assetsList;
};

#pragma once

#include <QWidget>
#include <qpainter.h>
#include <qmath.h>
#include <qevent.h>
#include "opcommon.h"
#include "stdafx.h"
#include "inputbox.h"
#include "messagebox.h"
#include "oprequestsharelib.h"
#include "RedPackHistory.h"
#include "TransAccWidget.h"
namespace Ui { class GroupPackWidget; };

class GroupPackWidget : public QWidget
{
	Q_OBJECT

private:
	void getHostingAccount();

	void paintEvent(QPaintEvent * event);

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
public:
	GroupPackWidget(QWidget *parent = Q_NULLPTR);
	~GroupPackWidget();

	void setGroup(QString groupID);

public slots:
	void show();

private:
	Ui::GroupPackWidget *ui;

	bool		mMoveing;
	QPoint	    mMovePosition;

	RedPackHistory *historyWidget;
	TransAccWidget *transWidget;
	QList<AssetInfo> assetsList;

	bool isRandom;

	int numOfGroup;

signals:
	void sigHostingCharge(int, QString, QString, QString);
	void sigGivePacketData(QString);
	void sigClose();

private slots:
    void slotClickTurnInBtn();

	void onRandomClicked();
	void onCommonClicked();
	void onGiveClicked();
	void slotConfirmPassword(QString);
	void slotCreatePacket(QString packetID);

	void onRecordClicked();
	void onTextChanged(QString);
	void onNumChanged(QString);

	void slotHostingAccount(QList<AssetInfo> assetList);

	void slotCloseHistoryWidget();
	void slotCloseTransWidget();
};

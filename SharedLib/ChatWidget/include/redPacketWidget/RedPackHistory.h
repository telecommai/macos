#pragma once

#include <QWidget>
#include <qpainter.h>
#include <qlabel.h>
#include <qboxlayout.h>
#include "common.h"
#include "stdafx.h"
#include "oprequestsharelib.h"
namespace Ui { class RedPackHistory; };

class RedPackHistory : public QWidget
{
	Q_OBJECT

public:
	RedPackHistory(QWidget *parent = Q_NULLPTR);
	~RedPackHistory();

	void addReceiveInfo(QString senderID, QString amount, QString unit, QString date, QString time);

	void addSendInfo(QString type, QString amount, QString unit, QString date, QString time);

	void setInfo(QString avatarPath, QString nickname);

    void setLinuxCenter();
private:
	Ui::RedPackHistory *ui;

	void setStyle();

	void paintEvent(QPaintEvent *event);
	QPixmap PixmapToRound(const QPixmap & img, int radius);
	void loadImg(QLabel* label, QString avatarPath);

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);

	bool		mMoveing;
	QPoint	    mMovePosition;
	int	mReceivePacks = 0;
	int mSendPacks = 0;
signals:
	void sigClose();

private slots:
	void onCloseClicked();
	void onReceiveClicked();
	void onSendClicked();

	void slotPacketRecordsIn(QList<RecordInfo>);
	void slotPacketRecordsOut(QList<RecordInfo>);
};

#pragma once

#include <QWidget>
#include <qpainter.h>
#include <qlabel.h>
#include <qlabel.h>
#include <qboxlayout.h>
#include "RedPackHistory.h"
namespace Ui { class RedPackDetail; };

class RedPackDetail : public QWidget
{
	Q_OBJECT

public:
	RedPackDetail(QWidget *parent = Q_NULLPTR);
	~RedPackDetail();

	void setMyInfo(QString avatarPath, QString nickname,QString myAmount);

	void setPackInfo(QString notice, QString totalAmount, QString unit,int numOfPacks,int committedPacks);

	void addPerson(QString avatarPath, QString nickname, QString date, QString time, QString amount, QString unit,bool isMostLucky=false);
private:
	Ui::RedPackDetail *ui;
	void setStyle();

	void paintEvent(QPaintEvent *event);
	void loadImg(QLabel* label, QString avatarPath);
	QPixmap PixmapToRound(const QPixmap & img, int radius);

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);

	RedPackHistory *historyWidget;

	bool		mMoveing;
	QPoint	    mMovePosition;

private slots:
	void onCloseClicked();
	void onCheckClicked();

	void slotCloseHistoryWidget();
signals:
	void sigClose();
};

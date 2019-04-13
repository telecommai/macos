#pragma once

#include <QWidget>
#include <qpainter.h>
#include <qmath.h>
#include <qevent.h>
#include <QCryptographicHash>
#include "stdafx.h"
#include "opdatamanager.h"
#include "messagebox.h"
#include "inputbox.h"
#include "oprequestsharelib.h"
namespace Ui { class TransAccWidget; };

class TransAccWidget : public QWidget
{
	Q_OBJECT

public:
	TransAccWidget(QWidget *parent = Q_NULLPTR);
	~TransAccWidget();

	void setInfo(QString unit, double balance, QString wallet,QString address);
private:
	Ui::TransAccWidget *ui;

	bool		mMoveing;
	QPoint	    mMovePosition;

signals:
	void sigClose();
	void sigHostingCharge(int, QString, QString, QString);

private:
	void paintEvent(QPaintEvent * event);

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
private slots:
	void slotSetValue(int);
	void slotClose();
	void slotConfirm();
	void slotConfirmPassword(QString);
};

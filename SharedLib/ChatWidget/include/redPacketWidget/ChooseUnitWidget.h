#pragma once

#include <QWidget>
#include <qpainter.h>
#include <qmath.h>
#include <qevent.h>
namespace Ui { class ChooseUnitWidget; };

class ChooseUnitWidget : public QWidget
{
	Q_OBJECT

public:
	ChooseUnitWidget(QWidget *parent = Q_NULLPTR);
	~ChooseUnitWidget();

	void addUnit(QString picPath, QString unit, QString useable, QString frozen);
private:
	Ui::ChooseUnitWidget *ui;

	bool		mMoveing;
	QPoint	    mMovePosition;
private:
	void paintEvent(QPaintEvent * event);

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
private slots:
	void onConfirmClicked();
};

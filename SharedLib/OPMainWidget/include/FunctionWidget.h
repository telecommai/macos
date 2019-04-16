#pragma once

#include <QWidget>
#include <qpainter.h>
#include <qmath.h>
#include <qevent.h>
namespace Ui { class FunctionWidget; };

class FunctionWidget : public QWidget
{
	Q_OBJECT

public:
	FunctionWidget(QWidget *parent = Q_NULLPTR);
	~FunctionWidget();

private:
	Ui::FunctionWidget *ui;

	bool		mMoveing;
	QPoint	    mMovePosition;

    void setLinuxCenter();
private:
	void paintEvent(QPaintEvent * event);

	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);

private slots:

	void slot_firstPage();
	void slot_secondPage();
	void slot_thirdPage();
	void slot_fourthPage();
	void slot_fifthPage();

	void slot_close();
};

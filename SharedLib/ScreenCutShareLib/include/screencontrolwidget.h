#ifndef SCREENCONTROLWIDGET_H
#define SCREENCONTROLWIDGET_H

#include <QWidget>
#include "ui_screencontrolwidget.h"
#include<QPainter>
#include<QImage>

namespace Ui {
	class ScreenControlWidget;
}

class OEScreenshot;
class ScreenControlWidget : public QWidget
{
	Q_OBJECT

public:
	 ScreenControlWidget(QWidget *parent = 0);
	~ScreenControlWidget();

	void connectSignalAndSlot();

	void setScreenQuote(OEScreenshot* screen);

	void initUI();
private:
    void paintEvent(QPaintEvent* event);
public slots:

	void slotCancelBtnClicked();

	void slotFinishBtnClicked();

	void slotEditBtnClicked();

	void slotRectangleBtnClicked();

	void slotDrawRoundBtnClicked();

	void slotArrowBtnClicked();

	void slotDrawLineBtnClicked();

	void slotMasicBtnClicked();

	void slotRevertBtnClicked();

	void slotSaveBtnClicked();
private:
	Ui::ScreenControlWidget *ui;

	QPainter pt;
	QImage bg_gray;
	OEScreenshot *screen;

	bool isDrawLine;
	bool isDrawArrow;
	bool isDrawRound;
	bool isDrawText;
	bool isDrawRectang;
	bool isDrawMasic;
};

#endif // SCREENCONTROLWIDGET_H

#pragma once

#include <QWidget>
#include <QEvent>
#include "opcommon.h"

namespace Ui { class RecordDetailWidget; };

class RecordDetailWidget : public QWidget
{
	Q_OBJECT

public:
	RecordDetailWidget(QWidget *parent = Q_NULLPTR);
	~RecordDetailWidget();

	void setRecord(RecordInfo);

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

private:
	Ui::RecordDetailWidget *ui;

	QPoint mouse;
};

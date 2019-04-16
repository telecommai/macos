#pragma once

#include <QWidget>
#include <QEvent>

namespace Ui { class DetailsWidget; };

class DetailsWidget : public QWidget
{
	Q_OBJECT

public:
	DetailsWidget(QWidget *parent = Q_NULLPTR);
	~DetailsWidget();

	void setData(QVariantMap);

private:
	void mousePressEvent(QMouseEvent *event);        //单击
	void mouseReleaseEvent(QMouseEvent *event);      //释放
	void mouseMoveEvent(QMouseEvent *event);         //移动

private:
	Ui::DetailsWidget *ui;

	QPoint mouse;
};

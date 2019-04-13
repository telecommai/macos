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
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

private:
	Ui::DetailsWidget *ui;

	QPoint mouse;
};

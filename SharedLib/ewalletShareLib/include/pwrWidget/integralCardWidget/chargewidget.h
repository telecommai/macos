#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QDoubleValidator>
#include <QStyledItemDelegate>
namespace Ui { class ChargeWidget; };

class ChargeWidget : public QWidget
{
	Q_OBJECT

public:
	ChargeWidget(QWidget *parent = Q_NULLPTR);
	~ChargeWidget();

private:
	void mousePressEvent(QMouseEvent *event);     
	void mouseReleaseEvent(QMouseEvent *event);   
	void mouseMoveEvent(QMouseEvent *event);      

private:
	Ui::ChargeWidget *ui;

	QPoint mouse;
};

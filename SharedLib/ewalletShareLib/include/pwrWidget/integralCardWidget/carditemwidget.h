#pragma once

#include <QWidget>
#include "chargewidget.h"
namespace Ui { class CardItemWidget; };

class CardItemWidget : public QWidget
{
	Q_OBJECT

public:
	CardItemWidget(QWidget *parent = Q_NULLPTR);
	~CardItemWidget();

	void setData(QString backPath, QString iconPath);
	void setAddress(QString address);
	void setBalance(QString strBalance);

	private slots:
	void slotClickChargeBtn();

	void slotLoadBackImg();
	void slotLoadIconImg();

private:
	Ui::CardItemWidget *ui;
};

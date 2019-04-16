#pragma once

#include <QWidget>
#include "carditemwidget.h"
#include "opcommon.h"
namespace Ui { class IntegralCardWidget; };

class IntegralCardWidget : public QWidget
{
	Q_OBJECT

public:
	IntegralCardWidget(QWidget *parent = Q_NULLPTR);
	~IntegralCardWidget();

	void setPhoneNumber(QString);
	void setAddress(QString);

	void getCard();

	void setPwrBalance(QString);
	void setWhiteBalance(QString);
	void setBlackBalance(QString);

private slots:
	void slotGetCard(QList<CardInfo>);

private:
	Ui::IntegralCardWidget *ui;

	QString address;
	QString phoneNumber;

	QList<CardItemWidget *>cardItems;
};

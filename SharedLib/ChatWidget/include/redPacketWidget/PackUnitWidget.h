#pragma once

#include <QWidget>
namespace Ui { class PackUnitWidget; };

class PackUnitWidget : public QWidget
{
	Q_OBJECT

public:
	PackUnitWidget(QWidget *parent = Q_NULLPTR);
	~PackUnitWidget();

	void setInfo(QString picPath, QString unit, QString useable,QString frozen);

	QString m_unit;
private:
	Ui::PackUnitWidget *ui;
};

#pragma once

#include <QWidget>
namespace Ui { class DeviceItemWidget; };

class DeviceItemWidget : public QWidget
{
	Q_OBJECT

public:
	DeviceItemWidget(QWidget *parent = Q_NULLPTR);
	~DeviceItemWidget();

	void setData(QString iconPath, QString name, QString time, bool isSelf = false);

	QString getName();

signals:
	void sigDownLine();

private:
	Ui::DeviceItemWidget *ui;
};

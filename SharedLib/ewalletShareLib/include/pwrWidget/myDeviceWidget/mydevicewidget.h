#pragma once

#include <QWidget>
#include <QListWidgetItem>
#include <QJsonDocument>
#include <qdatetime.h>
#include "deviceitemwidget.h"
#include "httpnetworksharelib.h"
#include "stdafx.h"
#include "common.h"
#include "getdeviceinfo.h"
#include "../transferWidget/passwordwidget.h"

namespace Ui { class MyDeviceWidget; };

class MyDeviceWidget : public QWidget
{
	Q_OBJECT

public:
	MyDeviceWidget(QWidget *parent = Q_NULLPTR);
	~MyDeviceWidget();

	void getDeviceList();

private slots:
	void slotResult(bool, QString);

	void slotEnterPassWord();
	void slotDownLine();

private:
	void onInsertDeviceItem();

private:
	Ui::MyDeviceWidget *ui;

	QList<DeviceInfo> deviceList;
};

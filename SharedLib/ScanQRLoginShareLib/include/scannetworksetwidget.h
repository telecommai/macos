#ifndef SCANNETWORKSETWIDGET_H
#define SCANNETWORKSETWIDGET_H

#include <QWidget>
#include <QNetworkProxy>
#include "common.h"

namespace Ui {
	class ScanNetWorkSetWidget;
}

class ScanNetWorkSetWidget : public QWidget
{
	Q_OBJECT

public:
	ScanNetWorkSetWidget(QWidget *parent = 0);
	~ScanNetWorkSetWidget();

	void OnInitStyleSheet();

	void setProxy(NetWorkProxyInfo);

	void EnableEdit(bool bStatus);


	public slots:
	void slotPressRadioButtonON(bool bCheck);
	void slotPressRadioButtonOFF(bool bCheck);
	void slotConfirm();

signals:
	void sigProxy(NetWorkProxyInfo);

private:
	Ui::ScanNetWorkSetWidget *ui;
};

#endif // SCANNETWORKSETWIDGET_H

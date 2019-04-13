#ifndef SCANQRWIDGET_H
#define SCANQRWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include "scanshowqrwidget.h"
#include "scanloginwidget.h"
#include "scannetworksetwidget.h"
#include "threadpoll.h"
#include "common.h"

namespace Ui {
	class ScanQRWidget;
}

class ScanQRWidget : public QWidget
{
	Q_OBJECT

public:
	ScanQRWidget(QWidget *parent = 0);
	~ScanQRWidget();

	void showQrWidget();

	void showErro(QString strMsg);

	void setProxy(NetWorkProxyInfo);

    void setLinuxCenter();
private:
	void OnInitStyleSheet();
	void OnInit();

private slots:
	void slotCloseTip();

protected:
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	virtual void closeEvent(QCloseEvent *event);
public slots:

	void slotClickSetUser();

	void slotClickSet();

	void slotClickClose();

	void slotLoginFailed();

	void slotCreateQR(QString);
signals:
	void sigCloseLoginWidget();

	void sigQRLoginSuccess(QVariantMap);
	void sigProxy(NetWorkProxyInfo);
private:
	Ui::ScanQRWidget *ui;

	bool        mMoveing;
	QPoint      mMovePosition;
	ScanShowQRWidget *pShowQRWidget;
	ScanLoginWidget  *pScanLoginWidget;
	ScanNetWorkSetWidget *pScanNetWorkSetWidget;

	IMessageBox *messageBox;
};

#endif // SCANQRWIDGET_H

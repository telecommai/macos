#ifndef SCANQRLOGINSHARELIB_H
#define SCANQRLOGINSHARELIB_H

#include <QObject>
#include "scanqrwidget.h"
#include "logindatabaseoperasharelib.h"

class ScanQRLoginShareLib : public QObject
{
	Q_OBJECT
public:
	ScanQRLoginShareLib(QObject *parent = NULL);
	~ScanQRLoginShareLib();

	void showErro(QString strMsg);
	void HideScanWidget();
private:
	void ConnectLoginDB();

	void LoadDatabase();

	void OnInitWidget();

signals:
	void sigCloseLoginWidget();

	void sigQRLoginSuccess(QVariantMap);

	private slots:
	void slotInsertProxy(NetWorkProxyInfo);

private:
	ScanQRWidget *scanWidget;
	LoginDatabaseOperaShareLib *pDataBase;
};

#endif // SCANQRLOGINSHARELIB_H

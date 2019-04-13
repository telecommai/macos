#ifndef SOCKETNETWORKSHARELIB_H
#define SOCKETNETWORKSHARELIB_H

#include <QObject>
#include <QByteArray>
#include <QtNetwork/QTcpSocket>


class SocketNetWorkShareLib : public QObject
{
	Q_OBJECT
public:
	explicit SocketNetWorkShareLib(QObject *parent = 0);
	~SocketNetWorkShareLib();

	bool ConnectServer(QString strIP, int nPort);

	void DisConnectSocket();    

	void SendMsg(QByteArray byteArray);  

private slots:

	void slotReceiveServerData();

	void slotSocketErro(QAbstractSocket::SocketError);

signals:

	void sigSendReadData(QByteArray);

	void sigDisConnectServer();
private:
	QTcpSocket *mSocketClient;
};

#endif // SOCKETNETWORKSHARELIB_H

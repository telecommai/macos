#ifndef IMSOCKETNETWORKSHARELIB_H
#define IMSOCKETNETWORKSHARELIB_H

#include <QObject>
#include "socketnetworksharelib.h"
#include "imsocketdatabasesharelib.h"
#include <QTimer>
#include <QDataStream>

typedef unsigned char BYTE;
#define TIMER_HEARTBEAT 10000

class IMSocketNetWorkShareLib : public QObject
{
	Q_OBJECT
public:
	IMSocketNetWorkShareLib(QObject *parent = 0);
	~IMSocketNetWorkShareLib();

	bool OnConnectSocket(QString strServerIP, QString strServerPort,  QString strToken,QString strLastMessage);

	MessageInfo SendMessage(int nFromUserID, int nToUserID, int nDeliverType, short MessageChildType, int nMessageState, QString strMsg);

	void OnInsertMessage(MessageInfo messageInfo, int nUserID);

	void SetIMUserID(int nIMID){ nIMUserID = nIMID; }

	void SetMessageState(QByteArray msgID, int nState);

	void ChangeMessageInfo(QByteArray msgID,QString strMsg);

	QList<QByteArray> SetPerMessageRead(int nUserID);

	QList<QByteArray> SetGroupMessageRead(int nGroupID);

	void setReConnectState(bool bState);
private:
	
	void sendTocken(QString strMessageLastTime, QString strToken);

	void StartHeartBeat();

	void StopHeartBeat();

	void StartMonitorServerHeartTimer();

	void StopMonitorServerHeartTimer();

	void OnDealServerHeart();

	void onDealMessageInfo(QByteArray byteArray);

	void onDealReceiptMessage(QByteArray buff);

	void onDealRevSystemMessage(MessageInfo msgInfo);

	void onDealRevOtherMessage(MessageInfo msgInfo);

	bool OnJudgeMessageRepet(QByteArray strMsgID);

	QByteArray CreateMsgID(int nFromID, int nToId, unsigned long long msgTime, int nMsgOrder, BYTE msgPost);

	void SendReceiptMessage(QByteArray ReceiptMessage);

	void OnStart();

	void OnStop();

	void SendQByteArrayMsg(MessageInfo messageInfo);

	void DBUpdateMessageStateInfo(QByteArray msgID, int nState);

	void SetMessageInfo(QByteArray msgID,MessageInfo messageInfo);
private slots:
	
	void slotRevServerMsg(QByteArray);

	void slotDisConnectServer();

	void slotSendToken();

	void slotMonitorServerHeart();

	void slotSendHeartData();

	void slotJudgetSendMsgState();
signals:

	void sigSendUpdateMessage(MessageInfo, int);   


	void sigRecSystemMessage(MessageInfo msgInfo);

	void sigRevServerMessage(MessageInfo msg);

	void sigSendMessage(MessageInfo);              

	void sigDisConnectServerServer();

	void sigDBSetMessageInfo(MessageInfo messageInfo);

	void sigDBSetMessageState(QByteArray msgID, int nState);
private:
	SocketNetWorkShareLib *mSocketClient;      
	QTimer *mHeartTime;
	QTimer	*mMonitorServerHeart;  
	qlonglong   mServerHeartTime;      
	QString mServerToken;  
	QByteArray  mSocketMessage;        
	QMap<QString, QList<MessageInfo> > mMapMessageInfo;   
	QTimer      *timer_send;
	int		nIMUserID;     
	bool mbReConnect;
};

#endif // IMSOCKETNETWORKSHARELIB_H

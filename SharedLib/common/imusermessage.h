#ifndef IMUSERMESSAGE_H
#define IMUSERMESSAGE_H

#include <QObject>

enum MessageState
{
	MESSAGE_STATE_WAITSEND = 0, //待发送
	MESSAGE_STATE_PRESEND,      //预发送
	MESSAGE_STATE_SENDING,      //发送中
	MESSAGE_STATE_DELIVER,      //已投递
	MESSAGE_STATE_SEND,         //已发送
	MESSAGE_STATE_RECEIVE,      //已送达
	MESSAGE_STATE_READ,         //已查看
	MESSAGE_STATE_UNREAD,       //未查看
	//	MESSAGE_STATE_DELETE,   //删除
	MESSAGE_STATE_FAILURE,     //发送失败
	MESSAGE_STATE_UNLOADED		//未下载
};

enum MessageType
{
	Message_TEXT = 0,        //文本消息
	Message_PIC = 1,         //图片消息
	Message_AUDIO = 2,         //音频消息
	Message_VEDIO = 3,         //视频消息
	Message_FILE = 5,        //文件消息
	Message_AD = 7,           //广告信息
	Message_TRANSFER = 8,     //转账消息
	Message_REDBAG = 9,        //红包消息
	Message_VOICE = 10,        //语音消息
	Message_AT = 11,           //@
	Message_SECRETLETTER = 20,//密信。
	Message_SECRETIMAGE = 21, //密图。
	Message_SECRETFILE = 22,  //密件。
	Message_NOTICE = 23,      //通告消息
	Message_URL = 24,         //分享链接
	Message_LOCATION = 55,    //定位消息
	Message_COMMON = 62,     //通用消息
	Message_GW = 80,         //引力波消息
	Message_ROBOT=85,        //机器人消息
	Message_NOTIFY = 97,          //通知消息
	Message_SYSTEM = 100,    //系统消息
	Message_RECEIPT = 101,    //已送达消息
	Message_VIEW = 102,       //已查看消息
	Message_INPUTTING = 103,  //正在输入
	MessageRecordAll = 1000,  //全部消息
	Message_Ticket = 201      //发票消息
};

/*消息体*/
typedef struct Message :QObjectUserData
{
	short version;         //版本号
	int nFromUserID;       //发送者ID
	int nToUserID;         //接收者ID
	qlonglong ClientTime;       //客户端时间
	qlonglong ServerTime;       //服务器时间
	int nMsgOrder;         //int 随机数
	unsigned char MsgDeliverType;   //消息投递类型
	short MessageChildType; //消息子类型

	QString strMsg;       //消息内容,原始消息格式,与服务器一致
	QString strMessageListDesc;//MessageList中显示的描述信息格式，可能带有<font>字体格式内容
	QString strMessageListJson;//MessageList中实际存储的Json格式，比如带有@成员的JSON数组


	unsigned char isHavePMsgId;    //是否有PMsgID
	QByteArray PMSGID;
	int nUserID;
	unsigned char PerByte[10];
	QByteArray msgID;
	int MessageState;     //消息状态
	unsigned long long SendTime;  //发送时间
	unsigned char offLineFlag;    //离线消息标志
	unsigned char interalTypeMain;    //积分主类型
	unsigned char interalTypeVice;    //积分副类型
	short integral;                 //积分
	bool bIsSend;

	QString strRowId;//存放在SQLITE表中的rowid，目前用来在获取更多消息时用
}MessageInfo;
Q_DECLARE_METATYPE(MessageInfo);

#endif // IMUSERMESSAGE_H

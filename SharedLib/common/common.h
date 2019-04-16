#ifndef COMMON_H
#define COMMON_H

#include <QObject>
#include <QString>

struct ServerConfig
{
	bool bEnable;   //是否启用
	int  port;      //端口号
};

struct AppVersionConfig
{
	QString versionID;      //版本号
	QString appID;          //AppID
	QString appName;        //应用名称
	QString updateVersion;  //升级程序版本号
	QString appString;
};

/*config配置文件*/
struct AppConfig
{
	ServerConfig webSocketConfig; //websocket配置
	ServerConfig httpServerConfig; //http服务配置
	QString      MessageServerAddress; //消息服务地址
	QString      strYWYHRequestURL;    //业务用户地址
	QString      OrganizationURL;      //组织机构URL
	QString      PanServerUploadURL;   //上传地址
	QString      PanServerDownloadURL;    //云盘下载地址
	QString      RobotConfigPath;    //机器人配置文件
	AppVersionConfig appVersion;     //app版本
	QString     shareMemory;
};

typedef struct IM_User :QObjectUserData
{
	int nUserID;         //联信ID
	QString strAccountName;   //登陆ID
	QString strLoginPWD; //登陆密码
	QString strUserPWD;  //后台返回用户密码
	QString strUserAvatarHttp; //用户头像网络地址
	QString strUserAvatarLocal; //用户头像本地地址
	QString strUserDefaultAvatar; //用户默认头像
	QString strUserNickName; //用户昵称
	QString strUserName;     //用户名称
	QString strNote;        //用户
	QString strSex;        //用户性别
	QString strEmil;      //邮箱
	QString strPhone;     //电话
	QString strSign;      //签名
	bool bIsAutoLogin;    //是否自动登陆
	bool bIsSavaPWD;     //是否记住密码
	bool bIsOnline;         // 是否在线(已经登录)
	bool bIsLastLoginUser;  // 是否是上一次登录的用户
	int disableStrangers;    //接收陌生人消息，默认是0，1是不接受。
}UserInfo;
Q_DECLARE_METATYPE(UserInfo)

typedef struct NetWorkProxy
{
	int proxyModel;         //连接方式  0不使用代理 1 使用http代理 2使用socket5代理
	QString strUserName;    //用户名
	QString strUserPwd;     //密码
	QString strAddress;     //地址
	QString strPort;       //端口号
	int nIndex;     //上次登录是否使用
}NetWorkProxyInfo;

struct DeviceInfo
{
	QString clientId;
	QString deviceId;

	QString deviceClass;
	QString deviceType;
	QString deviceModel;
	qlonglong sessionTime;
};

#endif // COMMON_H
#ifndef COMMON_H
#define COMMON_H

#include <QObject>
#include <QString>

struct ServerConfig
{
	bool bEnable;   
	int  port;      
};

struct AppVersionConfig
{
	QString versionID;     
	QString appID;         
	QString appName;       
	QString updateVersion; 
	QString appString;
};

struct AppConfig
{
	ServerConfig webSocketConfig; 
	ServerConfig httpServerConfig; 
	QString      MessageServerAddress; 
	QString      strYWYHRequestURL;   
	QString      OrganizationURL;     
	QString      PanServerUploadURL;  
	QString      PanServerDownloadURL;
	QString      RobotConfigPath;    
	AppVersionConfig appVersion;     
	QString     shareMemory;
};

typedef struct IM_User :QObjectUserData
{
	int nUserID;         
	QString strAccountName;   
	QString strLoginPWD; 
	QString strUserPWD;  
	QString strUserAvatarHttp; 
	QString strUserAvatarLocal;
	QString strUserDefaultAvatar; 
	QString strUserNickName;
	QString strUserName;    
	QString strNote;        
	QString strSex;    
	QString strEmil;   
	QString strPhone;  
	QString strSign;   
	bool bIsAutoLogin; 
	bool bIsSavaPWD;   
	bool bIsOnline;         
	bool bIsLastLoginUser;  
	int disableStrangers;   
}UserInfo;
Q_DECLARE_METATYPE(UserInfo)

typedef struct NetWorkProxy
{
	int proxyModel;     
	QString strUserName;
	QString strUserPwd; 
	QString strAddress; 
	QString strPort;    
	int nIndex;   
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
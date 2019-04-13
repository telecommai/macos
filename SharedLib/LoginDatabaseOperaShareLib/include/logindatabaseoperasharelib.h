#ifndef LOGINDATABASEOPERASHARELIB_H
#define LOGINDATABASEOPERASHARELIB_H

#include <QtCore/QString>
#include "sqllitesharelib.h"
#include "common.h"

class LoginDatabaseOperaShareLib
{
public:
	LoginDatabaseOperaShareLib();
	~LoginDatabaseOperaShareLib();

	bool ConnectLoginDB(QString strDBPath, QString strDBName);

	void CloseDB();

	void InsertUserInfoDB(UserInfo userInfo);

	QList<UserInfo> GetDBAllUserInfoDB();

	void DeleteUserInfoAtDB(QString strUserID);

	void InsertProxyInfoDB(NetWorkProxyInfo networkModel);

	void DeleteProxyInfoDB();

	NetWorkProxyInfo GetNetWorkProxyInfoDB();
private:
	SqlLiteShareLib *mSqlUtil;
};

#endif // LOGINDATABASEOPERASHARELIB_H

#ifndef SQLLITESHARELIB_H
#define SQLLITESHARELIB_H


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QList>
#include <QVariant>
#include <QSqlQueryModel>
#include "zsqlitecipherdriver/zsqlitecipherdriver.h"


class SqlLiteShareLib
{
public:
	SqlLiteShareLib();
	~SqlLiteShareLib();

public:
	bool OnConnectDB(const QString& strConn, const QString& dbName, const QString& strPwd = "");

	bool ExecuSql(const QString& strSql);

	QSqlQuery ExecuQuery(QString& strSql);

	bool CreateDataFile(const QString &strFileName);

	bool isExistTable(const QString &strTableName);

	void CloseDataBase();

	bool IsOpen();

	bool isDbDecrypted();

	bool changePassword(const QString &newPassword);
private:
	QSqlDatabase m_db;
};

#endif // SQLLITESHARELIB_H

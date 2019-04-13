#ifndef OPDATEBASESHARELIB_H
#define OPDATEBASESHARELIB_H

#include <QList>
#include <QString>
#include "sqllitesharelib.h"
#include "opcommon.h"

class OPDatebaseShareLib
{
public:
	OPDatebaseShareLib();
	~OPDatebaseShareLib();

	bool ConnectDB(QString strDBPath, QString strDBName);

	void CloseDB();

	QList<WalletInfo> DBGetWalletInfo();
	
	void DBInsertWalletInfo(WalletInfo);

	AddressInfo DBGetAddressInfo(QString userID);

	void DBInsertAddressInfo(AddressInfo);

	QList<AssetInfo> DBGetAssetInfo();

	void DBInsertAssetInfo(QList<AssetInfo>);

private:
	SqlLiteShareLib *mSqlUtil;

};

#endif // OPDATEBASESHARELIB_H

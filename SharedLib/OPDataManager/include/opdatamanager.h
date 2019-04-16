#ifndef OPDATAMANAGER_H
#define OPDATAMANAGER_H

#include <QObject>
#include <QFile>
#include "qaesutil.h"
#include "TAesClass.h"
#include "RSAClass.h"
#include "opcommon.h"

class OPDataManager
{
public:
	OPDataManager();
	~OPDataManager();

	void setWalletInfo(WalletInfo wallet) { mWallet = wallet; }

	WalletInfo getWalletInfo(){ return mWallet; }

	void setAccessToken(QString accessToken){ mAccesstoken = accessToken; }

	QString getAccessToken(){ return mAccesstoken; }

	void setRefreshToken(QString refreshToken){ mRefreshtoken = refreshToken; }

	QString getRefreshToken(){ return mRefreshtoken; }

	void encryption(QString text, QString key, QString path = "key");

	QString Decryption(QString key, QString path = "key");

	QByteArray encryptAES(QByteArray text, QString password, bool base64 = true);
	QByteArray decryptAES(QByteArray letter, QString password, bool base64 = true);

	QString encryptRSA(QString text, QString password);
	QString decryptRSA(QString letter, QString password);
private:
	WalletInfo mWallet;
	QString mAccesstoken;
	QString mRefreshtoken;
};

#endif // OPDATAMANAGER_H

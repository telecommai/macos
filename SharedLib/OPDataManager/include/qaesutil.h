#ifndef QAESUTIL_H
#define QAESUTIL_H

#include <QObject>
#include <QtWidgets/QApplication>
#include <iostream>
#include <botan/botan.h>
#include <botan/pbkdf.h>
#include <string>  
using namespace std;
using namespace Botan;

#pragma comment(lib,"botan")

class QAesUtil : public QObject
{
	Q_OBJECT

public:
	QAesUtil(QObject *parent = 0);
	~QAesUtil();

	QByteArray EncryptionData(QByteArray strData, QString passWord, bool base64 = true);

	QByteArray DecryptData(QByteArray strData, QString passWord, bool base64 = true);

private:

	QByteArray cryptoAES256(QByteArray input, SymmetricKey passphrase, Cipher_Dir opt);

	OctetString AESKeyForPassword(QString passWord);
};

#endif // QAESUTIL_H

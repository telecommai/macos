#ifndef EOSHELP_H
#define EOSHELP_H

#include <QObject>
#include "chain/signedtransaction.h"
#include "chain/packedtransaction.h"
#include "chain/chainmanager.h"

class EOSHelp : public QObject
{
	Q_OBJECT

public:
	EOSHelp(QObject *parent =0);
	~EOSHelp();

	QString EosCreateWallet();

	QString EosGetPublicKey(QString priKey);

	QString EosSignTransation(QString address, QString priKey, QString strDataParame,QByteArray InfoData, int blockNum, int blockPrefix);

	void signTransaction(SignedTransaction &txn, const std::vector<std::string> &pubKeys, const TypeChainId &cid);
private:
	
};

#endif // EOSHELP_H

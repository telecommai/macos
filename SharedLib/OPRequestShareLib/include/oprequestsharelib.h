#ifndef OPREQUESTSHARELIB_H
#define OPREQUESTSHARELIB_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDomDocument>
#include <QDir>
#include <QFile>
#include "opcommon.h"
#include "httpnetworksharelib.h"
#include "opdatamanager.h"

class OPRequestShareLib : public QObject
{
	Q_OBJECT
public:
	OPRequestShareLib();
	~OPRequestShareLib();

	QString getUpdateUrl();
	QString getInviteUrl();

	void getOnlineMessage();

	void getAssets(QString phoneNumber);
	void getHostingAccount(QString userID);
	void getHostingRecords(QString userID, double trusteeshipCoinId);
	void HostingAccountCoin(QString userID, QString coinID, QString value, QString address);
	void HostingCharge(QString userID, QString trusteeshipId, QString signedTransactionData,
		QString value, QString txFrom, QString txTo);

	void getIntegral(QString token);
	void getBalance(QString address);

	void getBaseBuddyInfo(QString token);

	void getNonce(QString address);
	void sendRawTransaction(QString fromID, QString toID,
		QString fromAddress, QString toAddress,
		QString value, QString transactionData);
	void sendChainTransaction(QString fromID, QString toID,
		QString fromAddress, QString toAddress,
		QString value, QString transactionData);

	void getBuddyAddressInfo(QString buddyID);

	void getCommKey(QString userID, QString token);

	void getChildrenWallet(QString);

	void addChildrenWallet(QString address, QString pubKey, QString priKey,
		QString mainAddress, QString name, QString icon, QString blockChain,
		int type, QString seedPhrase = "");

	void getChildrenBalacne(QString chainID, QString address);

	void getFollowToken(QString chainID, QString userAdress);
	void getAllToken(QString chainID, QString userAdress);
	void setFollowToken(QString chainID, QString tokenID, QString userAddress, bool followed);

	void setWalletInfo(QString accountAddress, QString mainAccountAddress,
		QString accountName, QString accountIcon, QString blockChainName);

	void deleteChildrenWallet(QString accountAddress, QString mainAccountAddress, QString blockChainName);

	void getRecords(QString walletAddress, QString chainId, int page, int pagesize, int type, QString tokenID = "");

	void getBtcBalance(QString address);
	void getBtcUtxo(QString address);
	void publicBtcTrans(QString rawhex, QString txhash, QString fromID, QString toID = "");
	void getBtcTxs(QString address);

	void getRecoveryEosWallet(QString pub1, QString pub2);
	void addEosWallet(QString address, QString pubKey, QString priKey,
		QString mainAddress, QString name, QString icon, QString blockChain,
		int type, QString activePubKey, QString activePriKey, QString accounts);
	void getEOSBalance(QString address);
	void getEOSRecords(QString account, int page, int pageSize, int type);
	void getDataParam(QString from, QString to, QString value, QString chainID);
	void getEOSInfo();
	void getBlockNum(QString headBlockNum);
	void eosPushTransactionBody(QString json);

	void getRedBag(QString userId, QString imUserId, QString trusteeshipCoinId, QString packetId);
	void readRedBagStatus(QString userId, QString packetId);
	void getRedBagRecordsIn(QString userID);
	void getRedBagRecordsOut(QString userID);
	void createRedPacket(QString userId, int trusteeshipCoinId, QString coinName, int type, double totalMoney,
		int totalSize, QString remarks, QString getPacketUser, double singleMoney);

	void getCardList(QString phoneNumber, QString address);
signals:
	void sigAssetsInfo(QList<AssetInfo>);

	void sigIntegral(QString);
	void sigBalance(QString);

	void sigBaseBuddyInfo(QString);

	void sigNonce(QString);
	void sigTransfer(bool, QVariant);

	void sigBuddyAddressInfo(AddressInfo);

	void sigCommKey(QString publicKey, QString privateKey);

	void sigChildrenWallet(QList<ChildrenWallet>);

	void sigAddChildrenWallet(bool);

	void sigChildrenBalance(QString);

	void sigFollowToken(QList<TokenInfo>);
	void sigAllToken(QList<TokenInfo>);

	void sigSetFollowToken(QString token, bool success);

	void sigDeleteChildrenWallet(bool);

	void sigRecords(QList<RecordInfo>);

	void sigBtcBalance(QString);
	void sigBtcUtxo(QString);
	void sigBtcTransResult(bool);

	void sigRecoveryEos(QString);
	void sigEOSBalance(QString);
	void sigEOSDataParam(QString);
	void sigEOSInfo(QString);
	void sigBlockNum(int block_num, int ref_block_prefix);
	void sigTransFinished(bool);

	void sigGetPacketResult(QString);
	void sigPacketStatus(bool);
	void sigCreatePacketID(QString);

	void sigGetCard(QList<CardInfo>);

private slots:
    void slotGetAssets(bool, QString);
	void slotHostingAccount(bool, QString);
	void slotHostingRecords(bool, QString);

	void slotHostingCoinResult(bool, QString);

	void slotIntegralResult(bool, QString);
	void slotBalanceResult(bool, QString);
	void slotRefreshAccessToken(bool, QString);

	void slotBaseBuddyInfo(bool, QString);

	void slotGetNonce(bool, QString);
	void slotTransfer(bool, QString);

	void slotBuddyAddressResult(bool, QString);

	void slotCommKey(bool, QString);

	void slotChildrenWallet(bool, QString);

	void slotAddChildrenWallet(bool, QString);

	void slotChildrenBalance(bool, QString);

	void slotFollowToken(bool, QString);
	void slotAllToken(bool, QString);
	void slotSetFollowResult(bool, QString);
	
	void slotSetWalletInfo(bool, QString);

	void slotDeleteChildrenWallet(bool, QString);

	void slotRecords(bool, QString);

	void slotBtcBalance(bool, QString);
	void slotBtcUtxo(bool, QString);
	void slotPublicBtcTrans(bool, QString);
	void slotBtcTxs(bool, QString);

	void slotRecoveryEOSWallet(bool, QString);
	void slotEOSBalance(bool, QString);
	void slotEOSRecords(bool, QString);
	void slotEOSDataParam(bool, QString);
	void slotEOSInfo(bool, QString);
	void slotEOSBlockNum(bool, QString);
	void slotPushTransactionBody(bool, QString);

	void slotGetPacketResult(bool, QString);
	void slotPacketStatus(bool, QString);
	void slotPacketRecordsIn(bool, QString);
	void slotPacketRecordsOut(bool, QString);
	void slotCreateRedPacket(bool, QString);

	void slotGetCardResult(bool, QString);

private:
	void initConfig();

private:
	QString tcserver;
	QString inviteUrl;
	QString openServer;
};

#endif // OPREQUESTSHARELIB_H

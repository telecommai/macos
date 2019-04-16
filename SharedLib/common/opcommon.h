#ifndef OPCOMMON_H
#define OPCOMMON_H

#include "QtCore/QString"
#include <QObject>

#define ChainID_BTC "1"
#define ChainID_ETH "2"
#define ChainID_EOS "3"
#define ChainID_PWR "4"
#define ChainID_EOSTEST "5"

struct WalletInfo
{
	QString address;
	QString privkey;
	QString pubkey;
	QString fromInviteCode;  //谁邀请的邀请码
	QString inviteCode;      //邀请码
	QString inviteCodeUseCount; //邀请码用户账户
	QString userIdMd5;     //用户ID MD5
	QString planet;            //星球
};

struct AddressInfo
{
    QString userID;
    QString ethAddress;
    QString comPublicKey;
    QString ethPublicKey;
	QString planet;
};

struct AssetInfo
{
	QString coinName;
	QString coinFullName;
	QString coinIcon;
	QString chain;
	QString blockchainId;
	QString sysAddress;
	QString userId;

	double availableCoin;
	double freezingCoin;

	double userCoinMarketNum;
	double coinMarketPrice;

	double coinDecimals;
	double trusteeshipId;
};

struct ChildrenWallet
{
	QString accountAddress;
	QString accountIcon;
	QString accountName;
	QString accountPrivateKey;
	QString accountPublicKey;
	int accountType;
	QString balance;
	QString blockChainName;
	QString id;
	QString mainAccountAddress;

	int eosIsActive;
	QString eosAccountNames;
	QString eosActivePrivateKey;
	QString eosActivePublicKey;
};

struct TokenInfo
{
	QString balance;
	QString blockChainID;
	QString tokenAddress;
	int tokenDecimals;
	QString tokenFullName;
	QString tokenID;
	QString tokenIcon;
	QString tokenName;
	int ifOwner;
};

struct RecordInfo
{
	QString age;
	int block;
	QString from;
	QString status;
	QString to;
	QString txFee;
	QString txHash;
	int type;
	QString value;
	QString unit;
	QString sendId;
	QString receiveId;
};

struct CardInfo
{
	QString bgImg;
	QString cardImg;
	QString contractAddress;
	QString coinNumber;
};

#endif // OPCOMMON_H
#ifndef IMTRANSTYPE_H
#define IMTRANSTYPE_H

enum BUDDYTYPE {BuddyInsert=100, BuddyUpdate, BuddyDelete};

enum GROUPTYPE { GroupInsert = 200, GroupUpdate, GroupDelete };

enum CHATTYPE {OpenPer=300, OpenGroup, PerMessage, GroupMessage, QuitGroup, GroupAddUser, GroupNoSpeak};

enum CONTACTS { NewApply=400 };

enum WALLETTYPE { OpenWallet = 500};
#endif
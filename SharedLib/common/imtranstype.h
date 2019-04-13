#ifndef IMTRANSTYPE_H
#define IMTRANSTYPE_H

enum BUDDYTYPE {BuddyInsert=100, BuddyUpdate, BuddyDelete};
//groupList
enum GROUPTYPE { GroupInsert = 200, GroupUpdate, GroupDelete };
//chatWidget
enum CHATTYPE {OpenPer=300, OpenGroup, PerMessage, GroupMessage, QuitGroup, GroupAddUser, GroupNoSpeak};
//ContactsWidget
enum CONTACTS { NewApply=400 };
//walletWidget
enum WALLETTYPE { OpenWallet = 500};
#endif
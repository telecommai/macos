#ifndef IMTRANSTYPE_H
#define IMTRANSTYPE_H
//联信项目中不同的类传输数据时，采用统一的QVariant类型。
//根据type进行类型还原。映射定义如下：

//contactsList
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
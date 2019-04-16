#ifndef IMGROUPCHATVIEWMODEL_H
#define IMGROUPCHATVIEWMODEL_H

#include <QObject>
#include "GroupUserWidget/GroupUserList.h"

class IMGroupChatView;

class IMGroupChatViewModel : public QObject
{
    Q_OBJECT
private:
	IMGroupChatView* m_view;

	int m_groupMemberCount;
public:
    explicit IMGroupChatViewModel(QObject *parent = nullptr);

	void init();

	void runJs(const QString &scriptSource);

	int getGroupMemberCount();
	QString getGroupId();

	void updateGroupMemberCount(int member_count);
	void setNoSpeak(bool bEnable);

	void removeMemberByUserId(QString strUserId);

	void insertItem(QString strUserID, QString strPicPath, QString strNickName, QString adminPicPath, bool bHasNote);
	void updateGroupBuddyImagePath(int userID, QString imagePath);

	void insertGroupUserList();

	void startThread();

	void showByChatId(bool isNew);
	void insertImageToTextEditSend(QString strPath);

	QString getDraft();

	QVariant getValueByIndexAndType(int index, GroupUserListModel::GroupUserListItemRoles roleType);
signals:

public slots:
};

#endif // IMGROUPCHATVIEWMODEL_H
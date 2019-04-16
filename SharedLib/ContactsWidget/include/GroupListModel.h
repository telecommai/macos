#ifndef GROUPLISTMODEL_H
#define GROUPLISTMODEL_H

#include <QAbstractListModel>
#include <QList>
#include <QDateTime>


class GroupListItem
{
public:
	GroupListItem(const QString &userId, const QString &headUrl, const QString &nickName);

	int itemType() const;
	QString userId() const;
	QString headUrl() const;
	QString nickName() const;
	QString msg() const;
	QString msgTime() const;
	int unreadMsgCount() const;
	QString sendStatusUrl() const;

	void setItemType(QVariant val);
	void setUserId(QVariant val);
	void setHeadUrl(QVariant val);
	void setNickName(QVariant val);
	void setMsg(QVariant val);
	void setMsgTime(QVariant val);
	void setUnreadMsgCount(QVariant val);
	void setSendStatusUrl(QVariant val);

private:
	int m_itemType;
	QString m_userId;
	QString m_headUrl;
	QString m_nickName;
	QString m_msg;
	QString m_msgTime;
	int m_unreadMsgCount;
	QString m_sendStatusUrl;
};

class GroupListModel : public QAbstractListModel
{
	Q_OBJECT
public:
	enum MessageListItemRoles {
		ItemTypeRole = Qt::UserRole + 1,
		UserIdRole,
		HeadUrlRole,
		NickNameRole,
		MsgRole,
		MsgTimeRole,
		UnreadMsgCountRole,
		SendStatusUrlRole
	};

	GroupListModel(QObject *parent = 0);


	void pushFront(const GroupListItem *item);
	void pushBack(const GroupListItem *item);

	int rowCount(const QModelIndex & parent = QModelIndex()) const;

	QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);

	QString currentSelectedUserId();
	void setCurrentSelectedUserId(QString userId);

	Q_INVOKABLE void clear();
	Q_PROPERTY(QString currentSelectedUserId READ currentSelectedUserId WRITE setCurrentSelectedUserId);
	Q_INVOKABLE void takeItem(int row);

	void reLoadBegin();
	void reLoadEnd();


protected:
	QHash<int, QByteArray> roleNames() const;
private:
	QList<GroupListItem> m_items;
	QString m_currentSelectedUserId;
};

#endif

#ifndef MESSAGELISTMODEL_H
#define MESSAGELISTMODEL_H

#include <QAbstractListModel>
#include <QList>


class MessageListItem
{
public:
	MessageListItem(const int& itemType,const QString &userId, const QString &headUrl, const QString &nickName,const QString &msg,const QString &msgTime,const int &unreadMsgCount, const int &msgTopOrder, const int &msgPrompt,const bool &bHasDraft);

	int itemType() const;
	QString userId() const;
	QString headUrl() const;
	QString nickName() const;
	QString msg() const;
	QString msgTime() const;
	int unreadMsgCount() const;
	QString sendStatusUrl() const;
	int	msgTopOrder() const;
	int msgPrompt() const;
	bool bHasDraft() const;

	void setItemType(QVariant val);
	void setUserId(QVariant val) ;
	void setHeadUrl(QVariant val) ;
	void setNickName(QVariant val);
	void setMsg(QVariant val);
	void setMsgTime(QVariant val);
	void setUnreadMsgCount(QVariant val);
	void setSendStatusUrl(QVariant val);
	void setMsgTopOrder(QVariant val);
	void setMsgPrompt(QVariant val);
	void setbHasDraft(QVariant val);

private:
	int m_itemType;
	QString m_userId;
	QString m_headUrl;
	QString m_nickName;
	QString m_msg;
	QString m_msgTime;
	int m_unreadMsgCount;
	QString m_sendStatusUrl;
	int m_msgTopOrder;
	int m_msgPrompt;
	bool m_bHadDraft;
};

class MessageListModel : public QAbstractListModel
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
		SendStatusUrlRole,
		MsgTopOrderRole,
		MsgPromptRole,
		DraftFlagRole	
	};

	MessageListModel(QObject *parent = 0);


	void pushFront(const MessageListItem *item);
	void pushBack(const MessageListItem *item);
	void insertItem(const MessageListItem *item, const int index);

	int rowCount(const QModelIndex & parent = QModelIndex()) const;

	QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);

	QString currentSelectedUserId();
	void setCurrentSelectedUserId(QString userId);

	Q_INVOKABLE void clear();
	Q_PROPERTY(QString currentSelectedUserId READ currentSelectedUserId WRITE setCurrentSelectedUserId);
	Q_INVOKABLE void takeItem(int row);

protected:
	QHash<int, QByteArray> roleNames() const;
private:
	QList<MessageListItem> m_items;
	QString m_currentSelectedUserId;
};

#endif

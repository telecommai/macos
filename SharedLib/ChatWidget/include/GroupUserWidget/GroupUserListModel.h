#ifndef GROUPUSERLISTMODEL_H
#define GROUPUSERLISTMODEL_H

#include <QAbstractListModel>


class GroupUserItem
{
public:
	GroupUserItem(const QString &userId, const QString &headUrl, const QString &nickName,const QString &adminPicPath,const bool &bHasNote);

	QString userId() const;
	QString headUrl() const;
	QString nickName() const;
	QString adminUrl() const;
	bool hasNote() const;

	void setUserId(QVariant val);
	void setHeadUrl(QVariant val);
	void setNickName(QVariant val);
	void setAdminUrl(QVariant val);
	void setHasNote(QVariant val);

private:
	QString m_userId;
	QString m_headUrl;
	QString m_nickName;
	QString m_adminUrl;
	bool m_bHasNote;
};

class GroupUserListModel : public QAbstractListModel
{
    Q_OBJECT

public:
	enum GroupUserListItemRoles {
		UserIdRole = Qt::UserRole + 1,
		HeadUrlRole,
		NickNameRole,
		AdminUrlRole,
		HasNoteRole,
	};

    explicit GroupUserListModel(QObject *parent = nullptr);

	void pushFront(const GroupUserItem *item);
	void pushBack(const GroupUserItem *item);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
	bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);

	Q_INVOKABLE void clear();

	Q_INVOKABLE void takeItem(int row);

protected:
	QHash<int, QByteArray> roleNames() const;
private:
	QList<GroupUserItem> m_items;

private:
};

#endif // GROUPUSERLISTMODEL_H
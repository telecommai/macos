#ifndef GROUPUSERLIST_H
#define GROUPUSERLIST_H

#include <QQuickWidget>
#include <QWidget>
#include "GroupUserListModel.h"

class GroupUserList : public QQuickWidget
{
	Q_OBJECT
private:
	bool IsValidImage(QString imgPath);
	void changeStyle(QString styleName);
public:
	GroupUserListModel* m_pGroupUserListModel;
public:
    GroupUserList(QWidget *parent);
	~GroupUserList();

	void mouseReleaseEvent(QMouseEvent *event);

	void clear();
	int count();

	QModelIndex item(int i);
	QVariant data(QModelIndex idx,GroupUserListModel::GroupUserListItemRoles roleName);
	void setData(const QModelIndex &index, const QVariant &value, GroupUserListModel::GroupUserListItemRoles roleName);
	
	void takeItem(int row);

	void insertItem(QString strUserID, QString strPicPath, QString strNickName,QString adminPicPath,bool bHasNote);

	QModelIndex currentItem();
signals:
	void sigGroupListContextMenuRequested(int);
	void sigItemDoubleClicked(int);
private slots:
	void slotUpdateBuddyHeaderImagePath(int ID, QString path);
};

#endif // GROUPUSERLIST_H
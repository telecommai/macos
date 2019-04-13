#ifndef MESSAGELISTVIEWMODEL_H
#define MESSAGELISTVIEWMODEL_H

#include <QObject>
#include "MessageListModel.h"

class QQuickItem;

class MessageListViewModel : public QObject
{
    Q_OBJECT
private:
	static MessageListViewModel* s_instance;
	MessageListModel* m_model;
public:
    explicit MessageListViewModel(QObject *parent = nullptr);
	static MessageListViewModel* instance();

	MessageListModel* model();

	void init();

	QQuickItem *rootObject() const;

	bool existUserId(QString strUserId);
	void updateHeadUrlByUserId(QString strUserId, QString headPicPath);
	void updateHeadUrlByIndex(int index, QString headPicPath);
	void updateNickNameByIndex(int index, QString nickName);
	void updateMsgByIndex(int index, QString msg);
	void updateDraftFlagByIndex(int index, bool hasDraft);
	void insertItemWithOrder(MessageListItem item);
	void insertItem(MessageListItem item, const int index);
	void pushBack(MessageListItem item);
	void pushFront(MessageListItem item);
	int getAllUnreadNum();

	int getIndexByUserId(QString strUserId);
	int getMsgTopOrderByIndex(int index);
	int getItemTypeByIndex(int index);
	int getItemTypeByUserId(QString strUserId);
	int getCurrentIndex();
	void setCurrentIndex(int index);
	void setSendStatusFailedByIndex(int idx);
	void resetSendStatusByIndex(int idx);
	void doClickIndex(int index);

	int count();

	QString getUserIdByIndex(int idx);
	QString getMsgByIndex(int idx);
	void deleteByIndex(int idx);
	void deleteByUserId(QString strUserId);
	int getUnreadMsgCountByIndex(int idx);

	QString getCurrentSelectedUserId();
	bool isDraftFlagByIndex(int idx);

	void doUpDownKeyClick(bool isUp);
	void setSendStatusWaitByIndex(int idx);

	QVariant getValueByIndexAndType(int index, MessageListModel::MessageListItemRoles roleType);
	void setValueByIndexAndType(int index, MessageListModel::MessageListItemRoles roleType, const QVariant &value);
	int rowCount();

	void changeStyle(QString styleName);

signals:

public slots:
};

#endif // MESSAGELISTVIEWMODEL_H
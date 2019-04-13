#ifndef IMGROUPVIEW_H
#define IMGROUPVIEW_H

#include <QWidget>
#include "groupfilewidget.h"

class IMGroupViewModel;
class IMGroupDispatcher;
class IMGroupStore;
class IMGroupChatView;
class QDragEnterEvent;
class GroupFileWidget;

namespace Ui { class GroupWidget; };

class IMGroupView : public QWidget
{
    Q_OBJECT
private:
	Ui::GroupWidget *ui;

	QString m_groupId;

	IMGroupViewModel* m_vm;
	IMGroupDispatcher* m_dispatcher;
	IMGroupStore* m_store;

	WId chatWidgetID;

	IMGroupChatView* m_groupChatView;

	GroupFileWidget *mGroupFileWidget;
private:
	void initSelf();
	void initConnectSelfSignals();
	void initChatWidget();

protected:
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);
	void mousePressEvent(QMouseEvent *event);

	bool eventFilter(QObject *obj, QEvent *e);
public:
    explicit IMGroupView(QString groupID,QWidget *parent = nullptr);

	~IMGroupView();
	IMGroupDispatcher* dispatcher();
	IMGroupStore* store();
	IMGroupViewModel* vm();

	IMGroupChatView* getGroupChatView();

#ifdef Q_OS_WIN
	WId getChatWidgetID();
#endif

	void setGroupNameAndGroupId(QString strGroupName, QString strGroupID);

signals:

public slots:
	void slotClickedChatWidget();
	void slotClickedFileWidget();
};

#endif // IMGROUPVIEW_H
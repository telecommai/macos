#ifndef GROUPLIST_H
#define GROUPLIST_H

#include <QMenu>
#include <QListWidget>
#include <QListWidgetItem>
#include <QScrollBar>
#include <QKeyEvent>
#include <QDebug>
#include "cfrientitemgroup.h"
#include "imbuddy.h"
#include "imtranstype.h"
#include "stdafx.h"
#include "messagebox.h"

#include <QScrollBar>
#include <QJsonDocument>
#include "imusermessage.h"
#include <QQuickWidget>
#include "GroupListModel.h"



class GroupList : public QQuickWidget
{
	Q_OBJECT

private:
	void OnInsertGroup(GroupInfo groupInfo, int nHeight = 62);
	void changeStyle(QString styleName);

	QMenu* listMenu;
	QPoint point;
	QTimer *m_menuTimer;
	QMap<QString, QString> m_lastMsgIdInfoMap;
	QMap<QString, QString> m_msgIdInfoMap;
	QMap<QString, bool> m_lastMsgIdFailureInfoMap;
	bool setCurrIndexFlag;
public:
	GroupList(QWidget *parent=NULL);
	~GroupList();

	GroupListModel* m_pGrplistModel;

	void doQmlListViewHoverBugfix(int x, int y);
	void doUpDownKeyClick(bool isUp);

	void OnInsertGroupInfo(GroupInfo groupInfo);

	void UpdateHeaderImage(QString userID, QString imgPath, bool flag);

	void OnUpdateGroupInfo(GroupInfo groupInfo);

	void OnDeleteGroupInfo(QString groupID);

	bool IsValidImage(QString imgPath);
	int getCurrentIndex();
	void setCurrentIndex();

	void doClickIndex(int index);
	void showEvent(QShowEvent *event);
	void moveEvent(QMoveEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);


	void OnInsertMessage(QString strUserID, QString strPicPath, QString strNickName, int nHeight = 64);

	Q_INVOKABLE void doClickItem(QString userId);
	Q_INVOKABLE void doDoubleClickItem(QString userId);
	Q_INVOKABLE void doRightClickItem(QString userId);

protected:
	void keyPressEvent(QKeyEvent * event);
	void resizeEvent(QResizeEvent *event);
private slots:
	void slotDoubleClickedItem(QListWidgetItem *item);
	void slotDissolveGroup();
	void slotUserQuiteGroup();
	void slotDoDissolveGroup();
	void slotDoUserQuiteGroup();
	void slotCheckHttp(bool bSuccess, QString strValue);
signals:
	void sigGroupChat(int type, QVariant strGroupID);
	void sigProfile(QString strBuddyID);
	void sigDoubleClickItem(QString);
	void sigCloseChat(QString);
	void sigMessageNum(int);
	void sigDefaultSelectedId(QString userId);
};


#endif // GROUPLIST_H

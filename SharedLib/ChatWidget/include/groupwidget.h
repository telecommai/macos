#ifndef GROUPWIDGET_H
#define GROUPWIDGET_H

#include <QWidget>
#include <QFile>
#include "groupchatwidget.h"
#include "groupfilewidget.h"
#include "imtranstype.h"
#include "groupprofilewidget.h"

#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>

namespace Ui { class GroupWidget; };

class GroupWidget : public QWidget
{
	Q_OBJECT

public:
	GroupWidget(QString groupID, QWidget *parent = 0);
	~GroupWidget();

	void OnSetGroupName(QString strGroupName, QString strGroupID);

	void OnInsertGroupUserList(QString strGroupID);

	void OnInsertGroupUser(QString manaID, BuddyInfo info);

	void OnCloseExpress();

	void OnSendTransmitMessage(MessageInfo msg);
	void OnShareID(int type, QString contactID);

	void OnInsertRevMessage(MessageInfo message);

	void OnUpdateGroupBuddyHeaderImg(QString strBuddyID, QString strPath);

	void UpdateMessageStateInfo(QByteArray msgID, int nState, int integral);

	void OnInertSendMessageTextInfo(QString strMsg, QString strrAvatarLocal, MessageInfo msgInfo);

	void OnSendScreenShotPic(QString strShotFileName);

	void scrollBottom();
	void userQuitGroup(QString userID);

	void setNoSpeak(int noSpeak);

    void InsertTextEditPic(QString strPath);

	QString GetDraft();
#ifdef Q_OS_WIN
	WId getChatWidgetID();
#endif

	void ShowByChatId(bool isNew);

	bool IsDownloading();

protected:

	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);

private:
	void RegisterHandle();
	void mousePressEvent(QMouseEvent *event);

	bool eventFilter(QObject *obj, QEvent *e);

private slots:
	void slotClickedClose();
	void slotClickedMaxSize();
	void slotClickedMinSize();
	void slotClickedGroupChat();
	void slotClickedGroupNotice();
	void slotClickedGroupPic();
	void slotClickedGroupTalk();
	void slotClickedGroupMore();
	void slotGroupSendClose();

	void slotClickedChatWidget();
	void slotClickedFileWidget();

	void slotShowPerChat(QString strBuddyID);

	void slotOnGroupChatBtnCloseWClicked(); 

	void slotGroupBuddyPerChat(QString strBuddyID);

	void slotShowNormalWindow();

	void slotOpenGroupLog();

	void slotCloseProfileWidget();
signals:
	void sigGroupClose();
	void sigGroupMinSize(); 

	void sigShowPerChat(QString strBuddyID);

	void sigGroupWidgetBtnCloseWClicked();
	void sigGroupFile();

	void sigUpdateSelfImage(int, QPixmap);

	void sigMakeGroupHeader(QString groupID);
	void sigUpdateSelfMessage(bool, QVariant, QString,bool, QMap<QString, QVariant>);
	void sigKeyUpDown(QKeyEvent *);

	void sigShowGroupBuddyPerChat(int type, QVariant strBuddyID);

	void sigShowNormalWindow();
	void sigOpenGroupLog(QString);
	void sigTransmit(QString);

	void sigShareID(int type, QString shareID);
	void sigOpenChat(int, QVariant);

	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigHostingCharge(int, QString, QString, QString);

private:
	Ui::GroupWidget *ui;
	GroupChatWidget *mGroupChatWidget;
	GroupFileWidget *mGroupFileWidget;
	WId chatWidgetID;

	GroupProfileWidget *profileWidget;
};

#endif // GROUPWIDGET_H

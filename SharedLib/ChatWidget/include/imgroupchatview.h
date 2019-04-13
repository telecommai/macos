#ifndef IMGROUPCHATVIEW_H
#define IMGROUPCHATVIEW_H

#include <QWidget>
#include <QWebEnginePage>
#include <QPointer>
#include "imbuddy.h"

class IMGroupChatViewModel;
class IMGroupChatDispatcher;
class IMGroupChatStore;
class IMGroupView;
class QDragEnterEvent;
class QWebEngineViewDelegate;
class ExpressWidget;
class AtWidget;
class QMovie;
class QTimer;
class ThreadLoadGroupUserList;
class QMenu;
class QAction;
class GroupSearchWidget;
class QLabel;
class WebObjectShareLib;
class QTextEdit;
class GroupUserList;
class GroupPackWidget;
class IMVideoPlayer;
class RedPackDetail;
class OpenPacketWidget;

namespace Ui { class GroupChatWidget; }

class IMGroupChatView : public QWidget
{
	Q_OBJECT
private:
	Ui::GroupChatWidget *ui;

	IMGroupChatViewModel* m_vm;
	IMGroupChatDispatcher* m_dispatcher;
	IMGroupChatStore* m_store;

	IMGroupView* m_groupView;

	QString m_groupId;

	WebObjectShareLib* m_pWebObject;

	QPointer<ExpressWidget> mExpressWidget; 
	QRect rectExpressWidget;        

	AtWidget *atWidget;

	QMovie *movie;   

	QMenu * m_Menu;
	QAction *ActPaste;
	QAction *ActDel;
	QAction *ActCopy;
	QAction *ActCut;

	QTimer *m_menuTimer;

	ThreadLoadGroupUserList *thread;

	GroupSearchWidget *searchWidget;
	QLabel *sendTip;
	QLabel *noSpeakTip;

	bool m_bHasStartGroupUserThread;
	bool m_bNeedManulInit;
	bool m_bReloadGroupUserList;

	int atPosition;

	bool mbExpress_widget_is_showing;  

	GroupPackWidget *groupPackWidget;

	QList<QString> m_listPic;

	IMVideoPlayer *videoWidget;

	RedPackDetail *detailWidget;

	OpenPacketWidget *openPacketWidget;
private:
	void initSelf();

	void initWebView();
	void initTextEditSend();

	void initTextEditSendContextMenu();
	void initConnectSelfSignals();

	void InsertTextEditPic(QString strPath);

	void OnCloseExpress();

	void StartGroupUserThread();

	void ExpressHide(QRect rect, QPoint pos);

	void ReLoadGroupUserList();

	QPointer<ExpressWidget> getExpressWidget();
public:
	explicit IMGroupChatView(QString groupId, QWidget *parent = nullptr);

	~IMGroupChatView();
	IMGroupChatDispatcher* dispatcher();
	IMGroupChatStore* store();
	IMGroupChatViewModel* vm();

	IMGroupView* getGroupView();
	AtWidget *getAtWidget();
	QWebEngineViewDelegate *getWebView();
	QTextEdit* getTextEditSend();

	WId winId() const;

	QString getGroupId();
	void doUpdateGroupMemberCount(int member_count);
	void removeMemberByUserId(QString strUserId);
	void insertItem(QString strUserID, QString strPicPath, QString strNickName, QString adminPicPath, bool bHasNote);
	void updateGroupBuddyImagePath(int userID, QString imagePath);
	void setNoSpeak(bool bEnable);
	void insertGroupUserList();

	void startThread();

	GroupUserList* getGroupUserList();
protected:
	bool eventFilter(QObject *obj, QEvent *e);

	void showEvent(QShowEvent *event);
	void resizeEvent(QResizeEvent * event);
	void mousePressEvent(QMouseEvent *event);
signals:
	void sigGroupBuddyPerChat(QString strUserID);
	void sigOpenMessageLog();  
	void sigShowNormalWindow();
public slots :
	void slotGroupBuddyPerChat(QString strBuddyID);
	void slotShowNormalWindow();
	void slotOpenGroupLog();
	
	void slotAtGroupUser(QString path);
	void slotGroupListContextMenuRequested(int index);
#ifdef Q_OS_WIN
	void slotParseScreenCutMessage(QString strMsg);
#endif
	void slotScreenCanclePixMap();
	void slotSendScreenShotPic();
	void slotUpdateHtmlBuddyHeaderImagePath(int buddyId, QString path);
	void slotUpdateHtmlBuddyNickName(int buddyId, QString nickName, int iGrp);

	void slotClickedCutPic();
	void slotClickedExpress();
	void slotClickedFont();
	void slotClickedPicture();
	void slotClickedSend();
	void slotClickedShake();
	void slotClickedRedPacket();
	void slotCloseGivePackWidget();
	void slotExpressNormalImagePath(QString strPath);
	void slotClickedSpeak();
	void slotGroupFile();
	void slotClickAdd();
	void slotClickedNotice();
	void slotFinished();
	void slotShowOrHideSearch(bool checked);
	void slotOpenSearchUser(QString strUserID);
	void slotGetItemInfo(bool success, QString result);

	void slotVideoPlay(QString mediaPath);
	void slotCloseVideoWidget();
	void slotOpenDocument(QString msgID);
	void slotCancleLoadorDownLoad(QString MsgId);
	void slotOpenGroupFile(QString msgID);
	void slotSendFileByID(QString msgID);
	void slotOpenLink(QString link);
	void slotClickUserHeader(QString msgID);
	void slotPopUpMenu(bool isShowCopy, bool isShowTransmit, QString msgId);
	void slotMsgID(QString msgID);
	void slotWebViewRenderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode);
	void slotWebEngineFinish(bool bResult);

	void slotChangeText();

	void slotCopy();
	void slotCut();
	void slotPaste();
	void slotDel();

	void slotSetManager();
	void slotCancelManager();
	void slotShowProfile();
	void slotOpenNote();
	void slotRemoveBuddy();
	void slotTest(bool success, QString result);
	void slotSetNote(QString note);
	void slotWebViewCopy();
	void slotFileViewCopy();
	void slotReSend();
	void slotReLoad();
	void slotWebViewTransmit();
	void slotWebViewClear();
	void slotShareBuddyInfoResult(bool success, QString result);
	void slotGetPacketResult(QString result);
	void slotPacketStatus(bool valid);
	void slotClosePacketWidget();
	void slotOpenPacket(QString msgID);
	void slotCloseDetailWidget();
	void slotShareBuddyHeader(bool success);

	void slotParseGroupBuddyInfo(QString string, QList<BuddyInfo> list);
};

#endif // IMGROUPCHATVIEW_H

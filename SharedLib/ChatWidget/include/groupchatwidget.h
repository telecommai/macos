#ifndef GROUPCHATWIDGET_H
#define GROUPCHATWIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QMouseEvent>

#include <QDebug>
#include <QScrollBar>
#include <QMovie>
#include <qmenu.h>
#include <qclipboard.h>
#include <qmimedata.h>
#include <QTextBlock>
#include "messagebox.h"
#include "inputbox.h"
#ifdef Q_OS_WIN
#include <tchar.h>
#endif
#include <QJsonDocument>
#include <QFileDialog>
#include "childWidget/filetypeex.h"
#include <QDesktopServices>
#include <QProcess>
#include "zooming/picwidget.h"
#include "questionbox.h"
#include "imvideoplayer.h"

#include "imusermessage.h"
#include "stdafx.h"
#include "define.h"
#include "opdatebasesharelib.h"
#include "imdownloadheaderimg.h"
#include "imrequestbuddyinfo.h"
#include "childWidget/expresswidget.h"
#include "childWidget/groupsearchwidget.h"
#include "childWidget/groupuserprofilewidget.h"
#include "childWidget/groupaddbuddywidget.h"
#include "amrDec/amrdec.h"
#include "thread/threadloadgroupuserlist.h"
#include "perprofilewidget.h"
#include "groupprofilewidget.h"
#include "SearchWidget/atwidget.h"
#include "redPacketWidget/openPack.h"
#include "redPacketWidget/RedPackDetail.h"
#include "redPacketWidget/GroupPackWidget.h"
#include <QWebChannel>
#include <webobjectsharelib.h>
#include <QWebEnginePage>


namespace Ui { class GroupChatWidget; };

class GroupChatWidget : public QWidget
{
	Q_OBJECT

public:
	GroupChatWidget(const QString& groupId,QWidget *parent = 0);
	~GroupChatWidget();

	WId winId() const;

	bool IsValidImage(QString imgPath);

	void OnCloseExpress();
	void ExpressHide(QRect rect, QPoint pos);
	void OnInsertGroupUserList(QString strGroupID);
	void OnInsertGroupUser(QString manaID, BuddyInfo info);

	void onInsertTimeLine(qlonglong time_t);
	void OnSendTransmitMessage(MessageInfo msg);
	void OnShareID(int type, QString contactID);
	void OnRevMessage(MessageInfo messageInfo);
	void OnUpdateGroupBuddyHeaderImg(QString strBuddyID, QString strPath);
	void UpdateMessageStateInfo(QByteArray msgID, int nState, int integral);
	void OnInertSendMessageTextInfo(QString strMsg, QString strHeadImage, MessageInfo msgInfo);

	void OnRecvGroupFile(MessageInfo, QString);
	void OnRecvAudioMessage(MessageInfo msgInfo, QString nickName, QString headerImage);
	void onRecvLocationMessage(MessageInfo msgInfo,QString nickName, QString headerImage);
	void OnRecvNoticeMessage(MessageInfo msgInfo, QString nickName, QString headerImage);
	void onRecvShareUrlMessage(MessageInfo msgInfo, QString nickName, QString headerImage);
	void OnRecvNotifyMessage(MessageInfo msgInfo);
	void OnRecvCommonMessage(MessageInfo messageInfo, QString nickName, QString strHeadImage);
	void onRecvRedBagMessage(MessageInfo messageInfo, QString nickName, QString strHeadImage);
	void OnInsertRecvFileMessage(MessageInfo msgInfo, QString strNickName);
	void InsertSendFileMessage(MessageInfo msgInfo);//

	void OnSendScreenShotPic(QString strShotFileName);

	void scrollBottom();
	void userQuitGroup(QString userID);
	void setNoSpeak(int noSpeak);

    void InsertTextEditPic(QString strPath);

	void ShowByChatId(bool isNew);

	QString GetDraft();

	bool IsDownloading();

protected:
	void resizeEvent(QResizeEvent * event);
private:
	void RegisterHandle();
	bool eventFilter(QObject *obj, QEvent *e);
	void showEvent(QShowEvent *event);

	void mousePressEvent(QMouseEvent *event);
	void OnInsertGroupUserItem(QString strUserID, QString strPicPath, QString strNickName, int mana, bool bHasNote,int nHeight=30);

	void OnInsertRecMessageTextInfo(QString strMsg, QString strHeadImage, QString strMsgId, int score, QString strBuddyId);
	QString GetBuddyHeaderImage(QString strGroupID, QString strBuddyID);
	void OnClearMessageInfo();

	void OnInsertRecvMessageTextInfo(QString strMsg, QString strHeadImage, QString strNickName,QString strMsgId, int score, QString strBuddyId);//changed by wqj 
	void OnInsertRecvPictureInfo(QString strIsUserDefine, QString strUserDefinePicPath, QString strPicPath, QString strHeadImage, QString strNickName, QString strMsgId, int score, QString strBuddyId);//插入图片单独用的函数

	void updateGroupMemberCount(int member_count);     
	QString formatSendMessageFromImgPathToImgDescription(const QString& strSendMessage);   

	QString recognizeUrl(const QString& strMessage);
	QString formatMessageFromImgDescriptionWithHtmlEncode(const QString& strMessage);
	
	void OnInsertRecVideoInfo(QString strIsLoading, QString strVideoPicPath, QString strVideoPath, QString strHeadImage, QString strNickName, QString strMsgId, int score, QString strBuddyId);

	void SendPicture(QString fileName);

	void SendTextMessage(QString strText, QString strHtmlText);
	QString decodeURI(QString str);

	QString convertHeaderToHtmlSrc(QString headerImage);

	void sendTransmitFile(MessageInfo msg);
	void SendVideo(MessageInfo msg);


	int CalWavLength(QString strPath);

	QString GetFileMd5(QString fileNamePath);
	const QString GetSmallImg(QString strPath);

	void ChangeFileState(QString strMsgId, int iState);
private slots:
    void InitMessageInfo(QString strEndRowId = "");

	void slotClickedClose();
	void slotClickedCutPic();
	void slotClickedExpress();
	void slotClickedFont();
	void slotClickedPicture();
	void slotClickedSend();
	void slotClickedShake();

	void slotClickedRedPacket();
	void slotGivePacket(QString data);

	void slotClickedSpeak();
	void slotClickAdd();

	void slotExpressNormalImagePath(QString strPath);
	void slotClickedDoubleItem(QListWidgetItem *item);
	void slotGetItemInfo(bool, QString);

	void slotOnBtnCloseWClicked(); 
	void slotGroupFile();
	void doUpLoadFileProgress(qint64 sendnum, qint64 total);
	void slotDownLoadFileProgress(qint64, qint64);

	void slotUpPicReplyFinished(bool result, QByteArray strResult);

	void slotStartGroupUserThread(); 
	void slotGroupUserInfoLoad(int); 
	void slotThreadLoadGroupUserInfo(BuddyInfo buddyInfo);   
	void slotReLoadGroupUserList();

	void slotUpdateGroupBuddyImage(int, QPixmap);
	void slotUpdateGroupBuddyImagePath(int userID, QString imagePath);

	void slotCefDrags(QStringList list);

	void slotParseGroupBuddyInfo(QString, QList<BuddyInfo>);

	void slotChangePic(int iType);

	void slotClickedNotice();
	void slotSendNotice(QMap<QString, QString>);
	void slotUpNoticePicReplyFinished(bool, QByteArray);

	void slotTipMessage(int, QString, QString);
	void slotReSend();
	void slotReLoad();
	void slotWebViewRenderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode);
	void slotUpdateNotice(bool);
	void slotDownFailed();
public slots:
	void slotUpFileReplyFinished(bool, QByteArray);
	void slotGetFile(QString msgID);
	void slotCoverFile();
	bool slotSaveFile(QString msgID);
	void slotRequestHttpFileResult(bool result);
	void slotOpenDocument(QString msgID);
	void slotOpenGroupFile(QString msgID);
	void slotZoomImg(QString strFileName);
	void slotVideoPlay(QString mediaPath);
	void slotCancleLoadorDownLoad(QString msgId);
	void slotSendFile(QString strFileName);
	void slotSendFileByID(QString msgID);
	void slotOpenLink(QString link);
	void slotSendScreenShotPic();
    void slotScreenCanclePixMap();
    void slotWebEngineFinish(bool bResult);
	void slotPicClose();
#ifdef Q_OS_WIN
	void slotParseScreenCutMessage(QString strMsg);
#endif

	void slotUpdateHtmlBuddyHeaderImagePath(int buddyId, QString path);
	void slotUpdateHtmlBuddyNickName(int buddyId, QString nickName,int iGrp);

signals:
	void sigClose();

	void sigUpdateSelfImage(int, QPixmap);

	void sigBtnCloseWClicked();

	void sigMakeGroupHeader(QString groupID);
	void sigUpdateSelfMessage(bool, QVariant, QString,bool, QMap<QString, QVariant>);
	void sigKeyUpDown(QKeyEvent *);

	void sigGroupBuddyPerChat(QString strUserID);

	void sigCancle(QString);

	void sigShowWindowMinsize();
	void sigShowNormalWindow(); 

	void sigOpenMessageLog();   

	void sigTransmit(QString);

	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigHostingCharge(int, QString, QString, QString);

private slots:
	void slotContextMenuRequested(const QPoint &pos);
	void slotSetManager();
	void slotCancelManager();
	void slotRemoveBuddy();
	void slotAddFriend();
	void slotHttpAddPersonResultInfo(bool bResult, QString strResult);

	void slotShowOrHideSearch(bool);
	void slotOpenSearchUser(QString);

	void slotFinished();
	void slotCefInited();

	void slotTest(bool, QString);
	void slotOpenNote();
	void slotSetNote(QString);

	void slotMsgID(QString msgID);

	void slotOpenPacket(QString msgID);
	void slotGetPacketResult(QString);
	void slotPacketStatus(bool);

	void slotShareBuddyInfoResult(bool, QString);
	void slotShareBuddyHeader(bool);
	void slotShareGroupInfoResult(bool, QString);
	void slotShareGroupHeader(bool);

	void slotShowProfile();
	void slotClickUserHeader(QString msgID);

	void slotCloseVideoWidget();
	void slotClosePacketWidget();
	void slotCloseDetailWidget();
	void slotCloseGivePackWidget();

	void slotAtGroupUser(QString path);
	void slotSendAtMessage(QString content, QString message);

	void slotChangeText();

	void slotOpenGroupUserChat(int type, QVariant buddyID);

	void slotPopUpMenu(bool isShowCopy, bool isShowTransmit, QString msgId);
	
	void slotCopy();
	void slotCut();
	void slotPaste();
	void slotDel();

	void slotWebViewClear();
	void slotWebViewCopy();
	void slotFileViewCopy();
	void slotWebViewTransmit();

	void slotGroupListContextMenuRequested(int);
	void slotItemDoubleClicked(int);

	void slotLoadMore();
private:
	Ui::GroupChatWidget *ui;
	ExpressWidget *mExpressWidget; 
	QRect rectExpressWidget;         
	QString mCurrentID; 

	QMovie *movie;  
	
	bool mbExpress_widget_is_showing;   

	ThreadLoadGroupUserList *thread;

	QString m_foremostRowId;
	bool m_isShowingMore;

	bool copying;
	GroupSearchWidget *searchWidget;
	QLabel *sendTip;
	QLabel *noSpeakTip;

	bool cefInited;        
	bool initFinisthed;      

	int atPosition;


	bool m_bHasStartGroupUserThread;
	bool m_bNeedManulInit;
	bool m_bReloadGroupUserList;

	QList<MessageInfo> waitMessages;

	PicWidget* m_pPicWidget;
	GroupProfileWidget *groupWidget;
	IMVideoPlayer *videoWidget;
	OpenPacketWidget *openPacketWidget;
	GroupPackWidget *groupPackWidget;
	RedPackDetail *detailWidget;
	AtWidget *atWidget;

	QMenu * m_Menu;
	QAction *ActPaste;
	QAction *ActDel;
	QAction *ActCopy;
	QAction *ActCut;
	QList<QString> m_listPic;
	QList<QString>::iterator m_PicIter;

    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;
	QTimer *m_menuTimer;
	
	int m_iHttp;
};

#endif // GROUPCHATWIDGET_H

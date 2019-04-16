#ifndef IMPERCHAT_H
#define IMPERCHAT_H

#include <QWidget>
#include <QFile>
#include <QKeyEvent>
#include <QDir>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QDesktopServices>
#include <QMainWindow>
#include <QDrag>
#include <QTextEdit>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QList>
#include <QJsonDocument>
#include <qclipboard.h>
#include <QTextBlock>
#ifdef Q_OS_WIN
#include <tchar.h>
#endif
#include <QDesktopWidget>
#include <QProcess>
#include <QJsonDocument>
#include <QJsonObject>
#include "httpnetworksharelib.h"
#include "imvideoplayer.h"

#include "qlabelheader.h"
#include "inputbox.h"
#include "imusermessage.h"
#include "common.h"
#include "opcommon.h"
#include "stdafx.h"
#include "define.h"
#include "opdatebasesharelib.h"
#include "childWidget/filetypeex.h"
#include "childWidget/expresswidget.h"
#include "childWidget/groupuserprofilewidget.h"
#include "amrDec/amrdec.h"
#include "cfrientstylewidget.h"
#include "secretWidget/enterpasswordwidget.h"
#include "zooming/picwidget.h"
#include "redPacketWidget/openPack.h"
#include "redPacketWidget/RedPackDetail.h"
#include "redPacketWidget/giveredpackwidget.h"
#include "questionbox.h"
#include "perprofilewidget.h"
#include "groupprofilewidget.h"
#include <QWebChannel>
#include <webobjectsharelib.h>
#include <QWebEnginePage>


namespace Ui { class IMPerChat; };

class IMPerChat : public QWidget
{
	Q_OBJECT

public:
	IMPerChat(QString buddyID, QWidget *parent = 0);
	~IMPerChat();

	WId winId() const;

	void OnCloseExpress();

	void OnSetNikeName(QString strText, QString strBuddyID);

	void OnSetAutoGraph(QString strText);

	void OnClearMessageInfo();

	void onInsertTimeLine(qlonglong time_t);

	void OnSendTransmitMessage(MessageInfo msg);
	void OnShareID(int type, QString contactID);

	void OnInertSendMessageTextInfo(QString strMsg, QString strHeadImage, MessageInfo msgInfo);

	void OnInsertRecMessageTextInfo(QString strMsg, QString strHeadImage, QString msgID, int score,QString strBuddyId);
	void OnInsertRecMessagePictureInfo(QString strIsUserDefine, QString strUserDefinePicPath, QString strPicPath, QString strHeadImage, QString strMsgID, int score, QString strBuddyId);

	void OnInsertRecVideoInfo(QString strIsLoading, QString strVideoPicPath, QString strVideoPath, QString strHeadImage, QString strMsgID, int score, QString strBuddyId);

	void UpdateMessageStateInfo(QByteArray msgID, int nState, int score);

	void OnSetChatHeaderImage(QString strHeaderImg); 
	void HideChatHeaderImage();    

	void OnRecvFileMessage(MessageInfo messageInfo, QString strHeadImage, QString fileLocalPath);
	void OnRecvImgMessage(MessageInfo messageInfo, QString strHeadImage);
	
	void OnRecvAudioMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecVdoMessage(MessageInfo messageInfo, QString strHeadImage);
	
	void OnRecvTaskMessage(MessageInfo messageInfo, QString strHeadImage);  

	void OnRecvFormMessage(MessageInfo messageInfo, QString strHeaderPath); 

	void onRecvTransferMessage(MessageInfo msgInfo, QString headerImage);
	void OnRecvNoticeMessage(MessageInfo msgInfo, QString headerImage);
	void onRecvShareUrlMessage(MessageInfo msgInfo, QString headerImage);
	void onRecvLocationMessage(MessageInfo msgInfo, QString headerImage);
	void onRecvSecretLetter(MessageInfo msgInfo, QString headerImage);
	void onRecvSecretImage(MessageInfo msgInfo, QString headerImage);
	void onRecvSecretFile(MessageInfo msgInfo, QString headerImage);

	void OnRecvGWMessage(MessageInfo messageInfo, QString strHeadImage);
	void OnRecvNotifyMessage(MessageInfo messageInfo);
	void OnRecvCommonMessage(MessageInfo messageInfo, QString strHeadImage);
	void onRecvRedBagMessage(MessageInfo messageInfo, QString strHeadImage);

	void SendDragFile(QString);

	void SendPicture(QString fileName);

	void SendVideo(MessageInfo msg);

    void InsertTextEditPic(QString strPath);


	void ShowByChatId(bool isNew);

	void StartInputting();
	
	QString GetDraft();

	QString GetFileMd5(QString fileNamePath);
	const QString GetSmallImg(QString strPath);

	bool IsDownloading();

public slots:
    void InitMessageInfo(QString strEndRowId = "");
    void slotOpenDocument(QString msgID);
	void slotOpenFile(QString msgID);
	void slotGetFile(QString msgID);
	void slotCoverFile();
	void slotRequestHttpFileResult(bool);
	bool slotSaveFile(QString msgID);
	void slotZoomImg(QString strFilePath);
	void slotCancleLoadorDownLoad(QString);
	void slotSendFileByID(QString);
	void slotUpPicReplyFinished(bool result, QByteArray strResult);
	void slotVideoPlay(QString mediaPath);
	void slotOpenLink(QString link);
	void slotOpenPerLog();
	void slotOpenSecret(QString);
	void slotSendScreenShotPic();
    void slotScreenCanclePixMap();
    void slotWebEngineFinish(bool bResult);
	void slotPicClose();
	void slotCopy();
	void slotCut();
	void slotPaste();
	void slotDel();

	void slotChangePic(int iType);
	void slotClickedNotice();
	void slotSendNotice(QMap<QString,QString>);
	void slotUpNoticePicReplyFinished(bool, QByteArray);
	void slotClickedTransfer();
	void slotClickedETH();
	void slotClickedBTC();
	void slotClickedEOS();
	void slotWalletMenu();
	void slotCloseWalletMenu();
	void slotCloseWalletLeave();
	void slotClickUserHeader(QString msgID);
	void slotWebViewRenderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode);
	void slotEndInputting();
	void slotInputTimeOut();
	void slotUpdateNotice(bool);
protected:
	
	void RegisterHandle();

	void showEvent(QShowEvent *event);

	bool eventFilter(QObject *obj, QEvent *e);

	virtual void mousePressEvent(QMouseEvent *event);
	void ExpressHide(QRect, QPoint);

	void OnDealRecvImgMessage(MessageInfo messageInfo, QString strHeadImage);
	
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);

	void hideEvent(QHideEvent *event);

private: 
	bool IsValidImage(QString imgPath);
	QString convertHeaderToHtmlSrc(QString);
	QString formatSendMessageFromImgPathToImgDescription(const QString& strSendMessage);	

	QString recognizeUrl(const QString& strMessage);
	QString formatMessageFromImgDescriptionWithHtmlEncode(const QString& strMessage);
	
	void SendTextMessage(QString strText, QString strHtmlText);

	QString decodeURI(QString str);

	void sendTransmitFile(MessageInfo msg);

	int CalWavLength(QString strPath);

	void ResizeNameLabel(QString);
	
	void ChangeFileState(QString strMsgId, int iState);

private slots:
	
	void doExpressNormalImagePath(QString strImgPath);

	void doClickedSetFont();   

	void doSelectExpress();    
	
	void doSendMessage();        
	
	void doClickedShake();     
	
	void doClickedRedPacket(); 
	
	void doClickedPicture();    
	
	void doClickedCutPicture(); 

	void slotClickedAddGroup();

	void slotUpFileReplyFinished(bool, QByteArray);
	void doUpLoadFileProgress(qint64, qint64);
	void slotDownLoadFileProgress(qint64,qint64);

	void slotCefDrags(QStringList);
	void slotPerFile();

	void slotClickedSendLetter();
	void slotSecretLetter(QString password, QString text, QString letter);
	void slotClickedSecretImage();
	void slotSecretImage(QString letter);
	void slotClickedSecretFile();
	void slotSecretFile(QString letter);

	void slotMsgID(QString msgID);

	void slotGivePacket(QString data);

	void slotOpenPacket(QString msgID);
	void slotGetPacketResult(QString);
	void slotPacketStatus(bool);

	void slotCloseGroupWidget();
	void slotCloseVideoWidget();
	void slotClosePacketWidget();
	void slotCloseDetailWidget();
	void slotCloseEnterWidget();
	void slotCloseGivePackWidget();

	void slotPopUpMenu(bool isShowCopy, bool isShowTransmit, QString msgId);
	void slotWebViewClear();
	void slotWebViewCopy();
	void slotFileViewCopy();

	void slotWebViewTransmit();

	void slotReSend();
	void slotReLoad();

	void slotLoadMore();

	void slotUserInputting();
#ifdef Q_OS_WIN
	void slotParseScreenCutMessage(QString strMsg);
#endif
	void slotUpdateHtmlBuddyHeaderImagePath(int buddyId, QString path);
	void slotUpdateHtmlBuddyNickName(int buddyId, QString path,int iGroupId);
	void slotDownFailed();
signals:
	
	void sigHideWidget();

	void sigWidgetMinSize();

	void sigBtnCloseWClicked();     
	
	void sigCancle(QString);

	void sigKeyUpDown(QKeyEvent *);
	void sigUpdateSelfMessage(bool, QVariant, QString,bool, QMap<QString, QVariant>);

	void sigAddChatGroup(QString);

	void sigOpenChatWindows(QString strToUserID);
	void sigShowNormalWindow();         
	void sigOpenPerLog(QString);
	
	void sigSecretPassword(QString);

	void sigTransferRecord(RecordInfo);

	void sigTransmit(QString);

	void sigTransferWindow(QString,QString);
	void sigETHWindow(QString, QString);
	void sigBTCWindow(QString, QString);
	void sigEOSWindow(QString, QString);

	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigHostingCharge(int, QString, QString, QString);
	void sigUserInputting(int);

private:
	Ui::IMPerChat *ui;
	ExpressWidget *mExpressWidget; 
	QRect rectExpressWidget;         

	QLabelHeader*    mChatHeaderImage;   
	bool	   mbExpress_widget_is_showing;   

	QString m_foremostRowId;
	bool m_isShowingMore;

	QString mMsgID;
	QString mUpFileName;

	bool initFinished;
	bool copying;
	QLabel *sendTip;

	QList<MessageInfo> waitMessages;

	EnterPasswordWidget *enterWidget;
	GroupProfileWidget *groupWidget;
	PicWidget* m_pPicWidget;
	OpenPacketWidget *openPacketWidget;
	RedPackDetail *detailWidget;
	GiveRedPackWidget *giveWidget;

	IMVideoPlayer *videoWidget;

	QMenu * m_Menu;
	QAction *ActPaste;
	QAction *ActDel;
	QAction *ActCopy;
	QAction *ActCut;

	QMenu * m_WalletMenu;
	QAction *ActPower;
	QAction *ActETH;
	QAction *ActBTC;
	QAction *ActEOS;
	bool m_bWalletBtn;
	bool m_bWalletMenu;
	QTimer * m_TimerBtn;
	QTimer * m_TimerLeave;
	QTimer * m_TimerInputting;
	QTimer * m_TimerUserInputting;
	QString m_strNickName;
	bool m_bTimeOut;
	QList<QString> m_listPic;
	QList<QString>::iterator m_PicIter;
    QWebChannel *m_pWebChannel;
    WebObjectShareLib *m_pWebObject;
	int m_iHttp;
};

#endif // IMPERCHAT_H

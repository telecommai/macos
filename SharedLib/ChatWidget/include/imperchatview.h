#ifndef IMPERCHATVIEW_H
#define IMPERCHATVIEW_H

#include <QWidget>
#include <QWebEnginePage>
#include <QPointer>

namespace Ui { class IMPerChat; };
class IMPerChatViewModel;
class IMPerChatDispatcher;
class IMPerChatStore;
class ExpressWidget;
class QLabelHeader;
class QLabel;
class QWebEngineViewDelegate;
class QTextEdit;
class GiveRedPackWidget;
class QMenu;
class IMVideoPlayer;
class RedPackDetail;
class EnterPasswordWidget;
class OpenPacketWidget;

class IMPerChatView : public QWidget
{
    Q_OBJECT
private:
	Ui::IMPerChat *ui;
	IMPerChatViewModel* m_vm;
	IMPerChatDispatcher* m_dispatcher;
	IMPerChatStore* m_store;

	QString m_strBuddyId;

	QPointer<ExpressWidget> mExpressWidget; 
	QRect rectExpressWidget;        

	QLabelHeader*    mChatHeaderImage;   
	bool	   mbExpress_widget_is_showing;  

	QLabel *sendTip;

	GiveRedPackWidget *giveWidget;


	QMenu * m_WalletMenu;
	QAction *ActPower;
	QAction *ActETH;
	QAction *ActBTC;
	QAction *ActEOS;
	bool m_bWalletBtn;
	bool m_bWalletMenu;

	IMVideoPlayer *videoWidget;

	RedPackDetail *detailWidget;

	EnterPasswordWidget *enterWidget;

	QTimer * m_TimerBtn;
	QTimer * m_TimerLeave;
	QTimer * m_TimerInputting;
	QTimer * m_TimerUserInputting;
	bool m_bTimeOut;

	OpenPacketWidget *openPacketWidget;

	bool copying;

	QMenu * m_Menu;
	QAction *ActPaste;
	QAction *ActDel;
	QAction *ActCopy;
	QAction *ActCut;
private:
	void initConnectSignals();
	void initWebView();
	void initInputStatusTimer();
	void initTextEditSend();
	void initTextEditSendContextMenu();
	void initWalletMenu();
	void initSelf();

	void ResizeNameLabel(QString strNewName);
	void OnCloseExpress();
	void ExpressHide(QRect rect, QPoint pos);

	QPointer<ExpressWidget> getExpressWidget();
protected:
	bool eventFilter(QObject *obj, QEvent *e);
	void mousePressEvent(QMouseEvent *event);
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);
	void showEvent(QShowEvent *event);
public:
    explicit IMPerChatView(QString strBuddyId, QWidget *parent = nullptr);
	~IMPerChatView();
	IMPerChatDispatcher* dispatcher();
	IMPerChatStore* store();
	IMPerChatViewModel* vm();

	WId winId() const;

	QWebEngineViewDelegate *getWebView();
	QTextEdit* getTextEditSend();

	void startInputting();
	void endInputting();

signals:

public slots:
	void slotSetNickNameAndBuddyId(QString strText, QString strBuddyID);
	void slotClickedSetFont();
	void slotClickedShake();
	void slotInsertExpressNormalImagePath(QString strImgPath);
	void slotSelectExpress();
	void slotSendMessage();

	void slotClickedRedPacket();
	void slotCloseGivePackWidget();
	void slotClickedPicture();
	void slotClickedCutPicture();
	void slotOpenPerLog();
	void slotPerFile();

	void slotClickedSendLetter();
	void slotClickedSecretImage();
	void slotClickedSecretFile();

	void slotClickedAddGroup();
	void slotClickedNotice();

	void slotClickedTransfer();
	void slotClickedETH();
	void slotClickedBTC();
	void slotClickedEOS();

	void slotCopy();
	void slotCut();
	void slotPaste();
	void slotDel();

	void slotVideoPlay(QString mediaPath);
	void slotCloseVideoWidget();
	void slotOpenFile(QString msgID);
	void slotOpenDocument(QString msgID);
	void slotCancelLoadorDownLoad(QString msgId);
	void slotSendFileByID(QString msgID);
	void slotOpenLink(QString link);
	void slotOpenSecret(QString msgID);
	void slotMsgID(QString msgID);
	void slotPopUpMenu(bool isShowCopy, bool isShowTransmit, QString msgId);
	void slotClickUserHeader(QString msgID);
	void slotWebViewRenderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode);

	void slotEndInputting();
	void slotUserInputting();
	void slotInputTimeOut();

	void slotSendScreenShotPic();
	void slotScreenCanclePixMap();
	void slotCloseEnterWidget();
	void slotCloseDetailWidget();
	void slotPacketStatus(bool valid);
	void slotGetPacketResult(QString result);

	void slotClosePacketWidget();
	void slotOpenPacket(QString msgID);

	void slotWebViewCopy();
	void slotFileViewCopy();
	void slotReSend();
	void slotReLoad();
	void slotWebViewTransmit();
	void slotWebViewClear();

	void slotCloseWalletLeave();
	void slotWalletMenu();
};

#endif // IMPERCHATVIEW_H
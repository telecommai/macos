#ifndef IMMAINWIDGET_H
#define IMMAINWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QTimer>
#include <QDesktopWidget>
#include <QButtonGroup>
#include <qrect.h>

#include "FunctionWidget.h"
#include "imusermessage.h"
#include "netwarningwidget.h"

#ifdef Q_OS_WIN
#include <windows.h>
#else
#include <qsystemtrayicon.h>
#endif

#ifndef Q_OS_WIN
#ifdef Q_OS_MACOS
#include <IOKit/pwr_mgt/IOPMLib.h>
#include <IOKit/IOMessage.h>
#endif
#include "xsystraymeauaction.h"
#include <QWidgetAction>

enum CursorPos{ Default, Right, Left, Bottom, Top, TopRight, TopLeft, BottomRight, BottomLeft };
struct pressWindowsState
{
    bool    MousePressed;
    bool   IsPressBorder;
    QPoint  MousePos;
    QPoint  WindowPos;
    QSize PressedSize;
};
#endif

#ifdef Q_OS_WIN
#include "CSysTrayIcon.h"
#endif

namespace Ui {
    class IMMainWidget;
}

#ifndef GET_X_LPARAM
#define GET_X_LPARAM(lp)                        ((int)(short)LOWORD(lp))
#endif  // GET_X_LPARAM
#ifndef GET_Y_LPARAM
#define GET_Y_LPARAM(lp)                        ((int)(short)HIWORD(lp))
#endif  // GET_Y_LPARAM

class Shadow;
class AboutWidget;
class MenuWidget;

class IMMainWidget : public QWidget
{
    Q_OBJECT

public:
    IMMainWidget(QWidget *parent = 0);
    ~IMMainWidget();

    static IMMainWidget* self();

    void setNikeName(QString nickName);

    void setHeaderImage(QPixmap headerImage);

    void addWidget(QWidget *);

    void setCurrentWidget(int);

    void setAppVersion(QString version);

    void setAppName(QString name);

    void StartMessageFlash(int type, QString imagePath, MessageInfo *messageInfo); 
    void StopMessageFlash();  

#ifdef Q_OS_MACOS
    int registerForSystemSleep();
    void deregisterForSystemSleep();
    static void handleSleepCallBack( void * refCon, io_service_t service,natural_t messageType, void * messageArgument);
    void DealMacSystemSleep();
    void DealMacSystemPowerOn();

    void onNotifyClicked(const QString& userID);
    void onNotifyReplied(const QString& userID, const QString &reply);

    void NotifyNotice(QString title,QString userID,QString strMsg);
#endif
protected:

    void paintEvent(QPaintEvent * event);
    void moveEvent(QMoveEvent *event);
    void resizeEvent(QResizeEvent* event);
    void changeEvent(QEvent * event);
	void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
    bool eventFilter(QObject *obj, QEvent *e);
    bool nativeEvent(const QByteArray &eventType, void *message, long *result);

#ifndef Q_OS_WIN
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveRect(const QPoint &p);
    void enterEvent(QEvent *event);
    pressWindowsState m_state;
    int m_border;
    CursorPos m_curPos;
#endif
public slots:
   
    void show();
   
    void slotExit();
  
    void slotFullScreen();
    
    void slotCheckWidget(int, bool);

    void slotSysTrayIconClicked();

	void slotNetWarning(bool);


#ifdef  Q_OS_WIN

	void slotIgnoreBtnClicked();

	void slotItemOfMsgBoxClicked(QString id, int funcType);
#endif

#ifndef Q_OS_WIN
    void slotSysTrayIconClickedMac(QSystemTrayIcon::ActivationReason reason);
#endif

    void slotSetMainWidgetStatusLabel(QString msg);

    void slotDealTrayIconFlash(QString buddyID);  
    void slotMessageRevFlashTime(); 
    void slotShowAllClicked();     

    void slotCountMessage(int num);

    void slotContactsMessageNum(int num);

    void slotClickedDock(); 

    void slotGlobalMouseMouse();

    void slotQuickOpen();

    void slotTriggered();
private:
    
    void registerHandle();

    void CreateTrayMenu();
	
#ifdef Q_OS_WIN
	void loadMsgNotifyBox();
#endif

signals:
    void sigExit();        
    void sigUserProfile(); 

    void sigMenuItem(QString);

    void sigDormancyState(bool);   

    void sigTrayOpenChat(int type, QVariant buddyID);

    void sigNewApply();

    void sigOpenChat(int ,QVariant);

    void sigNotifyReplied(QString userID,QString reply);

    void sigSettings();

    void sigParseScreenCutMessage(QString strMsg);

    void sigUpdateBuddyHeaderImagePath(int nIMUserID, QString headerPath);

	void sigUpdateBuddyNickName(int nIMUserID, QString nickName,int nGroupID);

	void sigCheckUpdate();

	void sigTipMessage(int, QString, QString);

	void sigAskExit();
	void sigAnswerExit();
	void sigDestroyIcon();
	void sigSendFlashStatus(bool);
private:
    Ui::IMMainWidget *ui;
    Shadow *shadow;  
    QPoint mouse;  
  
    QButtonGroup *buttonGroup; 
   
	FunctionWidget *functionWidget;
    MenuWidget *menuWidget;

    QString mAppVersion;

    QString mMessageRevHeaderImg;
    int mMessageRevType;
    QTimer *mMessageRevFlashTime;  
    int mMessageRevFlashNum;
    bool mFlashingFlag;
	NetWarningWidget * m_pNetWarning;
	bool bNetWarn;

    static IMMainWidget* pThis;


#ifdef Q_OS_WIN
    CSysTrayIcon mSysTrayIcon;
#else
    QSystemTrayIcon mSysTrayIcon;
    xSysTrayMeauAction *mAction;
    QWidgetAction *mWidgetAction;
    QMenu *mTrayIconMenu;
    static IMMainWidget* main_window_;
#ifdef Q_OS_MACOS
    bool is_registered_;
    IONotificationPortRef  notify_port_ref_;
    io_object_t            notifier_object_;
#endif
#endif
};

#endif // IMMAINWIDGET_H

#pragma once

#include <QObject>
#include <QMenu>
#include <QAction>
#include <windows.h>
#include <QLabel>
#include <QAbstractNativeEventFilter>
#include <qrect.h>

class CSysTrayIcon : public QObject, public QAbstractNativeEventFilter
{
	Q_OBJECT

public:
	CSysTrayIcon(QObject *parent=0);
	~CSysTrayIcon();

	void CreateTrayIcon(QIcon icon);
	void setIcon(QIcon icon);
	QPoint getTrayMenuPos();
private:
	void CreateTrayMenu();
	void CreateRightMenu(int x, int y);
	bool nativeEventFilter(const QByteArray & eventType, void * message, long * result);
signals:
	void sigExit();

	void sigabout();

	void sigMouseLBttonDown();

	void sigMouseSuspendIn(QPoint);
	void sigMouseSuspendOut(QPoint, int);
public slots:
	void slotSysTrayExit();
	void slotReceiveBoxRect(QRect);
	void slotGetFlashStatus(bool);
private:
	QMenu *mTrayMenu;       
	QAction *ActionCheckUpdate; 
	QAction *ActionExit;       
	QLabel *mLabel;
	NOTIFYICONDATA    nid;
	QPoint sysTrayPos;
	QPoint globalPos;
	QPoint localPos;
	QPoint pointBuff;
	bool isMouseInTray = true;
	bool isMouseOutTray = true;
	bool outOfTrayFlag = true;
	bool outOfWindowFlag = true;
	bool flag = true;
	int suspendTimes;	
	QRect boxRect;
	bool isFlash = false;
};

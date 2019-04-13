#ifndef SETTINGSWIDGET_H
#define SETTINGSWIDGET_H

#include <QWidget>
#include "common.h"
namespace Ui {class SettingsWidget;};

class Shadow;
class QAccWidget;
class QPushButton;
class SettingsWidget : public QWidget
{
	Q_OBJECT

public:
	SettingsWidget(QWidget *parent = 0);
	~SettingsWidget();

	void changeEvent(QEvent * event);
	void moveEvent(QMoveEvent *event);
	void resizeEvent(QResizeEvent* event);

	void mousePressEvent(QMouseEvent *event);        
	void mouseReleaseEvent(QMouseEvent *event);      
	void mouseMoveEvent(QMouseEvent *event);   

	void setUserInfo(UserInfo info);
	void setScreenCut(QString strValue);
	void setQuickOpen(QString strValue);
	void setSendMsg(int iValue);
	void setCheckKey(int iValue);
	void setClear(QString strValue);
	void setUserPath(QString strValue);
	void setLanguage(QString strValue);

protected:
	void closeEvent(QCloseEvent * event);

public slots:
	void show();
private slots:
	void slotAccount();
	void slotCurrency();
	void slotKey();
	void slotAbout();
	void slotThemeSwitch();
signals:
	void sigSettingsClose();
	void sigCancel();
	void sigScreenCut(QString);
	void sigQuickOpen(QString);
	void sigSendMsg(int);
	void sigChangePath(QString);
	void sigClearPath();
	void sigCheckKey(int);
	void sigLanguage(QString);

private:
	Ui::SettingsWidget *ui;
	Shadow *shadow;
	QPoint mouse;
	UserInfo m_userInfo;
	QPushButton *Label1;
	QPushButton *Label2;
	QPushButton *Label3;
	QPushButton *Label4;
	QPushButton *Label5;
};

#endif // SETTINGSWIDGET_H

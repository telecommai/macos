#ifndef LEAVEMESSAGEWIDGET_H
#define LEAVEMESSAGEWIDGET_H

#include <QWidget>
#include "imbuddy.h"
#include "shadow.h"

namespace Ui {
	class LeaveMessageWidget;
}

class LeaveMessageWidget : public QWidget
{
	Q_OBJECT

public:
	LeaveMessageWidget(QWidget *parent = 0);
	~LeaveMessageWidget();
	void changeEvent(QEvent * event);
	void moveEvent(QMoveEvent *event);
	void resizeEvent(QResizeEvent* event);
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        
	void OnInitBuddyInfo(QString strBuddyID);
	void OnInitGroupInfo(QString strGroupID);
	void OnSetPicPath(QString strPath, int nType /*= 0*/);
	QString GetExeDir();
signals:
	void sigApplyFailed();
	void sigApplySuccessed();
public slots:
	void show();
private slots:
	void slotOnOk();
	void slotOnEsc();
	void slotTempFriend(bool bRes, QString strRes); 
	void slotTempGroup(bool bRes, QString strRes); 
	void doHttpAddPersonResultInfo(bool bResult, QString strResult);
	void slotDoAddPerson(QString strMessage, QString strOtherName);
	void slotShareBuddyHeader(bool);
private:
	Ui::LeaveMessageWidget* ui;
	QPoint mouse;
	Shadow *shadow;
	int iType;
	QString m_strBuddyId;
	BuddyInfo m_stTmpInfo;
	QString m_strGroupId;
	GroupInfo m_stTmpGroupInfo;
};

#endif // LEAVEMESSAGEWIDGET_H

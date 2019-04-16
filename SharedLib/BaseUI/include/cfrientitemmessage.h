#ifndef CFRIENTITEMMESSAGE_H
#define CFRIENTITEMMESSAGE_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLayout>
#include <QFile>
#include <QDateTime>
#include "qlabelheader.h"

class CFrientItemMessage : public QWidget
{
	Q_OBJECT

public:
	CFrientItemMessage(QWidget *parent);
	~CFrientItemMessage();

	void OnInitMessage(QString);                  
	void OnSetPicPath(QString strPath, int nType = 0);    
	void OnSetNickNameText(QString strText, QString styleSheet = ""); 
	void OnSetAutoGrapthText(QString strText, QString styleSheet = ""); 
	void OnSetMessageTime(int time_t, QString styleSheet = ""); 
	void OnSetMessageNum(QString strNum);

	int getMessageNum();
	QDateTime getLastTime();  
	QString GetNikeName(); 

	QLabel  *mNickName;  
	QPushButton *mCloseBtn;
	QString		 mStrNickName;			

signals:
	void sigCurrentChatClose(QString);

	void sigChangeMessageNum();

private slots:
	void slotCurrentChatClose();

private:
	void initMessageItemLayout();				
	void removeLayoutSpacing(QLayout* layout);  
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font);  
	void enterEvent(QEvent * event);       
	void leaveEvent(QEvent * event);       

private:
	QLabelHeader *mHeadImage; 
	QLabel  *mAutoGraph; 
	QLabel  *mMessageTime; 
	QLabel  *mMessageNum;   
};

#endif // CFRIENTITEMMESSAGE_H

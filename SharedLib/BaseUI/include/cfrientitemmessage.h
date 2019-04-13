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
	void initMessageItemLayout();				// 消息一栏的item 的布局风格
	void removeLayoutSpacing(QLayout* layout);  // 去掉layout的控件之间的间隙
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font);   // 获取 src_str 适配于 child_widget控件的字符串(加上...的简略信息)

	void enterEvent(QEvent * event);         // 鼠标移入事件
	void leaveEvent(QEvent * event);         // 鼠标移出事件 

private:
	QLabelHeader *mHeadImage;  //头像
	QLabel  *mAutoGraph; //签名/聊天记录
	QLabel  *mMessageTime; // 消息发送时间
	QLabel  *mMessageNum;   //消息数目
};

#endif // CFRIENTITEMMESSAGE_H

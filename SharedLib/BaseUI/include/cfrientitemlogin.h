#ifndef CFRIENTITEMLOGIN_H
#define CFRIENTITEMLOGIN_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QFile>
#include "qlabelheader.h"

class CFrientItemLogin : public QWidget
{
	Q_OBJECT

public:
	CFrientItemLogin(QWidget *parent);
	~CFrientItemLogin();

	void OnInitLoginEdit(QString userID);                 
	void OnSetNickNameText(QString strText, QString styleSheet = "");  
	void OnSetPicPath(QString strPath, int nType = 0);     
	QString getLoginUserID();         

	QPushButton *mCloseBtn;
	QLabel  *mNickName;  
	QString		 mStrNickName;			

signals:
	void sigLoginEditClose(QString);

private slots:
    void slotLoginEditClose();

private:
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font);  
private:
	QLabelHeader *mHeadImage;  
};

#endif // CFRIENTITEMLOGIN_H

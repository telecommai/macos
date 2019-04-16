#ifndef CFRIENTITEMBUDDY_H
#define CFRIENTITEMBUDDY_H

#include <QWidget>
#include <QLabel>
#include <QLayout>
#include <QFile>
#include "qlabelheader.h"

class CFrientItemBuddy : public QWidget
{
	Q_OBJECT

public:
	CFrientItemBuddy(QWidget *parent);
	~CFrientItemBuddy();

	void OnInitContacts(QString);         
	void OnSetPicPath(QString strPath);   

	void UpdateHeaderImage(QPixmap pix);

	void OnSetNickNameText(QString strText, QString styleSheet = "");  
	void OnSetAutoGrapthText(QString strText, QString styleSheet = "");

	QLabel  *mNickName; 
	QString		 mStrNickName;				

private:
	void initContactsItemLayout();				
	void removeLayoutSpacing(QLayout* layout);  
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font);   
private:
	QLabelHeader *mHeadImage; 
	QLabel  *mAutoGraph;
};

#endif // CFRIENTITEMBUDDY_H

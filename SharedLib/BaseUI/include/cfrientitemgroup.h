#ifndef CFRIENTITEMGROUP_H
#define CFRIENTITEMGROUP_H

#include <QWidget>
#include <QLabel>
#include "qlabelheader.h"
#include <QLayout>
#include <QFile>

class CFrientItemGroup : public QWidget
{
	Q_OBJECT

public:
	CFrientItemGroup(QWidget *parent);
	~CFrientItemGroup();

	void UpdateHeaderImage(QPixmap pix);

	void OnInitGroup(QString strUserID);   
	void OnSetPicPath(QString strPath);    
	void OnSetNickNameText(QString strText, QString styleSheet = "");  

	QLabel  *mNickName;
	QString		 mStrNickName;			

private:
	void initGroupItemLayout();                 
	void removeLayoutSpacing(QLayout* layout);  
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font); 

private:
	QLabelHeader *mHeadImage; 
};

#endif // CFRIENTITEMGROUP_H

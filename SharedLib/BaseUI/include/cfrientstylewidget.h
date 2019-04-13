#ifndef CFRIENTSTYLEWIDGET_H
#define CFRIENTSTYLEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QDir>
#include <QEvent>
#include <QPainter>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QBitmap>
#include <QSpacerItem>
#include <QDateTime>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>

#include "qlabelheader.h"

#ifdef Q_OS_WIN
#pragma execution_character_set("utf-8")
#endif

#ifndef Max
#define Max(a,b)  (a) > (b) ? (a) : (b) 
#endif  // Max

class CFrientStyleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CFrientStyleWidget(QWidget *parent = 0);
    ~CFrientStyleWidget();

	enum layout_type
	{
		contacts = 0,		
		group,              
		message,			
		chat,				
		group_member, 		
		manager             
	};

	enum item_list_type
	{
		chat_list = 1 ,     
		newfriend_list = 2, 
		creategroup_list = 3
	};
signals:
    void sigLoginEditClose(QString);
	void sigCurrentChatClose(QString);
	void sigAddPerson(QString);

	void sigRemoveBuddyFromCGMemberList(QString);		

	void sigNumChanged();
	void sigApplyFriend(QString);
	void sigRejectFriend(QString);
public slots:
    void doLoginEditClose();
    void doCurrentChatClose(); 
	void doAddPerson();

	void OnCGRemoveBtnClicked();			

	void doApplyFriend();
	void doRejectFriend();
public:
    void OnSetHeadImageSize(int nWidth = 40,int nHeight = 40);  
    void OnSetNickNameText(QString strText,QString styleSheet="");  
    void OnSetAutoGrapthText(QString strText,QString styleSheet="");
	void OnSetMessageTypeText(QString strText, QString styleSheet); 
    void OnSetMessageTime(QString strText,QString styleSheet="");
	void OnSetPicPath(QString strPath, int nType = 0);     
	void onSetHeaderImage(QPixmap);
	void onSetIdentity(int mana);     
    void OnInitMessage(QString);                
    void OnInitContacts(QString);               
	void OnInitGroup(QString strUserID);        
    void OnInitLoginEdit(QString);              
    void OnInitChat(QString strUserID);			
    void OnSetMessageNum(QString strNum);
	QString OnGetMessageNum();
    QString OnGetHeaderImagePath();
    void OnInitGroupUserList(QString strGroupUserID); 
	void onInitGroupAtList(QString strGroupUserID);
	void OnInitLogUserList(QString strGroupUserID);
	void onInitManagerUserList(QString strUserID, bool hasRead = false);
	void onInitManagerApplyGroup(QString strUserID, QString group, bool hasRead = false);
	void OnInitMessageBoxList(QString strBuddyID);
	void OnInitSearchBuddyList(QString strBuddyID);

	void OnSetPicPathByHttp(QString strPath, QString strDefaultImage = ":/PerChat/Resources/person/temp.png");

	void OnSetAddPersonButtonText(QString strText);

	QString GetNikeName();  
	QString GetAutoGraph();
	QString GetStrTime();
	QPushButton* closeButton();      
	QString getLoginUserID();        
	bool getCGCheckBtnStatus();										
	void changeCGCheckBtnStatus();									
	void OnInitCreateGroupContactsList(QString strBuddyID);         
	void OnInitCreateGroupMemberList(QString strBuddyID);			
	
	void OnInitAddCreateList(QString strTitle);

	void OnInitDevice(QString strDeviceName); 

	void OnInitNewFriendList(QString strBuddyID);

	QDateTime getLastTime();  
protected: 
	void resizeEvent(QResizeEvent * event);  
	void enterEvent(QEvent * event);         
	void leaveEvent(QEvent * event);         
private:
	void InitLayout(int layout_type);          
	void initChatItemLayout();					
	void initGroupItemLayout();                
	void initManagerItemLayout();              
	void initMessageItemLayout();				
	void initContactsItemLayout();				
	void initGroupMemberItemLayout();			
	void removeLayoutSpacing(QLayout* layout); 
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font);  
private slots:
	void doClickAcceptBtn();
signals:
	void sigClickAcceptBtn();
	
private:
	QLabelHeader  *mHeadImage;
    QLabel  *mAutoGraph;
	QLabel  *mMessageNum; 
    QLabel  *mMessageTime; 
    QString mstrPicPath;   
	
	bool	mCGCheckBtnIsChecked; 
	int     mItemListType;     
	QLabel *identity;   
public:
    QPushButton *mCloseBtn; 
    QLabel  *mNickName; 
	QPushButton *mAddPerson; 
	QPushButton *mAcceptBtn;  
	QLabel  *mMessageType;
	QLabel		*mCreateGroupCheckBtn;		
	QPushButton *mCreateGroupRemoveBtn; 
	QString		 mStrNickName;				
};

void circleHeaderImage(QPixmap &headerImage);

#endif // CFRIENTSTYLEWIDGET_H

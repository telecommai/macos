#ifndef CREATEGROUPWIDGET_H
#define CREATEGROUPWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include "httpnetworksharelib.h"
#include "basewindow.h"
#include "cfriendlistwidgetbase.h"
#include "imbuddy.h"
#include "common.h"
#include "stdafx.h"
#include "shadow.h"
#include "pinyin.h"
#include "messagebox.h"

namespace Ui {
	class CreateGroupWidget;
}

class CreateGroupWidget : public BaseWindow
{
	Q_OBJECT

	enum http_request_type
	{
		not_mine_request = 0,  
		create_group = 1,      
		add_buddys_to_group    
	};

public:
	CreateGroupWidget(QWidget *parent = 0);
	~CreateGroupWidget();
#ifdef Q_OS_LINUX
    void setLinuxCenter();
#endif

    void selectContact(QString buddyID);

private:
	QString     doCreateGroupName();     

public slots:
	void show();

protected:
	void changeEvent(QEvent * event);
	void moveEvent(QMoveEvent *event);
	void resizeEvent(QResizeEvent* event);

	bool eventFilter(QObject *, QEvent *);

	private slots:
	void slotSearch(QString);
	void slotClickSearchList(QListWidgetItem *);

private:
	void		initTitleBar();								
	void		initChildWidgetLayout();					
	void		initContactsList();							
	void		initClassMember();							
	void		cleanList(CFriendListWidgetBase* list);		
	void		insertBuddyToList(CFriendListWidgetBase* list, QString str_data, QString str_buddy_id, QString str_pic_path, QString str_nick_name, int n_height=50);  // 向 ui.m_listContactsList 插入一个好友信息的item
	void		removeItemFromList(CFriendListWidgetBase* list, const QString& buddy_id);  
	void		updateGroupMembersCountLabel();									
	void		doAddBuddyToGroupMemberList(const QString& buddy_id);			
	void		doRmBuddyInGroupMemberList(const QString& buddy_id);			
	void		doAddBuddysInMemberListToGroup(const QString& group_id);		
	QStringList	doGetBuddysIdInMemberList();									
	void		doParseGroupInfoFromJsonStr(const QString& str_json);			
	
	private slots:
	void		OnContactsListItemClicked(QListWidgetItem* the_item);			
	void		OnMemberListItemRemoveBtnClicked(const QString& buddy_id);		
	void		OnConfirmBtnClicked();											
	void		OnGetHttpResult(bool success, const QString& result);			
signals: 
	void		sigInsertGroupItemToGroupList(GroupInfo group_info);			
	void		sigCreateGroupSuccess(QString group_id);						
private:
	Ui::CreateGroupWidget *ui;
	UserInfo			m_stUserInfo;			
	GroupInfo			m_stGroupInfo;			
	bool				m_bWaitForAddBuddysToGroupHttpResult;   
	QList<BuddyInfo>	m_lstBuddysInfo;		
	int					m_nHttpRequestType;		
	QString mGroupName;
	Shadow *shadow;
};

#endif // CREATEGROUPWIDGET_H

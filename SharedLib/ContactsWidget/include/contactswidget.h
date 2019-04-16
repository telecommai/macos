#ifndef CONTACTSWIDGET_H
#define CONTACTSWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QMouseEvent>
#include <QPropertyAnimation>
#include <QMenu>



namespace Ui {
	class ContactsWidget;
}
class ContactMenuWidget;
class perProfileWidget;
class GroupProfileWidget;
class QListWidget;

class ContactsWidget : public QWidget
{
	Q_OBJECT

public:
	ContactsWidget(QWidget *parent = 0);
	~ContactsWidget();

	void addWidget(QWidget *);
	void setWidget(QWidget *);

	perProfileWidget *getPerProfile();
	GroupProfileWidget *getGroupProfile();
	QListWidget * getNewFriendProfile();
	QWidget * getTabsWidgetProfile();

protected:
	bool eventFilter(QObject *obj, QEvent *e);

private slots:
    void slotSwitchTabs(int id, bool checked);

	void slotEditSearchLine(QString);
	void slotClickCancelSearch();

	void slotAddBtnClicked();

	void slotCanclePerProfileWid();
	void slotPerProfileWid();

signals:
	void sigAddCreateGroup();
	void sigAddPerson();
	void sigSearchText(QString);
	void sigFilter(int);
	void sigOpenPic(QString, QList<QString>*, QWidget*);
	void sigSendPerOrGroupFlag(int);
private:
	Ui::ContactsWidget *ui;

	QButtonGroup *buttons;

	QMenu *mAddMenu;
	QAction *mCreateGroup;
	QAction *mAddPerson;
	void setStyleFunc();
	ContactMenuWidget* pmenuWidget;
	bool flag;
};

#endif // CONTACTSWIDGET_H

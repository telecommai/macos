#ifndef USERPROFILEWIDGET_H
#define USERPROFILEWIDGET_H

#include <QWidget>
#include <QFile>
#include <qbitmap.h>
#include <QPushButton>
#include <QPainter>
#include <qmath.h>
#include <QMouseEvent>
#include "common.h"

namespace Ui {
	class UserProfileWidget;
}

class UserProfileWidget : public QWidget
{
	Q_OBJECT

public:
	UserProfileWidget(QWidget *parent = 0);
	~UserProfileWidget();

	void setUserInfo(UserInfo);

	void setHeaderImage(QPixmap);

protected:
	bool eventFilter(QObject *obj, QEvent *e);

signals:
	void sigOpenAvatarWidget();
	void sigOpenUserInfoWidget();

	void sigDisableStrangers(bool);

	private slots:
	void slotClickStrangersBtn();
	void slotClickQRcodeBtn();
	
private:
	Ui::UserProfileWidget *ui;

	QPoint mouse; 

	UserInfo userInfo;

	QPushButton *closeBtn;
	QPushButton *headerBtn;
	QPushButton *editBtn;
};

#endif // USERPROFILEWIDGET_H

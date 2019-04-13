#pragma once

#include <QWidget>
#include <QDebug>
#include <QPainter>
#include <qmath.h>
#include "common.h"

namespace Ui {
	class UserInfoWidget;
}

class UserInfoWidget : public QWidget
{
	Q_OBJECT

public:
	UserInfoWidget(QWidget *parent = Q_NULLPTR);
	~UserInfoWidget();

	void setUserInfo(UserInfo);

protected:
	bool eventFilter(QObject *obj, QEvent *e);
	void paintEvent(QPaintEvent * event);

signals:
	void sigUserInfo(UserInfo);

private slots:

	void slotUserInfo();

private:
	Ui::UserInfoWidget *ui;

	QPoint mouse;  
};

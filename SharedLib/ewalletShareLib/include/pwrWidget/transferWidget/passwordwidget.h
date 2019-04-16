#pragma once

#include <QWidget>
#include <QCryptographicHash>
#include "messagebox.h"

namespace Ui { class PasswordWidget; };

class PasswordWidget : public QWidget
{
	Q_OBJECT

public:
	PasswordWidget(QString password, QWidget *parent = NULL);
	~PasswordWidget();

	public slots:
	void show();

signals:
	void sigPasswordTrue();

private slots:
void slotClickedEnterBtn();

private:
	void mousePressEvent(QMouseEvent *event);        //单击
	void mouseReleaseEvent(QMouseEvent *event);      //释放
	void mouseMoveEvent(QMouseEvent *event);         //移动

private:
	Ui::PasswordWidget *ui;

	QPoint mouse;

	QString password;
};

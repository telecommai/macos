#pragma once

#include <QWidget>
#include <QEvent>
#include <QFileDialog>
#include <QUuid>
#include <QListWidgetItem>
#include "stdafx.h"
#include "opdatamanager.h"
#include "oprequestsharelib.h"
#include "messagebox.h"

namespace Ui {
	class SecretImageWidget;
}

class SecretImageWidget : public QWidget
{
	Q_OBJECT

public:
	SecretImageWidget(QString userID, QWidget *parent = Q_NULLPTR);
	~SecretImageWidget();

public slots:
	void show();

private slots:
	void slotCommKey(QString publicKey, QString privateKey);

	void slotClickedSelectBtn();
	void slotClickedEnterBtn();

	void slotCancleFile(QListWidgetItem *);

	void slotUplaodImage(bool, QByteArray);

signals:
	void sigSecretImage(QString content);

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

private:
	Ui::SecretImageWidget *ui;

	QPoint mouse;

	QString userID;
	QString publicKey;
};

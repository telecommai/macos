#pragma once

#include <QWidget>
#include <QEvent>
#include <QFileDialog>
#include <QListWidgetItem>
#include <QUuid>
#include "stdafx.h"
#include "opdatamanager.h"
#include "oprequestsharelib.h"
#include "messagebox.h"

namespace Ui {
	class SecretFileWidget;
}

class SecretFileWidget : public QWidget
{
	Q_OBJECT

public:
	SecretFileWidget(QString userID, QWidget *parent = Q_NULLPTR);
	~SecretFileWidget();

public slots:
	void show();

private slots:
	void slotCommKey(QString publicKey, QString privateKey);

	void slotClickedSelectBtn();
	void slotClickedEnterBtn();

	void slotCancleFile(QListWidgetItem *);

	void slotUplaodFile(bool, QByteArray);

signals:
	void sigSecretFile(QString content);

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

	QString bytesToString(qint64 bytes);

private:
	Ui::SecretFileWidget *ui;

	QPoint mouse;

	QString userID;
	QString publicKey;
};

#pragma once

#include <QWidget>
#include <QEvent>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUuid>
//#include "zoomimg.h"
#include "zooming/picwidget.h"
#include "stdafx.h"
#include "opdatamanager.h"
#include "oprequestsharelib.h"
#include "messagebox.h"
#include "openletterwidget.h"

namespace Ui {
	class EnterPasswordWidget;
}

class EnterPasswordWidget : public QWidget
{
	Q_OBJECT

public:
	EnterPasswordWidget(MessageInfo msg, QWidget *parent = Q_NULLPTR);
	~EnterPasswordWidget();

public slots:
	void show();

private slots:
   void slotCommKey(QString publicKey, QString privateKey);

   void slotEnterPassword(QString);
	void slotClickedEnterBtn();

	void slotDownloadFile(bool);

	void slotShowPassTip();
	void slotOpenPassWidget();

	void slotRemoveSecretFile();

	void slotPicClose();

signals:
	void sigQuit();
	void sigOpenPic(QString, QList<QString>*, QWidget*);
private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        
	
private:
	Ui::EnterPasswordWidget *ui;

	QPoint mouse;

	MessageInfo msgInfo;

	QString cipherKey;

	QTimer *timer;
	QString secretFilePath;

	PicWidget* m_pPicWidget;
};

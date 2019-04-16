#pragma once

#include <QWidget>
#include <QEvent>
#include "opdatamanager.h"
#include "oprequestsharelib.h"
#include "messagebox.h"

namespace Ui {
	class SecretLetterWidget;
}

class SecretLetterWidget : public QWidget
{
	Q_OBJECT

public:
	SecretLetterWidget(QString, QWidget *parent = Q_NULLPTR);
	~SecretLetterWidget();

public slots:
	void show();

private slots:
    void slotCommKey(QString publicKey, QString privateKey);

	void slotClickedEnterBtn();

signals:
	void sigSecretLetter(QString password, QString text, QString message);

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        
	
private:
	Ui::SecretLetterWidget *ui;

	QPoint mouse;

	QString userID;
	QString publicKey;
};

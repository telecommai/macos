#pragma once

#include <QWidget>
#include <QJsonDocument>
#include "messagebox.h"
#include "opdatamanager.h"

namespace Ui {
	class OpenLetterWidget;
}

class OpenLetterWidget : public QWidget
{
	Q_OBJECT

public:
	OpenLetterWidget(QString data, QWidget *parent = Q_NULLPTR);
	~OpenLetterWidget();

	void directOpen(QString);

public slots:
	void show();

private slots:
    void slotClickedEnterBtn();

private:
	void mousePressEvent(QMouseEvent *event);        
	void mouseReleaseEvent(QMouseEvent *event);      
	void mouseMoveEvent(QMouseEvent *event);         

signals:
	void sigClose();

private:
	Ui::OpenLetterWidget *ui;

	QPoint mouse;

	QString letter;
};

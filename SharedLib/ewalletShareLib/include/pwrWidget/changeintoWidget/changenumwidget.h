#pragma once

#include <QWidget>
#include <QMouseEvent>

namespace Ui { class ChangeNumWidget; };

class ChangeNumWidget : public QWidget
{
	Q_OBJECT

public:
	ChangeNumWidget(QWidget *parent = Q_NULLPTR);
	~ChangeNumWidget();

signals:
	void sigChangeNum(QString);

private slots:
	void slotSetChangeNum();

private:
	void mousePressEvent(QMouseEvent *event);      
	void mouseReleaseEvent(QMouseEvent *event);    
	void mouseMoveEvent(QMouseEvent *event);       

private:
	Ui::ChangeNumWidget *ui;

	QPoint mouse;
};

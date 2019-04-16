#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include <qmath.h>
namespace Ui { class QuestionBox; };

class QuestionBox : public QWidget
{
	Q_OBJECT

public:
	QuestionBox(QWidget *parent = Q_NULLPTR);
	~QuestionBox();

	void init(QString title, QString text);

	QVariant getData() { return data;  };
	void setData(QVariant map) { this->data = map; };

signals:
	void sigCancel();
	void sigEnter();

private slots:
	void slotEnter();
	void slotCancel();

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

	void paintEvent(QPaintEvent * event);

private:
	Ui::QuestionBox *ui;

	QPoint mouse;

	QVariant data;
};

#pragma once

#include <QWidget>
#include <QLineEdit>
#include <QMouseEvent>
#include <QPainter>
#include <qmath.h>

namespace Ui { class InputBox; };

class InputBox : public QWidget
{
	Q_OBJECT

public:
	InputBox(QWidget *parent = Q_NULLPTR);
	~InputBox();

	static void tip(QWidget *parent, QString content, bool isNumber = false, QLineEdit::EchoMode mode = QLineEdit::Normal);

	void init(QString content, bool isNumber = false, QLineEdit::EchoMode mode = QLineEdit::Normal);

	QVariant getData(){ return data; };
	void setData(QVariant map) { this->data = map; };

	void setLineText(QString strValue, QString strBack = "");

	void setEmpty(bool bVal);

	void setEditFoucs();

signals:
	void sigClose();
	void sigEnter(QString);

	private slots:
	void slotEnter();
	void slotClose();

private:
	void mousePressEvent(QMouseEvent *event);      
	void mouseReleaseEvent(QMouseEvent *event);    
	void mouseMoveEvent(QMouseEvent *event);       

	void paintEvent(QPaintEvent * event);

private:
	Ui::InputBox *ui;

	QPoint mouse;

	QVariant data;

	bool m_bEmpty;
};

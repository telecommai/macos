#ifndef FLOATBUTTONWIDGET_H
#define FLOATBUTTONWIDGET_H

#include <QWidget>
namespace Ui {class FloatButtonWidget;};

class FloatButtonWidget : public QWidget
{
	Q_OBJECT

public:
	FloatButtonWidget(QWidget *parent = 0);
	~FloatButtonWidget();
	void setButtonStyle(QString strStyleSheet, QString strIcon);
	void enterEvent(QEvent *);
	void leaveEvent(QEvent *);
signals:
	void sigMoveOut();
	void sigMoveIn();

private:
	Ui::FloatButtonWidget *ui;
};

#endif // FLOATBUTTONWIDGET_H

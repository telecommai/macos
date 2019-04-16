#ifndef QACCWIDGET_H
#define QACCWIDGET_H
#include<qlabel.h>
#include <QWidget>
#include"qlabelheader.h"
namespace Ui {class QAccWidget;};

class QAccWidget : public QWidget
{
	Q_OBJECT

public:
	QAccWidget(QWidget *parent = 0);
	~QAccWidget();
	void setAvatar(QString);
	void setNickname(QString);
	void setId(QString);

signals:
	void sigquitLogin();

private:
	Ui::QAccWidget *ui;
};

#endif // QACCWIDGET_H

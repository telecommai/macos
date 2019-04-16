#ifndef NETWARNINGWIDGET_H
#define NETWARNINGWIDGET_H

#include <QWidget>
namespace Ui { class NetWarningWidget; };

class NetWarningWidget : public QWidget
{
	Q_OBJECT

public:
	NetWarningWidget(QWidget *parent = Q_NULLPTR);
	~NetWarningWidget();

private:
	Ui::NetWarningWidget *ui;
};
#endif
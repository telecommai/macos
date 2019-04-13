#ifndef QABOUTWIDGET_H
#define QABOUTWIDGET_H

#include <QWidget>
namespace Ui {class QAboutWidget;};

class QAboutWidget : public QWidget
{
	Q_OBJECT

public:
	QAboutWidget(QWidget *parent = 0);
	~QAboutWidget();
private slots:
	void slotOpenLink();

private:
	Ui::QAboutWidget *ui;
};

#endif // QABOUTWIDGET_H

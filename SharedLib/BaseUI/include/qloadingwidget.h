#ifndef QLOADINGWIDGET_H
#define QLOADINGWIDGET_H

#include <QWidget>
namespace Ui {class QLoadingWidget;};

class QLoadingWidget : public QWidget
{
	Q_OBJECT

public:
	QLoadingWidget(QWidget *parent = 0);
	~QLoadingWidget();

private:
	Ui::QLoadingWidget *ui;
	QMovie * m_pMovie;
};

#endif // QLOADINGWIDGET_H

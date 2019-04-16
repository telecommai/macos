#ifndef SCANLOGINWIDGET_H
#define SCANLOGINWIDGET_H

#include <QWidget>

namespace Ui {
	class ScanLoginWidget;
}

class ScanLoginWidget : public QWidget
{
	Q_OBJECT

public:
	ScanLoginWidget(QWidget *parent = 0);
	~ScanLoginWidget();

	void setHeaderImage(QString strHeaderPath);

	void setNikeName(QString strNikeName);
private:
	
	void OnInitStyleSheet();

public slots:
	
	void slotClickLogin();

signals:
	void sigTest();

private:
	Ui::ScanLoginWidget *ui;
};

#endif // SCANLOGINWIDGET_H

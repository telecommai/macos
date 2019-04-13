#ifndef SCANSHOWQRWIDGET_H
#define SCANSHOWQRWIDGET_H

#include <QWidget>
#include <QImage>

namespace Ui {
	class ScanShowQRWidget;
}

class ScanShowQRWidget : public QWidget
{
	Q_OBJECT

public:
	ScanShowQRWidget(QWidget *parent = 0);
	~ScanShowQRWidget();

	void OnInitStyleSheet();

	void showQR(QImage img);

	void showErro(QString errorMsg);

private:
	Ui::ScanShowQRWidget *ui;
};

#endif // SCANSHOWQRWIDGET_H

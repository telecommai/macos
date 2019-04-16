#pragma once

#include <QWidget>
#include <QMouseEvent>
#include <QClipboard>

namespace Ui { class WalletPriKeyWidget; };

class WalletPriKeyWidget : public QWidget
{
	Q_OBJECT

public:
	WalletPriKeyWidget(QWidget *parent = Q_NULLPTR);
	~WalletPriKeyWidget();


	void setPriKey(QString);

	private slots:
	void slotCopy();

private:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

private:
	Ui::WalletPriKeyWidget *ui;

	QPoint mouse;
};

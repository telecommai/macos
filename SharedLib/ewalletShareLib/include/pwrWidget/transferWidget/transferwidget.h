#pragma once

#include <QWidget>
#include "passwordwidget.h"

namespace Ui { class TransferWidget; };

class TransferWidget : public QWidget
{
	Q_OBJECT

public:
	TransferWidget(QWidget *parent = Q_NULLPTR);
	~TransferWidget();

	void setAddress(QString);
	void setEnergySum(QString);
	void setPassWord(QString);

	void setBuddyId(QString);
	void setBuddyAddress(QString);


	void InitAsWindow();

public slots:
	void show();
	

signals:
	void sigTransfer(QString otherID, QString toAddress, QString miner, QString value,bool bmove);

private slots:
    void slotChangeMiner(int);

    void slotClickTransBtn();

	void slotTransfer();

	void slotClearText();

	void mousePressEvent(QMouseEvent *event);        //单击
	void mouseReleaseEvent(QMouseEvent *event);      //释放
	void mouseMoveEvent(QMouseEvent *event);         //移动

private:
	Ui::TransferWidget *ui;

	QString password;

	QPoint mouse;

	bool m_bMove;
};

#pragma once

#include <QWidget>
#include "opcommon.h"
#include "messagebox.h"
#include "inputbox.h"
#include <QCryptographicHash>

namespace Ui { class TurnOutWidget; };

class TurnOutWidget : public QWidget
{
	Q_OBJECT

public:
	TurnOutWidget(QWidget *parent = Q_NULLPTR);
	~TurnOutWidget();

	void setTurnOutData(ChildrenWallet);
	void setBalance(QString);
	void setPassWord(QString);
	void setBuddyAddress(QList<ChildrenWallet> BTCList);

	void InitAsWindow();

public slots:
	void show();

private slots:
	void slotClickTransBtn();
	void slotEnterWord(QString);
	void slotonIndexChanged(int);

	void mousePressEvent(QMouseEvent *event);        
	void mouseReleaseEvent(QMouseEvent *event);      
	void mouseMoveEvent(QMouseEvent *event);         

signals:
	void sigTurnOut(QString address, QString value);
	void sigTurnOut(QString userAddress, QString otherAddress, QString value);

private:
	Ui::TurnOutWidget *ui;

	ChildrenWallet wallet;
	QString passWord;

	QPoint mouse;

	bool m_bMove;
};

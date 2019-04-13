#pragma once

#include <QWidget>
#include "opcommon.h"
#include "messagebox.h"

namespace Ui { class ETHTurnOutWidget; };

class ETHTurnOutWidget : public QWidget
{
	Q_OBJECT

public:
	ETHTurnOutWidget(QWidget *parent = Q_NULLPTR);
	~ETHTurnOutWidget();

	void setTurnOutData(ChildrenWallet);
	void setBalance(QString);
	void setBuddyAddress(QList<ChildrenWallet> BTCList);
	void InitAsWindow();
	void setPassWord(QString word);
	void setBuddyId(QString);

	private slots:
	void slotClickTransBtn();
	void slotonIndexChanged(int);

	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

public slots:
	void show();
	void slotCloseWindow();

private slots:
	void slotEnterWord(QString);
signals:
	void sigTurnOut(QString from, QString to, QString value,QString buddyId,bool bIsWindow);

private:
	Ui::ETHTurnOutWidget *ui;

	ChildrenWallet wallet;

	QPoint mouse;

	QString passWord;

	bool m_bMove;

	QString buddyId;

};

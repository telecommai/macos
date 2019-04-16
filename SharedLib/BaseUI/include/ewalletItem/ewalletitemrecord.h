#pragma once

#include <QWidget>
namespace Ui { class EWalletItemRecord; };

class EWalletItemRecord : public QWidget
{
	Q_OBJECT

public:
	EWalletItemRecord(QWidget *parent = Q_NULLPTR);
	~EWalletItemRecord();
	
	void setData(QString address, QString time, QString data, bool isIn);

private:
	Ui::EWalletItemRecord *ui;
};

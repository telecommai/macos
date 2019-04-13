#pragma once

#include <QWidget>
#include <QFile>
#include <QPainter>
namespace Ui { class EWalletItemFollow; };

class EWalletItemFollow : public QWidget
{
	Q_OBJECT

public:
	EWalletItemFollow(QWidget *parent = Q_NULLPTR);
	~EWalletItemFollow();

	void setData(QString iconPath, QString title, QString balance, QString address, QString tokenID);
	void setData(QString title, QString balance, QString address, QString tokenID);

	void setIcon(QString iconPath);

	QString getName();
	QString getAddress();
	QString getTokenID();

private:
	Ui::EWalletItemFollow *ui;

	QString address;
	QString tokenID;
};

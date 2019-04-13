#pragma once

#include <QWidget>
#include <QFile>
#include <QPainter>
namespace Ui { class EWalletItemChecked; };

class EWalletItemChecked : public QWidget
{
	Q_OBJECT

public:
	EWalletItemChecked(QWidget *parent = Q_NULLPTR);
	~EWalletItemChecked();

	void setData(QString iconPath, QString title, QString fullName, QString address, bool checked);
	void setData(QString title, QString fullName, QString address, bool checked);

	void setIcon(QString iconPath);

	void hideChecked();
	void setChecked(bool checked);

	void setTokenID(QString tokenID);
	
	QString getName();
	QString getAddress();
	QString getTokenID();

signals:
	void sigChecked(QString tokenID, bool checked);

	private slots:
	void slotToggled(bool);


private:
	Ui::EWalletItemChecked *ui;

	QString tokenID;
};

#pragma once

#include <QWidget>
namespace Ui { class HostingItemWidget; };

class HostingItemWidget : public QWidget
{
	Q_OBJECT

public:
	HostingItemWidget(QWidget *parent = Q_NULLPTR);
	~HostingItemWidget();

	void hideNextBtn();
	
	void setIcon(QString iconPath);
	void setData(QString name, QString availableCoin, QString freezingCoin, double trusteeshipId);
	void setData(QString iconPath, QString name, QString availableCoin, QString freezingCoin, double trusteeshipId);

	QString getName();

signals:
	void sigShowRecords(QString name);

	private slots:
	void slotClickedNextBtn();

private:
	Ui::HostingItemWidget *ui;

	QString strIconPath;
	double trusteeshipId;
};

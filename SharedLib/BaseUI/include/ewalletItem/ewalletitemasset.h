#pragma once

#include <QWidget>
namespace Ui { class EWalletItemAsset; };

class EWalletItemAsset : public QWidget
{
	Q_OBJECT

public:
	EWalletItemAsset(QWidget *parent = Q_NULLPTR);
	~EWalletItemAsset();

	void setData(QString iconPath, QString nameText, QString numberText,
		QString nameCNYText, QString numberCNYText);

private:
	Ui::EWalletItemAsset *ui;
};

#pragma once

#include <QWidget>
#include <QClipboard>
#include <QCryptographicHash>
#include <QDebug>

namespace Ui { class SafeWidget; };

class SafeWidget : public QWidget
{
	Q_OBJECT

public:
	SafeWidget(QWidget *parent = Q_NULLPTR);
	~SafeWidget();

	void setPassWord(QString);
	void setPrivateKey(QString);

private slots:
	void slotEnterPassWord();
	void slotCopyPrivateKey();

private:
	bool eventFilter(QObject *, QEvent *);

private:
	Ui::SafeWidget *ui;

	QString passWord;
	QString privateKey;
};

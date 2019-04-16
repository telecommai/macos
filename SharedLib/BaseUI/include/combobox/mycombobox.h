#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>
#include <QListWidget>

class MyBoxItem;

class MyComboBox : public QComboBox
{
	Q_OBJECT

public:
	MyComboBox(QWidget *parent);
	~MyComboBox();

	void AddAccount(QWidget* pAccountItem);


public slots:
	void OnShowAccount(QString account);
	void OnRemoveAccount(QString account);

private:
	QListWidget* mpListWidget;
};

#endif

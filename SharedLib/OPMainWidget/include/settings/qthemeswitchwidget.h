#pragma once

#ifndef QTHEMESWITCHWIDGET_H
#define QTHEMESWITCHWIDGET_H

#include <QWidget>
namespace Ui { class QThemeSwitchWidget; };

class QThemeSwitchWidget : public QWidget
{
	Q_OBJECT

public:
	QThemeSwitchWidget(QWidget *parent = 0);
	~QThemeSwitchWidget();
private:
	Ui::QThemeSwitchWidget *ui;

private slots:
	void slotIndexSwitch(int);
	void slotThemeChanged();
	void slotThemeCanceled();

signals:
	void sigThemeSwitch(QString);
};

#endif // QABOUTWIDGET_H

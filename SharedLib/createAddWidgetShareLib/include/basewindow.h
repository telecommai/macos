#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QWidget>
#include <QtMath>
#include "mytitlebar.h"

class BaseWindow : public QWidget
{
	Q_OBJECT

public:
	BaseWindow(QWidget *parent = 0);
	~BaseWindow();
	void loadStyleSheet(const QString &sheetName);

signals:
	void sigWindowsMax();
	void sigClose();

private:
	void initTitleBar();
	private slots:
	void onButtonMinClicked();
	void onButtonRestoreClicked();
	void onButtonMaxClicked();

protected:
	MyTitleBar* m_titleBar;
};

#endif // BASEWINDOW_H

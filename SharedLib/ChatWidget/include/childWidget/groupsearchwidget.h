#ifndef GROUPSEARCHWIDGET_H
#define GROUPSEARCHWIDGET_H

#include <QWidget>
#include <QListWidgetItem>
#include <QKeyEvent>
#include "pinyin.h"
#include "stdafx.h"
#include "imbuddy.h"
#include "cfrientstylewidget.h"

namespace Ui {
	class GroupSearchWidget;
}

class GroupSearchWidget : public QWidget
{
	Q_OBJECT

public:
	GroupSearchWidget(QWidget *parent = 0);
	~GroupSearchWidget();

	void setGroupID(QString);
	void getFocus();
	void clearAndHide();

protected:
	bool eventFilter(QObject *obj, QEvent *e);

private slots:
	void slotSearch(QString);
    void slotDBClickItem(QListWidgetItem *);

signals:
	void sigOpenSearchUser(QString);
	
private:
	Ui::GroupSearchWidget *ui;

	QString currentID;
};

#endif // GROUPSEARCHWIDGET_H

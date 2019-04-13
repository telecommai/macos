#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include "MessageWidget/messagelistview.h"
#include "SearchWidget/searchlist.h"
#include <QSplitter>

namespace Ui { class ChatWidget; };

class ChatWidget : public QSplitter
{
	Q_OBJECT

public:
	ChatWidget(QWidget *parent = 0);
	~ChatWidget();

	MessageListView *getMessageListView();
	SearchList *getSearchList();

	QStackedWidget *getStackedWidget();

	void setOtherDeviceCount(int);

protected:
	bool eventFilter(QObject *obj, QEvent *e);

signals:
	void sigSearchText(QString text);

	void sigShowDeviceWidget();

private slots:
    void slotMinSizeWidget();

	void slotEditSearchLine(QString);
	void slotClickCancelSearch();

private:
	Ui::ChatWidget *ui;
};

#endif // CHATWIDGET_H

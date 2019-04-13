#ifndef ATWIDGET_H
#define ATWIDGET_H

#include <QListWidget>
#include <QListWidgetItem>
#include <qjsondocument.h>
#include "stdafx.h"
#include "pinyin.h"
#include "messagebox.h"
#include "imtranstype.h"
#include "cfrientstylewidget.h"
#include "common.h"
namespace Ui {class AtWidget;};

class AtWidget : public QListWidget
{
	Q_OBJECT

public:
	AtWidget(QWidget *parent = 0);
	~AtWidget();

	bool isFocusIn();

	void setGroupID(QString);
	void search(QString key = "");

	bool isAtGroupBuddyFormat(QString imageFormatName);
	bool isAtGroupChating();
	void addAtGroupBuddy(QString imageFormatName);
	void addAtChatText(QString chatText);

	void sendAtMessage();

	void keyEvent(QKeyEvent *);

	private slots:
	void slotClickedItem(QListWidgetItem *);

protected:
	void enterEvent(QEvent *event);
	void leaveEvent(QEvent *event);
    void keyPressEvent(QKeyEvent * event);

signals:
	void sigAtGroupUser(QString path);
	void sigSendAtMessage(QString content, QString message);

private:
	Ui::AtWidget *ui;

	QString currentID;

	QString atContent;
	QVariantList atList;

	bool mouseIn;
};

#endif // ATWIDGET_H

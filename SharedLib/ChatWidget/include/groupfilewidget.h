#pragma once

#include <QWidget>
#include <qjsondocument.h>
#include <qdatetime.h>
#include <qpushbutton.h>
#include <qdesktopservices.h>
#include <qurl.h>
#include "stdafx.h"
#include "childWidget/filetypeex.h"

namespace Ui { class GroupFileWidget; };

class GroupFileWidget : public QWidget
{
	Q_OBJECT

public:
	GroupFileWidget(QWidget *parent = Q_NULLPTR);
	~GroupFileWidget();

	void loadFileMessage();

	private slots:
	void slotClickDownloadBtn();

protected:
	bool eventFilter(QObject *obj, QEvent *e);

private:
	void insertRowByMessageInfo(MessageInfo);

private:
	Ui::GroupFileWidget *ui;
};

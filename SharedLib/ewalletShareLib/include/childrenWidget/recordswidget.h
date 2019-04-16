#pragma once

#include <QWidget>
#include <QListWidgetItem>
#include "ewalletItem/ewalletitemrecord.h"
#include "opcommon.h"
#include "recorddetailwidget.h"

namespace Ui { class RecordsWidget; };

class RecordsWidget : public QWidget
{
	Q_OBJECT

public:
	RecordsWidget(QWidget *parent = Q_NULLPTR);
	~RecordsWidget();

	void setTitle(QString name);

private slots:
	void slotRecords(QList<RecordInfo>);

	void slotAllTab();
	void slotTurnOutTab();
	void slotTurnInTab();
	void slotFailTab();
	
	void slotDBClickRecord(QListWidgetItem *);

signals:
	void sigTurnIn();
	void sigTurnOut();

private:
	Ui::RecordsWidget *ui;

	QList<RecordInfo> recordsList;
};

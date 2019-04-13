#pragma once

#include <QWidget>
namespace Ui { class hostingRecordItemWidget; };

class hostingRecordItemWidget : public QWidget
{
	Q_OBJECT

public:
	hostingRecordItemWidget(QWidget *parent = Q_NULLPTR);
	~hostingRecordItemWidget();

	void setData(QString type, QString time, QString number, QString state);

private:
	Ui::hostingRecordItemWidget *ui;
};

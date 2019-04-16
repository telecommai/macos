#pragma once

#include <QWidget>
#include <QJsonDocument>
#include "qrencodesharelib.h"
#include "changenumwidget.h"

namespace Ui { class ChangeIntoWidget; };

class ChangeIntoWidget : public QWidget
{
	Q_OBJECT

public:
	ChangeIntoWidget(QWidget *parent = Q_NULLPTR);
	~ChangeIntoWidget();

	void setTurnInData(QString userID, QString address);

private slots:
    void slotSetNumWidget();
    void slotSetImage(QString num);

private:
	Ui::ChangeIntoWidget *ui;

	QString userID;
	QString address;
};

#pragma once

#include <QWidget>
namespace Ui { class InterPlanetNoticeWidget; };

class InterPlanetNoticeWidget : public QWidget
{
	Q_OBJECT

public:
	InterPlanetNoticeWidget(QWidget *parent = Q_NULLPTR);
	~InterPlanetNoticeWidget();
	void OnSetNickNameText(QString strText);
	void OnSetPicPath(QString strPath);
	void OnSetMessageNum(QString strNum);
	QString getNickName();
private:
	Ui::InterPlanetNoticeWidget *ui;
};

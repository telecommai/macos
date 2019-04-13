#pragma once

#include <QObject>

class VedioFrameOpera : public QObject
{
	Q_OBJECT

public:
	VedioFrameOpera(QObject *parent=0);
	~VedioFrameOpera();

	void CreateVedioPicture(QString vedioPath,QString imgPath);
};

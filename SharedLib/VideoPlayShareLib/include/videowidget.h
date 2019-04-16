#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QVideoWidget>
#include <QMediaPlayer>

class VideoWidget : public QVideoWidget
{
	Q_OBJECT

public:
	VideoWidget(QObject *parent = NULL);
	~VideoWidget();

	void setMedia(QString address);
	void setVolume(int volume);    
	void setPosition(qint64 pos);  

	QSize getVideoSize();          
	qint64 getDuration();     

	void play();
	void pause();
	void stop();

	public slots:
	void positionChanged(qint64 pos);
signals:
	void sigPositionChanged(qint64);
private:
	QMediaPlayer *media;
};

#endif // VIDEOWIDGET_H

#ifndef MYEMOTIONITEMWIDGET_H
#define MYEMOTIONITEMWIDGET_H

#include <QLabel>

class MyEmotionItemWidget : public QLabel
{
	Q_OBJECT

public:
	MyEmotionItemWidget(QString fileName, QSize emotionMoiveSize);
	~MyEmotionItemWidget();

private:
	void enterEvent(QEvent *event);
	void leaveEvent(QEvent *event);

private:
	
};

#endif // MYEMOTIONITEMWIDGET_H

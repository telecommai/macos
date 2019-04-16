#pragma once

#include <QWidget>
#include <QPainter>

class masicWidget : public QWidget
{
	Q_OBJECT

public:
	masicWidget(QWidget *parent = 0);
	~masicWidget();
	void DrawRange(QPoint, QPoint);
	void revertMasic(int);
	void ReDraw(QPen);
	void setMasicSize(int);
protected:
	virtual void paintEvent(QPaintEvent *);
private:
	QVector<QPoint> m_vecs;
	QVector<QPoint> m_vece;
	QVector<int>	m_vecSize;
	int m_iPenSize;
};

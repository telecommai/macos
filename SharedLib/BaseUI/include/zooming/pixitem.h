#ifndef PIXITEM_H
#define PIXITEM_H

#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
#include <QRectF>
#include <QMouseEvent>
#include <QPointF>
#include <QDragEnterEvent>
#include <QGraphicsSceneWheelEvent>
#include <QMovie>
#include <QTimer>

enum Enum_ZoomState{
	NO_STATE,
	RESET,
	ZOOM_IN,
	ZOOM_OUT
};

enum Enum_ZoomTimes{
	ZOOM_IN_TIMES = 5,
	ZOOM_OUT_TIMES = -5,
};

class PixItem : public QGraphicsItem        
{
public:
	PixItem(QPixmap *pixmap);   
	PixItem(QMovie *pMovie);
	QRectF boundingRect() const;    
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); 
	void wheelEvent(QGraphicsSceneWheelEvent *event);
	void setZoomState(const int &zoomState);

	void mousePressEvent(QGraphicsSceneMouseEvent *event);
	void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

	void SpWheelevent(int iScale, int iX, int iY);

	int getScaleValue() const;
	void setScaleValue(const int &, int imove);

	void paintgif();
	QPixmap	GetPix(){ return pix; }

private:
	qreal m_scaleValue;  

	QPixmap pix;   
	int m_zoomState;

	bool m_isMove;
	QPointF m_startPos;

	bool m_bIsGif;
	QMovie* m_Movie;

	QTimer *pTimer;
};

#endif // PIXITEM_H

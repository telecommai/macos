#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QRectF>
#include <QMouseEvent>
#include <QPointF>
#include <QDragEnterEvent>
#include <QGraphicsSceneWheelEvent>


class myScene : public QGraphicsScene
{
public:

 	void wheelEvent(QGraphicsSceneWheelEvent *event);

	void mousePressEvent(QGraphicsSceneMouseEvent *event);
	void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void SpWhellEvent(int iScale, int iX,int iY);


private:
 	bool m_isMove;
	QPointF m_startPos;
};

#endif // PIXITEM_H

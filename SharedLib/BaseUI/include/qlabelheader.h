#ifndef QLABELHEADER_H
#define QLABELHEADER_H

#include <QLabel>

enum SHAPE{ ellipse, roundRect };

class QLabelHeader : public QLabel
{
	Q_OBJECT

public:
	QLabelHeader(QWidget *parent = 0);
	~QLabelHeader();

	void setShape(SHAPE);
	void setTransform(bool iSmooth);

protected:
	void paintEvent(QPaintEvent *e);

private:
	int shape;
	bool smooth;
};

#endif // QLABELHEADER_H

#ifndef TOOLBUTTON_H
#define TOOLBUTTON_H

#include <QToolButton>
#include <qpainter.h>

class ToolButton : public QToolButton
{
	Q_OBJECT

public:
	ToolButton(QWidget *parent);
	~ToolButton();

public slots:
	void slotSetNum(int);
	int getNum();

protected:
	void paintEvent(QPaintEvent *e);

private:
	int num;
	
};

#endif // TOOLBUTTON_H

#ifndef PicWidget_H
#define PicWidget_H

#include <QWidget>
#include <QGraphicsView>   
#include <QGraphicsScene>  
#include <QGraphicsItem>   
#include <QLabel>
#include <QPushButton>
#include <QTimer>

#include "pixitem.h"
#include "myScene.h"
#include "myView.h"
#include "shadow.h"
#include <math.h>

namespace Ui {
	class PicWidget;
}

class PicWidget : public QWidget
{
	Q_OBJECT

public:
	explicit PicWidget(QWidget *parent = 0);
	~PicWidget();
#ifdef Q_OS_WIN
	void paintEvent(QPaintEvent * event);
#endif
	void setPath(QString strPath, QWidget * pParentWidget, int iType = 0);
	void resetPath(QString strPath);
	void setNoteTip(int iType);

    private slots:
	void onIn();         

	void onOut();        

	void onSave();

	void onRotation();

	void onCopy();

	void mousePressEvent(QMouseEvent *event);     
	void mouseReleaseEvent(QMouseEvent *event);   
	void mouseMoveEvent(QMouseEvent *event);      
	void keyPressEvent(QKeyEvent *event);
	void maxOrRstrWindow();
	void paintgif();
	QString decodeURI(QString str);
	void slotHideLabel();
private slots:
void slotShowBtn(int iType);
void slotLeft();
void slotRight();

protected:
	void closeEvent(QCloseEvent * event);
	void resizeEvent(QResizeEvent * event);
signals:
	void sigPicClose();
	void sigChangePic(int);

private:
	Ui::PicWidget *ui;
	Shadow *shadow;
	PixItem *pixItem;      
	QLabel *pLabel;
	QMovie *pMovie;
	myView *m_graphicsView;
	myScene *m_graphicsScene; 
	QString m_strName;
	QString m_strPath;
	QPoint mouse;
	bool bIsGif;
	double m_dWidth;
	double m_dHeight;
	QMenu * m_Menu;
	QAction *ActR;
	QAction *ActOut;
	QAction *ActIn;
	QAction *ActCopy;
	QAction *ActDown;
	QPushButton * m_pLeftBtn;
	QPushButton * m_pRightBtn;
	QLabel * m_pTipLabel;
	int iShowBtn;

};

#endif // PicWidget_H

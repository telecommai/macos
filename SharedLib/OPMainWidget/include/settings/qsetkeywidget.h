#ifndef QSETKEYWIDGET_H
#define QSETKEYWIDGET_H


#include <QWidget>
#include <QKeyEvent>
#include <QCloseEvent>
namespace Ui {class QSetKeyWidget;};
class Shadow;
class QSetKeyWidget : public QWidget
{
	Q_OBJECT
public:
	QSetKeyWidget(QWidget *parent = 0);
	~QSetKeyWidget();
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        
	void setDistinct(int iValue);
	void setShortCut(QString strValue);
	void changeEvent(QEvent * event);
	void moveEvent(QMoveEvent *event);
	void resizeEvent(QResizeEvent* event);
private:
	Ui::QSetKeyWidget *ui;
	void keyPressEvent(QKeyEvent  *event);
	void keyReleaseEvent(QKeyEvent  *event);
	QPoint mouse;
	int distinct;
	Shadow *shadow;
	bool pressOrRelease;
signals:
	void SIG_sendKey_1(QString);
	void SIG_sendKey_2(QString);
public slots:
	void show();
private slots:
	void SLO_confirm();
	void SLO_cancel();
};

#endif // QSETKEYWIDGET_H

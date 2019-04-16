#ifndef GroupAvatarWidget_H
#define GroupAvatarWidget_H
 
#include <QWidget>
#include <qpainter.h>
#include <qevent.h>
#include <qscrollbar.h>
#include <qmath.h>
#include <QFileDialog>
#include <QLabel>
#include "common.h"
#include "imbuddy.h"
#include "messagebox.h"

namespace Ui {
	class GroupAvatarWidget;
}

class GroupAvatarWidget : public QWidget
{
	Q_OBJECT

public:
	GroupAvatarWidget(QWidget *parent = 0);
	~GroupAvatarWidget();

	void setGroupInfo(GroupInfo);
	void upPicFileFinished(bool);
#ifdef Q_OS_LINUX
    void setLinuxCenter();
#endif
protected:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

	void paintEvent(QPaintEvent * event);
	bool eventFilter(QObject *obj, QEvent *e);

signals:
	void sigUploadImagePath(QString);

private slots:
	void slotUploadImage();
	void slotConfirmImage();
	void slotCancel();

private:
	Ui::GroupAvatarWidget *ui;

	void setAvatar(QString headerPath);
	
	QPoint mouse;

	GroupInfo groupInfo; 

	bool changed;     
	bool isUploading; 

	QLabel *picMask;  
	QPoint point;   
	QPixmap originImg;
	int times;    
};

#endif // GroupAvatarWidget_H

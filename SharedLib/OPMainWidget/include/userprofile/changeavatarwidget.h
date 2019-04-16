#ifndef CHANGEAVATARWIDGET_H
#define CHANGEAVATARWIDGET_H

#include <QWidget>
#include <qpainter.h>
#include <qevent.h>
#include <qscrollbar.h>
#include <qmath.h>
#include <QFileDialog>
#include <QLabel>
#include "common.h"
#include "messagebox.h"

namespace Ui {
	class ChangeAvatarWidget;
}

class ChangeAvatarWidget : public QWidget
{
	Q_OBJECT

public:
	ChangeAvatarWidget(QWidget *parent = 0);
	~ChangeAvatarWidget();

	void setUserInfo(UserInfo);
	void upPicFileFinished(bool);

protected:
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

	void paintEvent(QPaintEvent * event);
	bool eventFilter(QObject *obj, QEvent *e);

	void showEvent(QShowEvent *event);

signals:
	void sigUploadHeaderImage(QString);

private slots:
	void slotUploadImage();
	void slotConfirmImage();
	void slotCancel();

private:
	Ui::ChangeAvatarWidget *ui;

	QString m_headerPath;
	void setAvatar(QString headerPath);

	QPoint mouse;

	UserInfo userInfo;  
                        
	bool changed;       
	bool isUploading;   
                        
	QLabel *picMask;
	QPoint point;   
	QPixmap originImg;  
	int times;   
};

#endif // CHANGEAVATARWIDGET_H

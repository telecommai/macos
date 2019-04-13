#ifndef CONTACTMENUWIDGET_H
#define CONTACTMENUWIDGET_H

#include <QWidget>
#include <QBitmap>
namespace Ui { class ContactMenuWidget; };

class ContactMenuWidget : public QWidget
{
	Q_OBJECT

public:
	ContactMenuWidget(QWidget *parent = Q_NULLPTR);
	~ContactMenuWidget();
signals:
	void sigAddCreateGroup();
	void sigAddPerson();
private:
	Ui::ContactMenuWidget *ui;
	QPixmap mPix;
protected:
	void paintEvent(QPaintEvent *);
	bool event(QEvent *event);

};
#endif CONTACTMENUWIDGET_H
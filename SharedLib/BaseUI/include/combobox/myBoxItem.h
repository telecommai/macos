#ifndef MYBOXITEM_H
#define MYBOXITEM_H

#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QMouseEvent>

namespace Ui { class MyBoxItem; };

class MyBoxItem : public QWidget
{
	Q_OBJECT

public:
	MyBoxItem(QWidget *parent = 0);
	MyBoxItem(const QPixmap& pix,const QString& name, const QString& number, QWidget *parent = 0);
	~MyBoxItem();

signals:
	void sigShowAccount(QString);
	void sigRemoveAccount(QString);

	private slots:
	void OnRemoveAccount();

protected:
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);

private:
	Ui::MyBoxItem *ui;

	bool mouse_press;
};

#endif // ACCOUNTITEM_H

#ifndef IMADDPERSON_H
#define IMADDPERSON_H

#include <QWidget>
#include "shadow.h"
#include "basewindow.h"
#include "imsearchperson.h"
#include "imsearchgroup.h"
#include "httpnetworksharelib.h"
#include <QMouseEvent>

namespace Ui {
	class IMAddPerson;
}

class IMAddPerson : public BaseWindow
{
	Q_OBJECT

public:
	IMAddPerson(QWidget *parent = 0);
	~IMAddPerson();
	
	void changeEvent(QEvent * event);
    void moveEvent(QMoveEvent *event);
    void resizeEvent(QResizeEvent* event);
#ifdef Q_OS_LINUX
    void setLinuxCenter();
#endif
public slots:
  	 void show();

private:
	void initTitleBar();
protected:
	void closeEvent(QCloseEvent * event);
signals:
	void sigAddPersonClose();
private slots:
	void doClickSearchPerson();
	void doClickSearchGroup(); 
	void doClickSearchAppNo(); 
	void doClickClose();

private:
	Ui::IMAddPerson *ui;
	IMSearchPerson *mSearchPerson;
	IMSearchGroup  *mSearchGroup; 
	Shadow *shadow;
};

#endif // IMADDPERSON_H

#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H

#include <QApplication>

class myApplication : public QApplication
{
    Q_OBJECT
public:
    myApplication(int & argc, char ** argv);
protected:
    virtual bool eventFilter(QObject *watched, QEvent *event);

signals:
    void sigClickedDock();

    void sigGlobalMouseMouse();
};

#endif // MYAPPLICATION_H

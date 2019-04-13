#include "myapplication.h"
#include <QApplicationStateChangeEvent>
#include <QMouseEvent>
#include <QDebug>

myApplication::myApplication(int & argc, char ** argv):QApplication(argc, argv)
{
    installEventFilter(this);
}

bool myApplication::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type() == QEvent::MouseMove)
    {
        emit sigGlobalMouseMouse();
    }
    if(watched == this && event->type() == QEvent::ApplicationStateChange)
    {
        auto ev = static_cast<QApplicationStateChangeEvent*>(event);
        if(ev->applicationState() == Qt::ApplicationActive)
        {
            emit sigClickedDock();
        }
    }
    return QApplication::eventFilter(watched,event);
}

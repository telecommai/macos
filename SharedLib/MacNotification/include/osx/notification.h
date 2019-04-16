#ifndef OSXNOTIFICATION_H
#define OSXNOTIFICATION_H

#include <QString>
#include <QObject>

class IMMainWidget;
class Notification
{
public:
    explicit Notification();
    void show(const QString& title, const QString& content, const QString &userID);
    void hideAll();

public:
    void setMainWnd(IMMainWidget* mainWnd);
};

#endif // OSXNOTIFICATION_H

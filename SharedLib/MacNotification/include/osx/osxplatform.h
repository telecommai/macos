#ifndef OSXPLATFORM_H
#define OSXPLATFORM_H

#include "macnotification.h"
#include "notification.h"

class OsxPlatform : public IMacNotification
{
public:
    OsxPlatform();

public:
    void showNotify(const QString& title, const QString& content, const QString &userID) override;
    void hideAllNotify() override;

    void setBadgeNumber(int number) override;

    void setMainWnd(IMMainWidget *mainWnd) override;
private:
    Notification mNotify;
};

#endif // OSXPLATFORM_H

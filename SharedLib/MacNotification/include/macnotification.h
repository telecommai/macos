#ifndef MACNOTIFICATION_H
#define MACNOTIFICATION_H


#include <QString>
class IMMainWidget;

class IMacNotification
{
public:
    virtual ~IMacNotification(){}

    virtual void showNotify(const QString& title, const QString& content, const QString & userID) = 0;
    virtual void hideAllNotify() = 0;

    virtual void setBadgeNumber(int number) = 0;

    virtual void setMainWnd(IMMainWidget* mainWnd)
    {
        Q_UNUSED(mainWnd);
    }
};

class MacNotification : public IMacNotification
{
private:
    MacNotification();
    ~MacNotification();

public:
    static MacNotification& instance();

public:
    void showNotify(const QString& title, const QString& content, const QString & userID) override;
    void hideAllNotify() override;

    void setBadgeNumber(int number) override;

    void setMainWnd(IMMainWidget* mainWnd) override;
private:
    IMacNotification* mImpl;
};


#endif // MACNOTIFICATION_H

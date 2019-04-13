#ifndef XSYSTRAYMEAUACTION_H
#define XSYSTRAYMEAUACTION_H

#include <QWidget>

namespace Ui {
class xSysTrayMeauAction;
}

class xSysTrayMeauAction : public QWidget
{
    Q_OBJECT

public:
    explicit xSysTrayMeauAction(QWidget *parent = 0);
    ~xSysTrayMeauAction();

protected:
    bool eventFilter(QObject *obj, QEvent *e);

signals:
    void sigabout();
    void sigExit();
private:
    Ui::xSysTrayMeauAction *ui;
};

#endif // XSYSTRAYMEAUACTION_H

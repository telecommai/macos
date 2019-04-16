#ifndef UPDATEWIDGET_H
#define UPDATEWIDGET_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class updateWidget;
}

class updateWidget : public QWidget
{
    Q_OBJECT

public:
    explicit updateWidget(QWidget *parent = 0);
    ~updateWidget();

    void SetUpdateDescribeInfo(QString strDescribeInfo);
protected:
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

public slots:
    void slotUpdate();

    void slotExit();

signals:
    void sigUpdate();
    void sigExit();
private:
    void OnInitUi();
private:
    Ui::updateWidget *ui;
    bool        mMoveing;
    QPoint      mMovePosition;
};

#endif // UPDATEWIDGET_H

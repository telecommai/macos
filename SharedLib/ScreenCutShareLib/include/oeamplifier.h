#ifndef OEAMPLIFIER_H
#define OEAMPLIFIER_H
#include <memory>
#include <QWidget>

class OEAmplifier : public QWidget
{
    Q_OBJECT
public:
    explicit OEAmplifier(std::shared_ptr<QPixmap> originPainting, QWidget *parent = 0);

signals:

public slots:

    void onSizeChange(int w, int h);

    void onPostionChange(int x, int y);

protected:

    virtual void paintEvent(QPaintEvent *);

private:

    QSize screenSize_;

    QPoint cursorPoint_;

    int sideLength_;

    int imageHeight_;

    std::shared_ptr<QPixmap> originPainting_;

};

#endif /// OEAMPLIFIER_H

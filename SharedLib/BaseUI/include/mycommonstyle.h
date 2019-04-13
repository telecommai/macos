#ifndef MYCOMMONSTYLE_H
#define MYCOMMONSTYLE_H

#include <QCommonStyle>

class MyProxyStyle:public QCommonStyle
{
public:
    virtual void drawPrimitive(PrimitiveElement element,const QStyleOption *option,
                               QPainter* painter,const QWidget *widget=0) const
    {
        if (PE_FrameFocusRect == element)
        {

        }
        else
        {
            QCommonStyle::drawPrimitive(element,option,painter,widget);
        }
    }
};

#endif // MYCOMMONSTYLE_H

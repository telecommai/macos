/********************************************************************************
** Form generated from reading UI file 'screencontrolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENCONTROLWIDGET_H
#define UI_SCREENCONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenControlWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *rectangleBtn;
    QToolButton *drawRoundBtn;
    QToolButton *arrowBtn;
    QToolButton *drawLineBtn;
    QToolButton *masicButton;
    QToolButton *textEditBtn;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *revertBtn;
    QToolButton *saveBtn;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *cancelBtn;
    QToolButton *finishBtn;

    void setupUi(QWidget *ScreenControlWidget)
    {
        if (ScreenControlWidget->objectName().isEmpty())
            ScreenControlWidget->setObjectName(QStringLiteral("ScreenControlWidget"));
        ScreenControlWidget->resize(300, 28);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ScreenControlWidget->sizePolicy().hasHeightForWidth());
        ScreenControlWidget->setSizePolicy(sizePolicy);
        ScreenControlWidget->setMinimumSize(QSize(0, 0));
        ScreenControlWidget->setMaximumSize(QSize(16777215, 16777215));
        ScreenControlWidget->setCursor(QCursor(Qt::ArrowCursor));
        ScreenControlWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(ScreenControlWidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        rectangleBtn = new QToolButton(ScreenControlWidget);
        rectangleBtn->setObjectName(QStringLiteral("rectangleBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(rectangleBtn->sizePolicy().hasHeightForWidth());
        rectangleBtn->setSizePolicy(sizePolicy1);
        rectangleBtn->setMinimumSize(QSize(24, 24));
        rectangleBtn->setMaximumSize(QSize(24, 24));
        rectangleBtn->setCursor(QCursor(Qt::ArrowCursor));
        rectangleBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/Rect.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/Rect.png);border:1px solid grey;\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/Rect.png);}\n"
"	"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/control_01.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        rectangleBtn->setIcon(icon);
        rectangleBtn->setIconSize(QSize(25, 25));
        rectangleBtn->setCheckable(true);
        rectangleBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(rectangleBtn);

        drawRoundBtn = new QToolButton(ScreenControlWidget);
        drawRoundBtn->setObjectName(QStringLiteral("drawRoundBtn"));
        sizePolicy1.setHeightForWidth(drawRoundBtn->sizePolicy().hasHeightForWidth());
        drawRoundBtn->setSizePolicy(sizePolicy1);
        drawRoundBtn->setMinimumSize(QSize(24, 24));
        drawRoundBtn->setMaximumSize(QSize(24, 24));
        drawRoundBtn->setCursor(QCursor(Qt::ArrowCursor));
        drawRoundBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/Round.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/Round.png);border:1px solid grey;\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/Round.png);}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/control_02.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        drawRoundBtn->setIcon(icon1);
        drawRoundBtn->setIconSize(QSize(25, 25));
        drawRoundBtn->setCheckable(true);
        drawRoundBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(drawRoundBtn);

        arrowBtn = new QToolButton(ScreenControlWidget);
        arrowBtn->setObjectName(QStringLiteral("arrowBtn"));
        sizePolicy1.setHeightForWidth(arrowBtn->sizePolicy().hasHeightForWidth());
        arrowBtn->setSizePolicy(sizePolicy1);
        arrowBtn->setMinimumSize(QSize(24, 24));
        arrowBtn->setMaximumSize(QSize(24, 24));
        arrowBtn->setCursor(QCursor(Qt::ArrowCursor));
        arrowBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/Arrow.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/Arrow.png);border:1px solid grey;\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/Arrow.png);}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/control_03.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        arrowBtn->setIcon(icon2);
        arrowBtn->setIconSize(QSize(25, 25));
        arrowBtn->setCheckable(true);
        arrowBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(arrowBtn);

        drawLineBtn = new QToolButton(ScreenControlWidget);
        drawLineBtn->setObjectName(QStringLiteral("drawLineBtn"));
        sizePolicy1.setHeightForWidth(drawLineBtn->sizePolicy().hasHeightForWidth());
        drawLineBtn->setSizePolicy(sizePolicy1);
        drawLineBtn->setMinimumSize(QSize(24, 24));
        drawLineBtn->setMaximumSize(QSize(24, 24));
        drawLineBtn->setCursor(QCursor(Qt::ArrowCursor));
        drawLineBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/Line.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/Line.png);border:1px solid grey;\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/Line.png);}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/control_04.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        drawLineBtn->setIcon(icon3);
        drawLineBtn->setIconSize(QSize(25, 25));
        drawLineBtn->setCheckable(true);
        drawLineBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(drawLineBtn);

        masicButton = new QToolButton(ScreenControlWidget);
        masicButton->setObjectName(QStringLiteral("masicButton"));
        masicButton->setMinimumSize(QSize(24, 24));
        masicButton->setMaximumSize(QSize(24, 24));
        masicButton->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"border:1px;\n"
"image: url(:/screencut/Resources/screencut/masic.png);\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"image: url(:/screencut/Resources/screencut/asmic.png);\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"image: url(:/screencut/Resources/screencut/masic.png);\n"
"background-color:lightgrey;}"));
        masicButton->setCheckable(true);

        horizontalLayout->addWidget(masicButton);

        textEditBtn = new QToolButton(ScreenControlWidget);
        textEditBtn->setObjectName(QStringLiteral("textEditBtn"));
        sizePolicy1.setHeightForWidth(textEditBtn->sizePolicy().hasHeightForWidth());
        textEditBtn->setSizePolicy(sizePolicy1);
        textEditBtn->setMinimumSize(QSize(24, 24));
        textEditBtn->setMaximumSize(QSize(24, 24));
        textEditBtn->setCursor(QCursor(Qt::ArrowCursor));
        textEditBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/Edit.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/Edit.png);border:1px solid grey;\n"
"}\n"
"\n"
"QToolButton:checked{\n"
"padding: 0px;\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/Edit.png);}"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("image/control_06.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        textEditBtn->setIcon(icon4);
        textEditBtn->setIconSize(QSize(25, 25));
        textEditBtn->setCheckable(true);
        textEditBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(textEditBtn);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line_2 = new QFrame(ScreenControlWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        revertBtn = new QToolButton(ScreenControlWidget);
        revertBtn->setObjectName(QStringLiteral("revertBtn"));
        sizePolicy1.setHeightForWidth(revertBtn->sizePolicy().hasHeightForWidth());
        revertBtn->setSizePolicy(sizePolicy1);
        revertBtn->setMinimumSize(QSize(24, 24));
        revertBtn->setMaximumSize(QSize(24, 24));
        revertBtn->setCursor(QCursor(Qt::ArrowCursor));
        revertBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/revert.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/revert.png);border:1px solid grey;\n"
"}"));
        revertBtn->setCheckable(false);
        revertBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(revertBtn);

        saveBtn = new QToolButton(ScreenControlWidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        sizePolicy1.setHeightForWidth(saveBtn->sizePolicy().hasHeightForWidth());
        saveBtn->setSizePolicy(sizePolicy1);
        saveBtn->setMinimumSize(QSize(24, 24));
        saveBtn->setMaximumSize(QSize(24, 24));
        saveBtn->setCursor(QCursor(Qt::ArrowCursor));
        saveBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/save.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/save.png);border:1px solid grey;\n"
"}\n"
"	"));
        saveBtn->setCheckable(false);
        saveBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(saveBtn);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        line = new QFrame(ScreenControlWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        cancelBtn = new QToolButton(ScreenControlWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        sizePolicy1.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy1);
        cancelBtn->setMinimumSize(QSize(24, 24));
        cancelBtn->setMaximumSize(QSize(24, 24));
        cancelBtn->setCursor(QCursor(Qt::ArrowCursor));
        cancelBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/cancle.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/cancle.png);border:1px solid grey;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/control_12.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        cancelBtn->setIcon(icon5);
        cancelBtn->setIconSize(QSize(25, 25));
        cancelBtn->setCheckable(false);
        cancelBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(cancelBtn);

        finishBtn = new QToolButton(ScreenControlWidget);
        finishBtn->setObjectName(QStringLiteral("finishBtn"));
        sizePolicy1.setHeightForWidth(finishBtn->sizePolicy().hasHeightForWidth());
        finishBtn->setSizePolicy(sizePolicy1);
        finishBtn->setMinimumSize(QSize(24, 24));
        finishBtn->setMaximumSize(QSize(24, 24));
        finishBtn->setCursor(QCursor(Qt::ArrowCursor));
        finishBtn->setStyleSheet(QLatin1String("QToolButton\n"
"{\n"
"padding: 1px;\n"
"image: url(:/screencut/Resources/screencut/Finish.png);border:1px;\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"padding: 0px;\n"
"image: url(:/screencut/Resources/screencut/Finish.png);border:1px solid grey;\n"
"}\n"
"	"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/control_13.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        finishBtn->setIcon(icon6);
        finishBtn->setCheckable(false);
        finishBtn->setAutoExclusive(false);

        horizontalLayout->addWidget(finishBtn);


        retranslateUi(ScreenControlWidget);

        QMetaObject::connectSlotsByName(ScreenControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ScreenControlWidget)
    {
        ScreenControlWidget->setWindowTitle(QApplication::translate("ScreenControlWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        rectangleBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\347\224\273\347\237\251\345\275\242", nullptr));
#endif // QT_NO_TOOLTIP
        rectangleBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        drawRoundBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\347\224\273\345\234\206", nullptr));
#endif // QT_NO_TOOLTIP
        drawRoundBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        arrowBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\347\224\273\347\256\255\345\244\264", nullptr));
#endif // QT_NO_TOOLTIP
        arrowBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        drawLineBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\347\224\273\347\254\224", nullptr));
#endif // QT_NO_TOOLTIP
        drawLineBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        masicButton->setToolTip(QApplication::translate("ScreenControlWidget", "\351\251\254\350\265\233\345\205\213", nullptr));
#endif // QT_NO_TOOLTIP
        masicButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        textEditBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\346\267\273\345\212\240\346\226\207\345\255\227", nullptr));
#endif // QT_NO_TOOLTIP
        textEditBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        revertBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\346\222\244\351\224\200", nullptr));
#endif // QT_NO_TOOLTIP
        revertBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        saveBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
        saveBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        cancelBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\351\200\200\345\207\272\346\210\252\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        cancelBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        finishBtn->setToolTip(QApplication::translate("ScreenControlWidget", "\345\256\214\346\210\220\346\210\252\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        finishBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScreenControlWidget: public Ui_ScreenControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENCONTROLWIDGET_H

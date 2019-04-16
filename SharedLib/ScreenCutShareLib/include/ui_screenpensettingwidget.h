/********************************************************************************
** Form generated from reading UI file 'screenpensettingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENPENSETTINGWIDGET_H
#define UI_SCREENPENSETTINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenPenSettingWidget
{
public:
    QPushButton *btn15px;
    QPushButton *btn9px;
    QPushButton *btn25px;
    QLabel *textLabel;
    QComboBox *textCombobox;
    QFrame *line;
    QPushButton *btnColor;
    QPushButton *btnWhite;
    QPushButton *btnLightGreen;
    QPushButton *btnYellow;
    QPushButton *btnLightGrey;
    QPushButton *btnRed;
    QPushButton *btnBlue;
    QPushButton *btnMagenta;
    QPushButton *btnCyan;
    QPushButton *btnDarkMagenta;
    QPushButton *btnGrey;
    QPushButton *btnDarkCyan;
    QPushButton *btnGreen;
    QPushButton *btnDarkBlue;
    QPushButton *btnDarkRed;
    QPushButton *btnBlack;
    QPushButton *btnOrange;
    QLabel *masiclabel;
    QSlider *horizontalSlider;

    void setupUi(QWidget *ScreenPenSettingWidget)
    {
        if (ScreenPenSettingWidget->objectName().isEmpty())
            ScreenPenSettingWidget->setObjectName(QStringLiteral("ScreenPenSettingWidget"));
        ScreenPenSettingWidget->resize(240, 36);
        ScreenPenSettingWidget->setCursor(QCursor(Qt::ArrowCursor));
        ScreenPenSettingWidget->setStyleSheet(QLatin1String("QScrollBar:vertical\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,0%);\n"
"    margin:0px,0px,0px,0px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,25%);\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,50%);\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical   \n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}\n"
"QWidget\n"
"{\n"
"	background-color:white;\n"
"}"));
        btn15px = new QPushButton(ScreenPenSettingWidget);
        btn15px->setObjectName(QStringLiteral("btn15px"));
        btn15px->setGeometry(QRect(29, 6, 24, 24));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn15px->sizePolicy().hasHeightForWidth());
        btn15px->setSizePolicy(sizePolicy);
        btn15px->setMinimumSize(QSize(24, 24));
        btn15px->setMaximumSize(QSize(24, 24));
        btn15px->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-color:white;\n"
"image: url(:/screencut/Resources/screencut/15px.png);}\n"
"\n"
"QPushButton:checked{\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/15px.png);}\n"
"\n"
"QPushButton:hover{\n"
"border:1px solid grey;\n"
"image: url(:/screencut/Resources/screencut/15px.png);}"));
        btn15px->setCheckable(true);
        btn15px->setAutoExclusive(true);
        btn9px = new QPushButton(ScreenPenSettingWidget);
        btn9px->setObjectName(QStringLiteral("btn9px"));
        btn9px->setGeometry(QRect(5, 6, 24, 24));
        sizePolicy.setHeightForWidth(btn9px->sizePolicy().hasHeightForWidth());
        btn9px->setSizePolicy(sizePolicy);
        btn9px->setMinimumSize(QSize(24, 24));
        btn9px->setMaximumSize(QSize(24, 24));
        btn9px->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-color:white;\n"
"image: url(:/screencut/Resources/screencut/9px.png);}\n"
"\n"
"QPushButton:checked{\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/9px.png);}\n"
"\n"
"QPushButton:hover{\n"
"border:1px solid grey;\n"
"image: url(:/screencut/Resources/screencut/9px.png);}"));
        btn9px->setCheckable(true);
        btn9px->setAutoExclusive(true);
        btn25px = new QPushButton(ScreenPenSettingWidget);
        btn25px->setObjectName(QStringLiteral("btn25px"));
        btn25px->setGeometry(QRect(53, 6, 24, 24));
        sizePolicy.setHeightForWidth(btn25px->sizePolicy().hasHeightForWidth());
        btn25px->setSizePolicy(sizePolicy);
        btn25px->setMinimumSize(QSize(24, 24));
        btn25px->setMaximumSize(QSize(24, 24));
        btn25px->setStyleSheet(QLatin1String("QPushButton{\n"
"border:none;\n"
"background-color:white;\n"
"image: url(:/screencut/Resources/screencut/25px.png);}\n"
"\n"
"QPushButton:checked{\n"
"border:1px solid grey;\n"
"background-color:lightgrey;\n"
"image: url(:/screencut/Resources/screencut/25px.png);}\n"
"\n"
"QPushButton:hover{\n"
"border:1px solid grey;\n"
"image: url(:/screencut/Resources/screencut/25px.png);}"));
        btn25px->setCheckable(true);
        btn25px->setAutoExclusive(true);
        textLabel = new QLabel(ScreenPenSettingWidget);
        textLabel->setObjectName(QStringLiteral("textLabel"));
        textLabel->setGeometry(QRect(5, 6, 24, 24));
        sizePolicy.setHeightForWidth(textLabel->sizePolicy().hasHeightForWidth());
        textLabel->setSizePolicy(sizePolicy);
        textLabel->setMinimumSize(QSize(24, 24));
        textLabel->setMaximumSize(QSize(24, 24));
        textLabel->setStyleSheet(QStringLiteral("border-image: url(:/screencut/Resources/screencut/edit.png);"));
        textCombobox = new QComboBox(ScreenPenSettingWidget);
        textCombobox->setObjectName(QStringLiteral("textCombobox"));
        textCombobox->setGeometry(QRect(35, 8, 42, 20));
        sizePolicy.setHeightForWidth(textCombobox->sizePolicy().hasHeightForWidth());
        textCombobox->setSizePolicy(sizePolicy);
        textCombobox->setMinimumSize(QSize(42, 20));
        textCombobox->setMaximumSize(QSize(38, 20));
        textCombobox->setStyleSheet(QLatin1String("QScrollBar:vertical\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,0%);\n"
"    margin:0px,0px,0px,0px;\n"
"    padding-top:9px;\n"
"    padding-bottom:9px;\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,25%);\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:8px;\n"
"    background:rgba(0,0,0,50%);\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/images/a/3.png);\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/images/a/1.png);\n"
"    subcontrol-position:top;\n"
"}\n"
"QScrollBar::add-line:vertical:hover\n"
"{\n"
"    height:9px;width:8px;\n"
"    border-image:url(:/images/a/4.png);\n"
"    subcontrol-position:bottom;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover\n"
"{\n"
"    height:9px;width:8px;\n"
""
                        "    border-image:url(:/images/a/2.png);\n"
"    subcontrol-position:top;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical   \n"
"{\n"
"    background:rgba(0,0,0,10%);\n"
"    border-radius:4px;\n"
"}"));
        line = new QFrame(ScreenPenSettingWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(77, 3, 16, 30));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btnColor = new QPushButton(ScreenPenSettingWidget);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        btnColor->setGeometry(QRect(95, 4, 28, 28));
        sizePolicy.setHeightForWidth(btnColor->sizePolicy().hasHeightForWidth());
        btnColor->setSizePolicy(sizePolicy);
        btnColor->setMinimumSize(QSize(28, 28));
        btnColor->setMaximumSize(QSize(28, 28));
        btnColor->setStyleSheet(QStringLiteral("border:none;"));
        btnWhite = new QPushButton(ScreenPenSettingWidget);
        btnWhite->setObjectName(QStringLiteral("btnWhite"));
        btnWhite->setGeometry(QRect(130, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnWhite->sizePolicy().hasHeightForWidth());
        btnWhite->setSizePolicy(sizePolicy);
        btnWhite->setMinimumSize(QSize(13, 13));
        btnWhite->setMaximumSize(QSize(13, 13));
        btnWhite->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:white;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:white;border:1px solid white}"));
        btnLightGreen = new QPushButton(ScreenPenSettingWidget);
        btnLightGreen->setObjectName(QStringLiteral("btnLightGreen"));
        btnLightGreen->setGeometry(QRect(182, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnLightGreen->sizePolicy().hasHeightForWidth());
        btnLightGreen->setSizePolicy(sizePolicy);
        btnLightGreen->setMinimumSize(QSize(13, 13));
        btnLightGreen->setMaximumSize(QSize(13, 13));
        btnLightGreen->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:LightGreen;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:LightGreen;border:1px solid white}"));
        btnYellow = new QPushButton(ScreenPenSettingWidget);
        btnYellow->setObjectName(QStringLiteral("btnYellow"));
        btnYellow->setGeometry(QRect(169, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnYellow->sizePolicy().hasHeightForWidth());
        btnYellow->setSizePolicy(sizePolicy);
        btnYellow->setMinimumSize(QSize(13, 13));
        btnYellow->setMaximumSize(QSize(13, 13));
        btnYellow->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:yellow;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:yellow;border:1px solid white}"));
        btnLightGrey = new QPushButton(ScreenPenSettingWidget);
        btnLightGrey->setObjectName(QStringLiteral("btnLightGrey"));
        btnLightGrey->setGeometry(QRect(143, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnLightGrey->sizePolicy().hasHeightForWidth());
        btnLightGrey->setSizePolicy(sizePolicy);
        btnLightGrey->setMinimumSize(QSize(13, 13));
        btnLightGrey->setMaximumSize(QSize(13, 13));
        btnLightGrey->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:lightGray;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:lightGray;border:1px solid white}"));
        btnRed = new QPushButton(ScreenPenSettingWidget);
        btnRed->setObjectName(QStringLiteral("btnRed"));
        btnRed->setGeometry(QRect(156, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnRed->sizePolicy().hasHeightForWidth());
        btnRed->setSizePolicy(sizePolicy);
        btnRed->setMinimumSize(QSize(13, 13));
        btnRed->setMaximumSize(QSize(13, 13));
        btnRed->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:red;border:1px solid grey}\n"
"\n"
"QPushButton:hover\n"
"{background-color:red;border:1px solid white}"));
        btnBlue = new QPushButton(ScreenPenSettingWidget);
        btnBlue->setObjectName(QStringLiteral("btnBlue"));
        btnBlue->setGeometry(QRect(195, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnBlue->sizePolicy().hasHeightForWidth());
        btnBlue->setSizePolicy(sizePolicy);
        btnBlue->setMinimumSize(QSize(13, 13));
        btnBlue->setMaximumSize(QSize(13, 13));
        btnBlue->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:blue;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:blue;border:1px solid white}"));
        btnMagenta = new QPushButton(ScreenPenSettingWidget);
        btnMagenta->setObjectName(QStringLiteral("btnMagenta"));
        btnMagenta->setGeometry(QRect(208, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnMagenta->sizePolicy().hasHeightForWidth());
        btnMagenta->setSizePolicy(sizePolicy);
        btnMagenta->setMinimumSize(QSize(13, 13));
        btnMagenta->setMaximumSize(QSize(13, 13));
        btnMagenta->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:magenta;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:magenta;border:1px solid white}"));
        btnCyan = new QPushButton(ScreenPenSettingWidget);
        btnCyan->setObjectName(QStringLiteral("btnCyan"));
        btnCyan->setGeometry(QRect(221, 19, 13, 13));
        sizePolicy.setHeightForWidth(btnCyan->sizePolicy().hasHeightForWidth());
        btnCyan->setSizePolicy(sizePolicy);
        btnCyan->setMinimumSize(QSize(13, 13));
        btnCyan->setMaximumSize(QSize(13, 13));
        btnCyan->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:cyan;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:cyan;border:1px solid white}"));
        btnDarkMagenta = new QPushButton(ScreenPenSettingWidget);
        btnDarkMagenta->setObjectName(QStringLiteral("btnDarkMagenta"));
        btnDarkMagenta->setGeometry(QRect(208, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnDarkMagenta->sizePolicy().hasHeightForWidth());
        btnDarkMagenta->setSizePolicy(sizePolicy);
        btnDarkMagenta->setMinimumSize(QSize(13, 13));
        btnDarkMagenta->setMaximumSize(QSize(13, 13));
        btnDarkMagenta->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:darkmagenta;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:darkmagenta;border:1px solid white}"));
        btnGrey = new QPushButton(ScreenPenSettingWidget);
        btnGrey->setObjectName(QStringLiteral("btnGrey"));
        btnGrey->setGeometry(QRect(143, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnGrey->sizePolicy().hasHeightForWidth());
        btnGrey->setSizePolicy(sizePolicy);
        btnGrey->setMinimumSize(QSize(13, 13));
        btnGrey->setMaximumSize(QSize(13, 13));
        btnGrey->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:gray;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:gray;border:1px solid white}"));
        btnDarkCyan = new QPushButton(ScreenPenSettingWidget);
        btnDarkCyan->setObjectName(QStringLiteral("btnDarkCyan"));
        btnDarkCyan->setGeometry(QRect(221, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnDarkCyan->sizePolicy().hasHeightForWidth());
        btnDarkCyan->setSizePolicy(sizePolicy);
        btnDarkCyan->setMinimumSize(QSize(13, 13));
        btnDarkCyan->setMaximumSize(QSize(13, 13));
        btnDarkCyan->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:darkcyan;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:darkcyan;border:1px solid white}"));
        btnGreen = new QPushButton(ScreenPenSettingWidget);
        btnGreen->setObjectName(QStringLiteral("btnGreen"));
        btnGreen->setGeometry(QRect(182, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnGreen->sizePolicy().hasHeightForWidth());
        btnGreen->setSizePolicy(sizePolicy);
        btnGreen->setMinimumSize(QSize(13, 13));
        btnGreen->setMaximumSize(QSize(13, 13));
        btnGreen->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:green;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:green;border:1px solid white}"));
        btnDarkBlue = new QPushButton(ScreenPenSettingWidget);
        btnDarkBlue->setObjectName(QStringLiteral("btnDarkBlue"));
        btnDarkBlue->setGeometry(QRect(195, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnDarkBlue->sizePolicy().hasHeightForWidth());
        btnDarkBlue->setSizePolicy(sizePolicy);
        btnDarkBlue->setMinimumSize(QSize(13, 13));
        btnDarkBlue->setMaximumSize(QSize(13, 13));
        btnDarkBlue->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:darkBlue;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:darkBlue;border:1px solid white}"));
        btnDarkRed = new QPushButton(ScreenPenSettingWidget);
        btnDarkRed->setObjectName(QStringLiteral("btnDarkRed"));
        btnDarkRed->setGeometry(QRect(156, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnDarkRed->sizePolicy().hasHeightForWidth());
        btnDarkRed->setSizePolicy(sizePolicy);
        btnDarkRed->setMinimumSize(QSize(13, 13));
        btnDarkRed->setMaximumSize(QSize(13, 13));
        btnDarkRed->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:darkRed;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:darkRed;border:1px solid white}"));
        btnBlack = new QPushButton(ScreenPenSettingWidget);
        btnBlack->setObjectName(QStringLiteral("btnBlack"));
        btnBlack->setGeometry(QRect(130, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnBlack->sizePolicy().hasHeightForWidth());
        btnBlack->setSizePolicy(sizePolicy);
        btnBlack->setMinimumSize(QSize(13, 13));
        btnBlack->setMaximumSize(QSize(13, 13));
        btnBlack->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:black;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:black;border:1px solid white}"));
        btnOrange = new QPushButton(ScreenPenSettingWidget);
        btnOrange->setObjectName(QStringLiteral("btnOrange"));
        btnOrange->setGeometry(QRect(169, 4, 13, 13));
        sizePolicy.setHeightForWidth(btnOrange->sizePolicy().hasHeightForWidth());
        btnOrange->setSizePolicy(sizePolicy);
        btnOrange->setMinimumSize(QSize(13, 13));
        btnOrange->setMaximumSize(QSize(13, 13));
        btnOrange->setStyleSheet(QLatin1String("QPushButton\n"
"{background-color:orange;border:1px solid grey}\n"
"QPushButton:hover\n"
"{background-color:orange;border:1px solid white}"));
        masiclabel = new QLabel(ScreenPenSettingWidget);
        masiclabel->setObjectName(QStringLiteral("masiclabel"));
        masiclabel->setGeometry(QRect(95, 0, 36, 34));
        QFont font;
        font.setPointSize(10);
        masiclabel->setFont(font);
        horizontalSlider = new QSlider(ScreenPenSettingWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(136, 7, 100, 22));
        sizePolicy.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy);
        horizontalSlider->setMinimumSize(QSize(100, 0));
        horizontalSlider->setMaximumSize(QSize(100, 16777215));
        horizontalSlider->setMaximum(15);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(ScreenPenSettingWidget);

        QMetaObject::connectSlotsByName(ScreenPenSettingWidget);
    } // setupUi

    void retranslateUi(QWidget *ScreenPenSettingWidget)
    {
        ScreenPenSettingWidget->setWindowTitle(QApplication::translate("ScreenPenSettingWidget", "ScreenPenSettingWidget", nullptr));
        btn15px->setText(QString());
        btn9px->setText(QString());
        btn25px->setText(QString());
        textLabel->setText(QString());
        btnColor->setText(QString());
        btnWhite->setText(QString());
        btnLightGreen->setText(QString());
        btnYellow->setText(QString());
        btnLightGrey->setText(QString());
        btnRed->setText(QString());
        btnBlue->setText(QString());
        btnMagenta->setText(QString());
        btnCyan->setText(QString());
        btnDarkMagenta->setText(QString());
        btnGrey->setText(QString());
        btnDarkCyan->setText(QString());
        btnGreen->setText(QString());
        btnDarkBlue->setText(QString());
        btnDarkRed->setText(QString());
        btnBlack->setText(QString());
        btnOrange->setText(QString());
        masiclabel->setText(QApplication::translate("ScreenPenSettingWidget", "\346\250\241\347\263\212\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenPenSettingWidget: public Ui_ScreenPenSettingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENPENSETTINGWIDGET_H

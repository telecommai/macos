/********************************************************************************
** Form generated from reading UI file 'ChooseUnitWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEUNITWIDGET_H
#define UI_CHOOSEUNITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseUnitWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mPButtonConfirm;

    void setupUi(QWidget *ChooseUnitWidget)
    {
        if (ChooseUnitWidget->objectName().isEmpty())
            ChooseUnitWidget->setObjectName(QStringLiteral("ChooseUnitWidget"));
        ChooseUnitWidget->resize(300, 356);
        ChooseUnitWidget->setMinimumSize(QSize(300, 0));
        ChooseUnitWidget->setMaximumSize(QSize(1677215, 16777215));
        verticalLayout = new QVBoxLayout(ChooseUnitWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, -1);
        widget = new QWidget(ChooseUnitWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        widget->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 3, 3, 6);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(143, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(24, 24));
        pushButton->setMaximumSize(QSize(24, 24));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/close.png);"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(ChooseUnitWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"border: none;\n"
"background-color: rgba(0,0,0, 0);\n"
"}\n"
"QListWidget::item:hover\n"
"{\n"
"padding: -1px;\n"
"background-color: #eeeeee;\n"
"}\n"
"QListWidget::item\n"
"{\n"
"border-bottom:1px solid #eeeeee;\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"padding: -1px;\n"
"background-color: #cc3333;\n"
"border:none;\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"	border:none;\n"
"    width:10px;\n"
"    background:white;\n"
"\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:10px;\n"
"    background-color:#b8b8b8;\n"
"    border-radius:4px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:10px;  \n"
"	background-color:#b8b8b8;\n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
"{\n"
"	border:none;\n"
"}\n"
"QScrollBar::sub-line:vertical  \n"
"{\n"
"	border:none;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical   \n"
"{\n"
"    background: white;\n"
"    border-radius:4px;\n"
"}"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        horizontalLayout_2->addWidget(listWidget);


        verticalLayout->addWidget(widget_3);

        widget_2 = new QWidget(ChooseUnitWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color:#eeeeee;"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(12, -1, 12, -1);
        mPButtonConfirm = new QPushButton(widget_2);
        mPButtonConfirm->setObjectName(QStringLiteral("mPButtonConfirm"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPButtonConfirm->sizePolicy().hasHeightForWidth());
        mPButtonConfirm->setSizePolicy(sizePolicy);
        mPButtonConfirm->setMinimumSize(QSize(0, 25));
        mPButtonConfirm->setFont(font);
        mPButtonConfirm->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonConfirm->setStyleSheet(QLatin1String("border:none;\n"
"color:white;\n"
"background-color:#CC3333;\n"
"border-radius:5px;"));

        horizontalLayout_3->addWidget(mPButtonConfirm);


        verticalLayout->addWidget(widget_2);


        retranslateUi(ChooseUnitWidget);

        QMetaObject::connectSlotsByName(ChooseUnitWidget);
    } // setupUi

    void retranslateUi(QWidget *ChooseUnitWidget)
    {
        ChooseUnitWidget->setWindowTitle(QApplication::translate("ChooseUnitWidget", "ChooseUnitWidget", nullptr));
        label->setText(QApplication::translate("ChooseUnitWidget", "Choose red packet token", nullptr));
        pushButton->setText(QString());
        mPButtonConfirm->setText(QApplication::translate("ChooseUnitWidget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseUnitWidget: public Ui_ChooseUnitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEUNITWIDGET_H

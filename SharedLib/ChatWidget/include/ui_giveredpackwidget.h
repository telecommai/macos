/********************************************************************************
** Form generated from reading UI file 'giveredpackwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIVEREDPACKWIDGET_H
#define UI_GIVEREDPACKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GiveRedPackWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QPushButton *closeBtn;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *tokenWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *coinLabel;
    QPushButton *pushButton_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *balanceLabel;
    QPushButton *turnInBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *coinNumWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *numberEdit;
    QLabel *label_11;
    QWidget *remarkWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *remarkEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *giveLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *recordBtn;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *giveBtn;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;

    void setupUi(QWidget *GiveRedPackWidget)
    {
        if (GiveRedPackWidget->objectName().isEmpty())
            GiveRedPackWidget->setObjectName(QStringLiteral("GiveRedPackWidget"));
        GiveRedPackWidget->resize(351, 317);
        GiveRedPackWidget->setMinimumSize(QSize(328, 0));
        GiveRedPackWidget->setMaximumSize(QSize(16777215, 320));
        verticalLayout = new QVBoxLayout(GiveRedPackWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        topWidget = new QWidget(GiveRedPackWidget);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        topWidget->setMinimumSize(QSize(0, 40));
        topWidget->setMaximumSize(QSize(16777215, 40));
        topWidget->setStyleSheet(QLatin1String("QWidget#topWidget\n"
"{\n"
"background-color: #cc3333;\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(topWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(3, 3, 3, -1);
        label_2 = new QLabel(topWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_2);

        closeBtn = new QPushButton(topWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(24, 24));
        closeBtn->setMaximumSize(QSize(24, 24));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setStyleSheet(QLatin1String("QPushButton#closeBtn\n"
"{\n"
"border-image: url(:/RedPacket/Resources/redPacket/close.png);\n"
"}\n"
"\n"
""));

        horizontalLayout_5->addWidget(closeBtn);


        verticalLayout->addWidget(topWidget);

        mainWidget = new QWidget(GiveRedPackWidget);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setStyleSheet(QLatin1String("QWidget#mainWidget\n"
"{\n"
"background-color: #ffffff;\n"
"border-bottom:1px solid #bbbbbb;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(mainWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 0, 3, 5);
        tokenWidget = new QWidget(mainWidget);
        tokenWidget->setObjectName(QStringLiteral("tokenWidget"));
        tokenWidget->setMinimumSize(QSize(0, 40));
        tokenWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(tokenWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_7 = new QLabel(tokenWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: #00000;"));

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        coinLabel = new QLabel(tokenWidget);
        coinLabel->setObjectName(QStringLiteral("coinLabel"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        coinLabel->setFont(font2);
        coinLabel->setStyleSheet(QStringLiteral("color: #333333;"));
        coinLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(coinLabel);

        pushButton_2 = new QPushButton(tokenWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(15, 20));
        pushButton_2->setMaximumSize(QSize(15, 20));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/rightArrow.PNG);"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addWidget(tokenWidget);

        widget_2 = new QWidget(mainWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("border-bottom:1px solid #eeeeee;"));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: #666666;"));

        horizontalLayout_7->addWidget(label_3);

        balanceLabel = new QLabel(widget_2);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(balanceLabel->sizePolicy().hasHeightForWidth());
        balanceLabel->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        balanceLabel->setFont(font3);
        balanceLabel->setStyleSheet(QStringLiteral("color: #000000;"));

        horizontalLayout_7->addWidget(balanceLabel);

        turnInBtn = new QPushButton(widget_2);
        turnInBtn->setObjectName(QStringLiteral("turnInBtn"));
        turnInBtn->setFont(font1);
        turnInBtn->setCursor(QCursor(Qt::PointingHandCursor));
        turnInBtn->setStyleSheet(QLatin1String("color:#cc3333;\n"
"border:none;"));

        horizontalLayout_7->addWidget(turnInBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget_2);

        coinNumWidget = new QWidget(mainWidget);
        coinNumWidget->setObjectName(QStringLiteral("coinNumWidget"));
        coinNumWidget->setMinimumSize(QSize(0, 40));
        coinNumWidget->setStyleSheet(QLatin1String("QWidget#coinNumWidget\n"
"{\n"
"background-color: #ffffff;\n"
"border-bottom:1px solid #eeeeee;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(coinNumWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(coinNumWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: #000000;"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(label_8);

        numberEdit = new QLineEdit(coinNumWidget);
        numberEdit->setObjectName(QStringLiteral("numberEdit"));
        numberEdit->setFont(font2);
        numberEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: none;\n"
"background-color: rgba(0,0,0, 0);\n"
"color: #333333;\n"
"}"));
        numberEdit->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        numberEdit->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(numberEdit);

        label_11 = new QLabel(coinNumWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral("color: #999999;"));
        label_11->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_2->addWidget(coinNumWidget);

        remarkWidget = new QWidget(mainWidget);
        remarkWidget->setObjectName(QStringLiteral("remarkWidget"));
        remarkWidget->setMinimumSize(QSize(0, 40));
        remarkWidget->setStyleSheet(QLatin1String("QWidget#remarkWidget\n"
"{\n"
"background-color: #ffffff;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(remarkWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_9 = new QLabel(remarkWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QStringLiteral("color: #000000;"));

        horizontalLayout_4->addWidget(label_9);

        remarkEdit = new QLineEdit(remarkWidget);
        remarkEdit->setObjectName(QStringLiteral("remarkEdit"));
        remarkEdit->setFont(font2);
        remarkEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: none;\n"
"background-color: rgba(0,0,0, 0);\n"
"color: #333333;\n"
"}"));
        remarkEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(remarkEdit);


        verticalLayout_2->addWidget(remarkWidget);


        verticalLayout->addWidget(mainWidget);

        widget = new QWidget(GiveRedPackWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        widget->setStyleSheet(QStringLiteral("background-color: #eeeeee;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        giveLabel = new QLabel(widget);
        giveLabel->setObjectName(QStringLiteral("giveLabel"));
        giveLabel->setMinimumSize(QSize(0, 25));
        giveLabel->setFont(font2);
        giveLabel->setStyleSheet(QStringLiteral("color: #cc3333;"));
        giveLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(giveLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        recordBtn = new QPushButton(widget);
        recordBtn->setObjectName(QStringLiteral("recordBtn"));
        recordBtn->setMinimumSize(QSize(0, 25));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        recordBtn->setFont(font4);
        recordBtn->setCursor(QCursor(Qt::PointingHandCursor));
        recordBtn->setStyleSheet(QLatin1String("QPushButton#recordBtn{\n"
"	border:none;\n"
"	color:#cc3333;\n"
"}\n"
"QPushButton#recordBtn::hover{\n"
"	color:#cc3333;\n"
"}"));

        horizontalLayout->addWidget(recordBtn);


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(GiveRedPackWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color: #eeeeee;"));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        giveBtn = new QPushButton(widget_3);
        giveBtn->setObjectName(QStringLiteral("giveBtn"));
        giveBtn->setMinimumSize(QSize(0, 30));
        giveBtn->setFont(font);
        giveBtn->setCursor(QCursor(Qt::PointingHandCursor));
        giveBtn->setStyleSheet(QLatin1String("QPushButton#giveBtn\n"
"{\n"
"border: none;\n"
"border-radius: 4px;\n"
"background-color: #cc3333;\n"
"color: white;\n"
"}"));

        horizontalLayout_6->addWidget(giveBtn);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(GiveRedPackWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setFont(font4);
        widget_4->setStyleSheet(QStringLiteral("background-color: #eeeeee;"));
        horizontalLayout_8 = new QHBoxLayout(widget_4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 6);
        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font4);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QStringLiteral("color:#cc6600;"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        horizontalLayout_8->addWidget(label);


        verticalLayout->addWidget(widget_4);

        QWidget::setTabOrder(numberEdit, remarkEdit);
        QWidget::setTabOrder(remarkEdit, closeBtn);

        retranslateUi(GiveRedPackWidget);

        QMetaObject::connectSlotsByName(GiveRedPackWidget);
    } // setupUi

    void retranslateUi(QWidget *GiveRedPackWidget)
    {
        GiveRedPackWidget->setWindowTitle(QApplication::translate("GiveRedPackWidget", "GiveRedPack", nullptr));
        label_2->setText(QApplication::translate("GiveRedPackWidget", "Red Packet", nullptr));
#ifndef QT_NO_TOOLTIP
        closeBtn->setToolTip(QApplication::translate("GiveRedPackWidget", "Close", nullptr));
#endif // QT_NO_TOOLTIP
        closeBtn->setText(QString());
        label_7->setText(QApplication::translate("GiveRedPackWidget", "Red Packet Token", nullptr));
        coinLabel->setText(QApplication::translate("GiveRedPackWidget", "PWR", nullptr));
        pushButton_2->setText(QString());
        label_3->setText(QApplication::translate("GiveRedPackWidget", "Escrow Balance", nullptr));
        balanceLabel->setText(QApplication::translate("GiveRedPackWidget", "0PWR", nullptr));
        turnInBtn->setText(QApplication::translate("GiveRedPackWidget", "Transfer", nullptr));
        label_8->setText(QApplication::translate("GiveRedPackWidget", "Amount Each", nullptr));
        numberEdit->setText(QString());
        numberEdit->setPlaceholderText(QApplication::translate("GiveRedPackWidget", "Set Amount", nullptr));
        label_11->setText(QApplication::translate("GiveRedPackWidget", "PWR", nullptr));
        label_9->setText(QApplication::translate("GiveRedPackWidget", "Message", nullptr));
        remarkEdit->setText(QString());
        remarkEdit->setPlaceholderText(QApplication::translate("GiveRedPackWidget", "Best wishes", nullptr));
        giveLabel->setText(QApplication::translate("GiveRedPackWidget", "Amount 0PWR", nullptr));
        recordBtn->setText(QApplication::translate("GiveRedPackWidget", "Red Packet History", nullptr));
        giveBtn->setText(QApplication::translate("GiveRedPackWidget", "Prepare Red Packet", nullptr));
        label->setText(QApplication::translate("GiveRedPackWidget", "Unclaimed red packet will be refunded after 24 hours", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GiveRedPackWidget: public Ui_GiveRedPackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIVEREDPACKWIDGET_H

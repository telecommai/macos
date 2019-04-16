/********************************************************************************
** Form generated from reading UI file 'GroupPackWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPPACKWIDGET_H
#define UI_GROUPPACKWIDGET_H

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

class Ui_GroupPackWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QPushButton *closeBtn;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *mPButtonRandom;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *mPButtonCommon;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QWidget *mainWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *tokenWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *coinLabel;
    QPushButton *pushButton_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *balanceLabel;
    QPushButton *turnInBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *coinNumWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *numberEdit;
    QLabel *label_11;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *countEdit;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
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

    void setupUi(QWidget *GroupPackWidget)
    {
        if (GroupPackWidget->objectName().isEmpty())
            GroupPackWidget->setObjectName(QStringLiteral("GroupPackWidget"));
        GroupPackWidget->resize(352, 431);
        GroupPackWidget->setMinimumSize(QSize(328, 0));
        GroupPackWidget->setMaximumSize(QSize(16777215, 1677215));
        verticalLayout = new QVBoxLayout(GroupPackWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        topWidget = new QWidget(GroupPackWidget);
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

        widget_5 = new QWidget(GroupPackWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QStringLiteral("background-color:#eeeeee;"));
        horizontalLayout_9 = new QHBoxLayout(widget_5);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        mPButtonRandom = new QPushButton(widget_5);
        mPButtonRandom->setObjectName(QStringLiteral("mPButtonRandom"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        mPButtonRandom->setFont(font1);
        mPButtonRandom->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonRandom->setStyleSheet(QLatin1String("border:none;\n"
"background-color:#eeeeee;\n"
"color:#cc3333;"));

        verticalLayout_3->addWidget(mPButtonRandom);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 1));
        label_5->setStyleSheet(QStringLiteral("background-color:#cc3333;"));

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_9->addLayout(verticalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mPButtonCommon = new QPushButton(widget_5);
        mPButtonCommon->setObjectName(QStringLiteral("mPButtonCommon"));
        mPButtonCommon->setFont(font1);
        mPButtonCommon->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonCommon->setStyleSheet(QLatin1String("border:none;\n"
"background-color:#eeeeee;\n"
"color:#999999;"));

        verticalLayout_4->addWidget(mPButtonCommon);

        label_6 = new QLabel(widget_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 1));
        label_6->setStyleSheet(QStringLiteral("background-color:#eeeeee;"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_9->addLayout(verticalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_5);

        mainWidget = new QWidget(GroupPackWidget);
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
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_7 = new QLabel(tokenWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("color: #00000;"));

        horizontalLayout_2->addWidget(label_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        coinLabel = new QLabel(tokenWidget);
        coinLabel->setObjectName(QStringLiteral("coinLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        coinLabel->setFont(font3);
        coinLabel->setStyleSheet(QLatin1String("border:none;\n"
"color: #333333;"));

        horizontalLayout_2->addWidget(coinLabel);

        pushButton_5 = new QPushButton(tokenWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(15, 20));
        pushButton_5->setMaximumSize(QSize(10, 16777215));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QLatin1String("border-image: url(:/RedPacket/Resources/redPacket/rightArrow.PNG);\n"
"margin-top:1px;"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_2->addWidget(tokenWidget);

        widget_2 = new QWidget(mainWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("border-bottom:1px solid #eeeeee;"));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, 4);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("color: #666666;"));

        horizontalLayout_7->addWidget(label_3);

        balanceLabel = new QLabel(widget_2);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(balanceLabel->sizePolicy().hasHeightForWidth());
        balanceLabel->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        balanceLabel->setFont(font4);
        balanceLabel->setStyleSheet(QStringLiteral("color: #000000;"));

        horizontalLayout_7->addWidget(balanceLabel);

        turnInBtn = new QPushButton(widget_2);
        turnInBtn->setObjectName(QStringLiteral("turnInBtn"));
        turnInBtn->setFont(font2);
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
"}"));
        horizontalLayout_3 = new QHBoxLayout(coinNumWidget);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        label_8 = new QLabel(coinNumWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("color: #000000;"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_8);

        label_4 = new QLabel(coinNumWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(15, 15));
        label_4->setMaximumSize(QSize(15, 15));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("background-color:#cc3333;\n"
"color:white;"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);

        numberEdit = new QLineEdit(coinNumWidget);
        numberEdit->setObjectName(QStringLiteral("numberEdit"));
        numberEdit->setMinimumSize(QSize(0, 0));
        numberEdit->setFont(font3);
        numberEdit->setFocusPolicy(Qt::StrongFocus);
        numberEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: none;\n"
"background-color: rgba(0,0,0, 0);\n"
"color: #333333;\n"
"}"));
        numberEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        numberEdit->setClearButtonEnabled(false);

        horizontalLayout_3->addWidget(numberEdit);

        label_11 = new QLabel(coinNumWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("color: #999999;\n"
"margin-top:1px;"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout_2->addWidget(coinNumWidget);

        widget_6 = new QWidget(mainWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("border-bottom:1px solid #eeeeee;"));
        horizontalLayout_10 = new QHBoxLayout(widget_6);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 4);
        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("color: #666666;"));

        horizontalLayout_10->addWidget(label_10);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(mainWidget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(0, 40));
        horizontalLayout_11 = new QHBoxLayout(widget_7);
        horizontalLayout_11->setSpacing(3);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, 0);
        label_13 = new QLabel(widget_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font2);

        horizontalLayout_11->addWidget(label_13);

        countEdit = new QLineEdit(widget_7);
        countEdit->setObjectName(QStringLiteral("countEdit"));
        countEdit->setFont(font3);
        countEdit->setFocusPolicy(Qt::StrongFocus);
        countEdit->setStyleSheet(QLatin1String("border: none;\n"
"background-color: rgba(0,0,0, 0);\n"
"color: #333333;\n"
""));
        countEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(countEdit);


        verticalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(mainWidget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setStyleSheet(QStringLiteral("border-bottom:1px solid #eeeeee;"));
        horizontalLayout_12 = new QHBoxLayout(widget_8);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        label_14 = new QLabel(widget_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font2);
        label_14->setStyleSheet(QStringLiteral("color: #666666;"));

        horizontalLayout_12->addWidget(label_14);


        verticalLayout_2->addWidget(widget_8);

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
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("color: #000000;"));

        horizontalLayout_4->addWidget(label_9);

        remarkEdit = new QLineEdit(remarkWidget);
        remarkEdit->setObjectName(QStringLiteral("remarkEdit"));
        remarkEdit->setFont(font3);
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

        widget = new QWidget(GroupPackWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        widget->setStyleSheet(QStringLiteral("background-color: #eeeeee;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, 4);
        giveLabel = new QLabel(widget);
        giveLabel->setObjectName(QStringLiteral("giveLabel"));
        giveLabel->setMinimumSize(QSize(0, 25));
        giveLabel->setFont(font3);
        giveLabel->setStyleSheet(QStringLiteral("color: #cc3333;"));
        giveLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(giveLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        recordBtn = new QPushButton(widget);
        recordBtn->setObjectName(QStringLiteral("recordBtn"));
        recordBtn->setMinimumSize(QSize(0, 25));
        recordBtn->setFont(font1);
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

        widget_3 = new QWidget(GroupPackWidget);
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

        widget_4 = new QWidget(GroupPackWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setFont(font1);
        widget_4->setStyleSheet(QStringLiteral("background-color: #eeeeee;"));
        horizontalLayout_8 = new QHBoxLayout(widget_4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 6);
        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QStringLiteral("color:#cc6600;"));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        horizontalLayout_8->addWidget(label);


        verticalLayout->addWidget(widget_4);

        QWidget::setTabOrder(numberEdit, closeBtn);

        retranslateUi(GroupPackWidget);

        QMetaObject::connectSlotsByName(GroupPackWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupPackWidget)
    {
        GroupPackWidget->setWindowTitle(QApplication::translate("GroupPackWidget", "GroupPackWidget", nullptr));
        label_2->setText(QApplication::translate("GroupPackWidget", "Red Packet", nullptr));
#ifndef QT_NO_TOOLTIP
        closeBtn->setToolTip(QApplication::translate("GroupPackWidget", "Close", nullptr));
#endif // QT_NO_TOOLTIP
        closeBtn->setText(QString());
        mPButtonRandom->setText(QApplication::translate("GroupPackWidget", "Random Red Packet", nullptr));
        label_5->setText(QString());
        mPButtonCommon->setText(QApplication::translate("GroupPackWidget", "Identical Red Packet", nullptr));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("GroupPackWidget", "Red Packet Token", nullptr));
        coinLabel->setText(QApplication::translate("GroupPackWidget", "PWR", nullptr));
        pushButton_5->setText(QString());
        label_3->setText(QApplication::translate("GroupPackWidget", "Escrow Balance", nullptr));
        balanceLabel->setText(QApplication::translate("GroupPackWidget", "0PWR", nullptr));
        turnInBtn->setText(QApplication::translate("GroupPackWidget", "Transfer", nullptr));
        label_8->setText(QApplication::translate("GroupPackWidget", "Total Amount", nullptr));
        label_4->setText(QApplication::translate("GroupPackWidget", "\346\213\274", nullptr));
        numberEdit->setText(QString());
        numberEdit->setPlaceholderText(QApplication::translate("GroupPackWidget", "Enter Number", nullptr));
        label_11->setText(QApplication::translate("GroupPackWidget", "PWR", nullptr));
        label_10->setText(QApplication::translate("GroupPackWidget", "Each person gets a random amount", nullptr));
        label_13->setText(QApplication::translate("GroupPackWidget", "Number of Red Packets", nullptr));
        countEdit->setPlaceholderText(QApplication::translate("GroupPackWidget", "Enter Number", nullptr));
        label_14->setText(QApplication::translate("GroupPackWidget", "There are", nullptr));
        label_9->setText(QApplication::translate("GroupPackWidget", "Message", nullptr));
        remarkEdit->setText(QString());
        remarkEdit->setPlaceholderText(QApplication::translate("GroupPackWidget", "Best Wishes", nullptr));
        giveLabel->setText(QApplication::translate("GroupPackWidget", "Amount 0PWR", nullptr));
        recordBtn->setText(QApplication::translate("GroupPackWidget", "Red Packet History", nullptr));
        giveBtn->setText(QApplication::translate("GroupPackWidget", "Prepare Red Packet", nullptr));
        label->setText(QApplication::translate("GroupPackWidget", "Unclaimed red packet will be refunded after 24 hours", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupPackWidget: public Ui_GroupPackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPPACKWIDGET_H

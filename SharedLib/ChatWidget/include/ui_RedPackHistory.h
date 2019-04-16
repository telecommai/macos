/********************************************************************************
** Form generated from reading UI file 'RedPackHistory.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDPACKHISTORY_H
#define UI_REDPACKHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedPackHistory
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPushButton *mPButtonClose;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_4;
    QPushButton *mPButtonReceive;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_9;
    QPushButton *mPButtonSend;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mLabelAvatar_0;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_12;
    QLabel *mLabelNickname_0;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_13;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacer_7;
    QLabel *mLabelNumOfPacks;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RedPackHistory)
    {
        if (RedPackHistory->objectName().isEmpty())
            RedPackHistory->setObjectName(QStringLiteral("RedPackHistory"));
        RedPackHistory->resize(300, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RedPackHistory->sizePolicy().hasHeightForWidth());
        RedPackHistory->setSizePolicy(sizePolicy);
        RedPackHistory->setMinimumSize(QSize(300, 500));
        RedPackHistory->setMaximumSize(QSize(300, 500));
        verticalLayout_5 = new QVBoxLayout(RedPackHistory);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, -1);
        widget_7 = new QWidget(RedPackHistory);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_12 = new QHBoxLayout(widget_7);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(6, 4, 6, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget_7);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label);

        mPButtonClose = new QPushButton(widget_7);
        mPButtonClose->setObjectName(QStringLiteral("mPButtonClose"));
        sizePolicy.setHeightForWidth(mPButtonClose->sizePolicy().hasHeightForWidth());
        mPButtonClose->setSizePolicy(sizePolicy);
        mPButtonClose->setMinimumSize(QSize(20, 20));
        mPButtonClose->setMaximumSize(QSize(20, 20));
        mPButtonClose->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonClose->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/close.png);"));

        horizontalLayout_3->addWidget(mPButtonClose);


        horizontalLayout_12->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(widget_7);

        widget_6 = new QWidget(RedPackHistory);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_10 = new QHBoxLayout(widget_6);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_11);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mPButtonReceive = new QPushButton(widget_6);
        mPButtonReceive->setObjectName(QStringLiteral("mPButtonReceive"));
        sizePolicy.setHeightForWidth(mPButtonReceive->sizePolicy().hasHeightForWidth());
        mPButtonReceive->setSizePolicy(sizePolicy);
        mPButtonReceive->setMinimumSize(QSize(80, 25));
        mPButtonReceive->setMaximumSize(QSize(80, 25));
        mPButtonReceive->setFont(font);
        mPButtonReceive->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonReceive->setStyleSheet(QLatin1String("border:none;\n"
"color:white;\n"
"text-align:bottom;\n"
"margin-left:1px;\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_4->addWidget(mPButtonReceive);

        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 1));
        label_5->setStyleSheet(QStringLiteral("background-color:#ffffff;"));

        verticalLayout_4->addWidget(label_5);


        horizontalLayout_15->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(15, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        mPButtonSend = new QPushButton(widget_6);
        mPButtonSend->setObjectName(QStringLiteral("mPButtonSend"));
        mPButtonSend->setMinimumSize(QSize(80, 25));
        mPButtonSend->setMaximumSize(QSize(80, 25));
        mPButtonSend->setFont(font);
        mPButtonSend->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonSend->setStyleSheet(QLatin1String("border:none;\n"
"color:#ff9999;\n"
"text-align:bottom;\n"
"margin-left:1px;\n"
""));

        verticalLayout_9->addWidget(mPButtonSend);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 1));
        label_3->setStyleSheet(QStringLiteral("background-color: #ffffff;"));

        verticalLayout_9->addWidget(label_3);


        horizontalLayout_15->addLayout(verticalLayout_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);


        horizontalLayout_10->addLayout(horizontalLayout_15);


        verticalLayout_5->addWidget(widget_6);

        widget_5 = new QWidget(RedPackHistory);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_8 = new QHBoxLayout(widget_5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        mLabelAvatar_0 = new QLabel(widget_5);
        mLabelAvatar_0->setObjectName(QStringLiteral("mLabelAvatar_0"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(mLabelAvatar_0->sizePolicy().hasHeightForWidth());
        mLabelAvatar_0->setSizePolicy(sizePolicy1);
        mLabelAvatar_0->setMinimumSize(QSize(50, 50));
        mLabelAvatar_0->setMaximumSize(QSize(50, 50));
        mLabelAvatar_0->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(mLabelAvatar_0);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        horizontalLayout_8->addLayout(horizontalLayout_9);


        verticalLayout_5->addWidget(widget_5);

        widget_4 = new QWidget(RedPackHistory);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_7 = new QHBoxLayout(widget_4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        mLabelNickname_0 = new QLabel(widget_4);
        mLabelNickname_0->setObjectName(QStringLiteral("mLabelNickname_0"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        mLabelNickname_0->setFont(font1);
        mLabelNickname_0->setStyleSheet(QStringLiteral("color:#ffffff;"));
        mLabelNickname_0->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(mLabelNickname_0);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:#ffffff;"));

        horizontalLayout_11->addWidget(label_6);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_13);


        horizontalLayout_7->addLayout(horizontalLayout_11);


        verticalLayout_5->addWidget(widget_4);

        widget_3 = new QWidget(RedPackHistory);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_7);

        mLabelNumOfPacks = new QLabel(widget_3);
        mLabelNumOfPacks->setObjectName(QStringLiteral("mLabelNumOfPacks"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        mLabelNumOfPacks->setFont(font2);
        mLabelNumOfPacks->setStyleSheet(QStringLiteral("color:#ffffff;"));
        mLabelNumOfPacks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_22->addWidget(mLabelNumOfPacks);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("color:#ffffff;"));

        horizontalLayout_22->addWidget(label_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_8);


        horizontalLayout_6->addLayout(horizontalLayout_22);


        verticalLayout_5->addWidget(widget_3);

        widget_2 = new QWidget(RedPackHistory);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_4->setFont(font4);
        label_4->setStyleSheet(QStringLiteral("color:#ff9999;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        horizontalLayout->addWidget(label_4);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(widget_2);

        widget = new QWidget(RedPackHistory);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 2, 0, 0);
        scrollArea_2 = new QScrollArea(page);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 100, 30));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, -1, 3, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));

        verticalLayout_8->addLayout(verticalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 275, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_3->addWidget(scrollArea_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 2, 0, 0);
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 283, 245));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, 3, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));

        verticalLayout_6->addLayout(verticalLayout_10);

        verticalSpacer = new QSpacerItem(20, 275, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        stackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(widget);


        retranslateUi(RedPackHistory);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RedPackHistory);
    } // setupUi

    void retranslateUi(QWidget *RedPackHistory)
    {
        RedPackHistory->setWindowTitle(QApplication::translate("RedPackHistory", "RedPackHistory", nullptr));
        label->setText(QApplication::translate("RedPackHistory", "Red Packet History", nullptr));
        mPButtonClose->setText(QString());
        mPButtonReceive->setText(QApplication::translate("RedPackHistory", "Received", nullptr));
        label_5->setText(QString());
        mPButtonSend->setText(QApplication::translate("RedPackHistory", "Sent", nullptr));
        label_3->setText(QString());
        mLabelAvatar_0->setText(QApplication::translate("RedPackHistory", "\346\210\221\346\230\257\345\244\264\345\203\217", nullptr));
        mLabelNickname_0->setText(QApplication::translate("RedPackHistory", "\346\210\221\346\230\257\346\230\265\347\247\260", nullptr));
        label_6->setText(QApplication::translate("RedPackHistory", "Received", nullptr));
        mLabelNumOfPacks->setText(QApplication::translate("RedPackHistory", "\346\210\221\346\230\257\347\272\242\345\214\205\346\225\260\351\207\217", nullptr));
        label_2->setText(QApplication::translate("RedPackHistory", "Packets", nullptr));
        label_4->setText(QApplication::translate("RedPackHistory", "Tokens received can be transfered into local wallet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedPackHistory: public Ui_RedPackHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDPACKHISTORY_H

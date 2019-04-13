/********************************************************************************
** Form generated from reading UI file 'RedPackDetail.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDPACKDETAIL_H
#define UI_REDPACKDETAIL_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RedPackDetail
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *mPButtonCheck;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mPButtonClose;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mLabelAvatar;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QLabel *mLabelNickname;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mLabelNotice;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *mLabelMyAmount;
    QLabel *mLabelUnit;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mLabelNumOfPacks;
    QSpacerItem *horizontalSpacer_5;
    QLabel *mLabelCommittedPacks;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *RedPackDetail)
    {
        if (RedPackDetail->objectName().isEmpty())
            RedPackDetail->setObjectName(QStringLiteral("RedPackDetail"));
        RedPackDetail->resize(300, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RedPackDetail->sizePolicy().hasHeightForWidth());
        RedPackDetail->setSizePolicy(sizePolicy);
        RedPackDetail->setMinimumSize(QSize(300, 500));
        RedPackDetail->setMaximumSize(QSize(300, 500));
        RedPackDetail->setStyleSheet(QStringLiteral(""));
        verticalLayout_5 = new QVBoxLayout(RedPackDetail);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        widget = new QWidget(RedPackDetail);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        mPButtonCheck = new QPushButton(widget);
        mPButtonCheck->setObjectName(QStringLiteral("mPButtonCheck"));
        mPButtonCheck->setMinimumSize(QSize(50, 0));
        mPButtonCheck->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(10);
        mPButtonCheck->setFont(font);
        mPButtonCheck->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonCheck->setStyleSheet(QLatin1String("border:none;\n"
"color:white;\n"
""));

        horizontalLayout_4->addWidget(mPButtonCheck);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(48, 0));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("color:white;\n"
"\n"
""));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(80, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        mPButtonClose = new QPushButton(widget);
        mPButtonClose->setObjectName(QStringLiteral("mPButtonClose"));
        sizePolicy.setHeightForWidth(mPButtonClose->sizePolicy().hasHeightForWidth());
        mPButtonClose->setSizePolicy(sizePolicy);
        mPButtonClose->setMinimumSize(QSize(20, 20));
        mPButtonClose->setMaximumSize(QSize(20, 20));
        mPButtonClose->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonClose->setStyleSheet(QLatin1String("border-image: url(:/RedPacket/Resources/redPacket/close.png);\n"
""));

        horizontalLayout_4->addWidget(mPButtonClose);


        horizontalLayout->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(widget);

        widget_2 = new QWidget(RedPackDetail);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral(""));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 15, -1, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        mLabelAvatar = new QLabel(widget_2);
        mLabelAvatar->setObjectName(QStringLiteral("mLabelAvatar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(mLabelAvatar->sizePolicy().hasHeightForWidth());
        mLabelAvatar->setSizePolicy(sizePolicy1);
        mLabelAvatar->setMinimumSize(QSize(50, 50));
        mLabelAvatar->setMaximumSize(QSize(50, 50));
        mLabelAvatar->setStyleSheet(QStringLiteral(""));
        mLabelAvatar->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(mLabelAvatar);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(widget_2);

        widget_3 = new QWidget(RedPackDetail);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_8 = new QHBoxLayout(widget_3);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 4, -1, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mLabelNickname = new QLabel(widget_3);
        mLabelNickname->setObjectName(QStringLiteral("mLabelNickname"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        mLabelNickname->setFont(font2);
        mLabelNickname->setStyleSheet(QStringLiteral("color:#ffffff;"));
        mLabelNickname->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(mLabelNickname);


        horizontalLayout_8->addLayout(verticalLayout_2);


        verticalLayout_5->addWidget(widget_3);

        widget_5 = new QWidget(RedPackDetail);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_11 = new QHBoxLayout(widget_5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 4, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mLabelNotice = new QLabel(widget_5);
        mLabelNotice->setObjectName(QStringLiteral("mLabelNotice"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        mLabelNotice->setFont(font3);
        mLabelNotice->setStyleSheet(QStringLiteral("color:#ffffff;"));
        mLabelNotice->setAlignment(Qt::AlignCenter);
        mLabelNotice->setWordWrap(true);

        horizontalLayout_5->addWidget(mLabelNotice);

        horizontalSpacer_11 = new QSpacerItem(6, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);


        horizontalLayout_11->addLayout(horizontalLayout_5);


        verticalLayout_5->addWidget(widget_5);

        widget_6 = new QWidget(RedPackDetail);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_12 = new QHBoxLayout(widget_6);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 6, -1, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        mLabelMyAmount = new QLabel(widget_6);
        mLabelMyAmount->setObjectName(QStringLiteral("mLabelMyAmount"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        mLabelMyAmount->setFont(font4);
        mLabelMyAmount->setStyleSheet(QStringLiteral("color:#ffffff;"));
        mLabelMyAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(mLabelMyAmount);

        mLabelUnit = new QLabel(widget_6);
        mLabelUnit->setObjectName(QStringLiteral("mLabelUnit"));
        mLabelUnit->setFont(font2);
        mLabelUnit->setStyleSheet(QStringLiteral("color:#ffffff;"));
        mLabelUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(mLabelUnit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        horizontalLayout_12->addLayout(horizontalLayout_2);


        verticalLayout_5->addWidget(widget_6);

        widget_7 = new QWidget(RedPackDetail);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QStringLiteral("background-color:#cc3333;"));
        horizontalLayout_13 = new QHBoxLayout(widget_7);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(4, -1, 4, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        mLabelNumOfPacks = new QLabel(widget_7);
        mLabelNumOfPacks->setObjectName(QStringLiteral("mLabelNumOfPacks"));
        mLabelNumOfPacks->setFont(font3);
        mLabelNumOfPacks->setStyleSheet(QStringLiteral("color:#ff9999;"));

        horizontalLayout_3->addWidget(mLabelNumOfPacks);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        mLabelCommittedPacks = new QLabel(widget_7);
        mLabelCommittedPacks->setObjectName(QStringLiteral("mLabelCommittedPacks"));
        mLabelCommittedPacks->setFont(font3);
        mLabelCommittedPacks->setStyleSheet(QStringLiteral("color:#ff9999;"));

        horizontalLayout_3->addWidget(mLabelCommittedPacks);


        horizontalLayout_13->addLayout(horizontalLayout_3);


        verticalLayout_5->addWidget(widget_7);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        widget_4 = new QWidget(RedPackDetail);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_10 = new QHBoxLayout(widget_4);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        scrollArea = new QScrollArea(widget_4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 286, 263));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 0, 3, 4);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 0, 2, 0);

        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 229, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_9->addWidget(scrollArea);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_5->addWidget(widget_4);


        retranslateUi(RedPackDetail);

        QMetaObject::connectSlotsByName(RedPackDetail);
    } // setupUi

    void retranslateUi(QWidget *RedPackDetail)
    {
        RedPackDetail->setWindowTitle(QApplication::translate("RedPackDetail", "redPackDetail", nullptr));
        mPButtonCheck->setText(QApplication::translate("RedPackDetail", "Records", nullptr));
        label->setText(QApplication::translate("RedPackDetail", "Details", nullptr));
        mPButtonClose->setText(QString());
        mLabelAvatar->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\345\244\264\345\203\217", nullptr));
        mLabelNickname->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\346\230\265\347\247\260", nullptr));
        mLabelNotice->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\347\272\242\345\214\205\345\244\207\346\263\250", nullptr));
        mLabelMyAmount->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\350\216\267\345\276\227\347\232\204\347\272\242\345\214\205\351\207\221\351\242\235", nullptr));
        mLabelUnit->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\347\272\242\345\214\205\345\215\225\344\275\215", nullptr));
        mLabelNumOfPacks->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\345\244\232\345\260\221\344\270\252\347\272\242\345\214\205", nullptr));
        mLabelCommittedPacks->setText(QApplication::translate("RedPackDetail", "\346\210\221\346\230\257\345\267\262\351\242\206\345\217\226\347\272\242\345\214\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RedPackDetail: public Ui_RedPackDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDPACKDETAIL_H

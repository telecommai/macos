/********************************************************************************
** Form generated from reading UI file 'openPack.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPACK_H
#define UI_OPENPACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenPacketWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPButtonClose;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mLabelAvatar;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mLabelNickname;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mLabelPack;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mPButtonOpen;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *mLabelicon;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OpenPacketWidget)
    {
        if (OpenPacketWidget->objectName().isEmpty())
            OpenPacketWidget->setObjectName(QStringLiteral("OpenPacketWidget"));
        OpenPacketWidget->resize(250, 380);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenPacketWidget->sizePolicy().hasHeightForWidth());
        OpenPacketWidget->setSizePolicy(sizePolicy);
        OpenPacketWidget->setMinimumSize(QSize(250, 380));
        OpenPacketWidget->setMaximumSize(QSize(250, 380));
        OpenPacketWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(OpenPacketWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(OpenPacketWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(246, 10));
        label->setMaximumSize(QSize(246, 10));
        label->setBaseSize(QSize(0, 30));
        label->setStyleSheet(QLatin1String("background-color:#FF4040;\n"
"border-radius:4px;\n"
"\n"
""));

        horizontalLayout_4->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        mPButtonClose = new QPushButton(OpenPacketWidget);
        mPButtonClose->setObjectName(QStringLiteral("mPButtonClose"));
        sizePolicy.setHeightForWidth(mPButtonClose->sizePolicy().hasHeightForWidth());
        mPButtonClose->setSizePolicy(sizePolicy);
        mPButtonClose->setMinimumSize(QSize(20, 20));
        mPButtonClose->setMaximumSize(QSize(20, 20));
        mPButtonClose->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonClose->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/close.png);"));

        horizontalLayout_3->addWidget(mPButtonClose);

        horizontalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mLabelAvatar = new QLabel(OpenPacketWidget);
        mLabelAvatar->setObjectName(QStringLiteral("mLabelAvatar"));
        sizePolicy.setHeightForWidth(mLabelAvatar->sizePolicy().hasHeightForWidth());
        mLabelAvatar->setSizePolicy(sizePolicy);
        mLabelAvatar->setMinimumSize(QSize(50, 50));
        mLabelAvatar->setMaximumSize(QSize(50, 50));
        mLabelAvatar->setStyleSheet(QLatin1String("border-radius:5px;\n"
"background-color:red;"));
        mLabelAvatar->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(mLabelAvatar);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        mLabelNickname = new QLabel(OpenPacketWidget);
        mLabelNickname->setObjectName(QStringLiteral("mLabelNickname"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(10);
        mLabelNickname->setFont(font);
        mLabelNickname->setStyleSheet(QStringLiteral("color:#FFDFB2;"));
        mLabelNickname->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(mLabelNickname);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        mLabelPack = new QLabel(OpenPacketWidget);
        mLabelPack->setObjectName(QStringLiteral("mLabelPack"));
        mLabelPack->setFont(font);
        mLabelPack->setStyleSheet(QStringLiteral("color:#FFDFB2;"));
        mLabelPack->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(mLabelPack);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(OpenPacketWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(16);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color:#FFDFB2;"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        mPButtonOpen = new QPushButton(OpenPacketWidget);
        mPButtonOpen->setObjectName(QStringLiteral("mPButtonOpen"));
        sizePolicy.setHeightForWidth(mPButtonOpen->sizePolicy().hasHeightForWidth());
        mPButtonOpen->setSizePolicy(sizePolicy);
        mPButtonOpen->setMinimumSize(QSize(80, 80));
        mPButtonOpen->setMaximumSize(QSize(80, 80));
        mPButtonOpen->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonOpen->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/wecahtview_red_package_open.png);"));

        horizontalLayout_9->addWidget(mPButtonOpen);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        mLabelicon = new QLabel(OpenPacketWidget);
        mLabelicon->setObjectName(QStringLiteral("mLabelicon"));
        sizePolicy.setHeightForWidth(mLabelicon->sizePolicy().hasHeightForWidth());
        mLabelicon->setSizePolicy(sizePolicy);
        mLabelicon->setMinimumSize(QSize(20, 20));
        mLabelicon->setMaximumSize(QSize(20, 20));
        QFont font2;
        font2.setStyleStrategy(QFont::PreferAntialias);
        mLabelicon->setFont(font2);
        mLabelicon->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/wchatview_red_package_bottom.png);"));
        mLabelicon->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(mLabelicon);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(OpenPacketWidget);

        QMetaObject::connectSlotsByName(OpenPacketWidget);
    } // setupUi

    void retranslateUi(QWidget *OpenPacketWidget)
    {
        OpenPacketWidget->setWindowTitle(QApplication::translate("OpenPacketWidget", "OpenPacket", nullptr));
        label->setText(QString());
        mPButtonClose->setText(QString());
        mLabelAvatar->setText(QApplication::translate("OpenPacketWidget", "\346\210\221\346\230\257\345\244\264\345\203\217", nullptr));
        mLabelNickname->setText(QApplication::translate("OpenPacketWidget", "\346\210\221\346\230\257\346\230\265\347\247\260", nullptr));
        mLabelPack->setText(QApplication::translate("OpenPacketWidget", "A red packet was sent to you", nullptr));
        label_5->setText(QApplication::translate("OpenPacketWidget", "Best Wishes", nullptr));
        mPButtonOpen->setText(QString());
        mLabelicon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OpenPacketWidget: public Ui_OpenPacketWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPACK_H

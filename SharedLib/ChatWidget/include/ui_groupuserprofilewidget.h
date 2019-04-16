/********************************************************************************
** Form generated from reading UI file 'groupuserprofilewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPUSERPROFILEWIDGET_H
#define UI_GROUPUSERPROFILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qlabelheader.h"

QT_BEGIN_NAMESPACE

class Ui_GroupUserProfileWidget
{
public:
    QWidget *backWidget;
    QWidget *midwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *lianxinLabel;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *addressLabel;
    QPushButton *copyAddressBtn;
    QWidget *spaceWidget;
    QWidget *topWidget;
    QLabelHeader *headerLabel;
    QLabel *starLabel;
    QWidget *nickWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nameLabel;
    QLabel *sexLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *signLabel;
    QWidget *bottomWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *applyBtn;
    QLabel *tipLabel;

    void setupUi(QWidget *GroupUserProfileWidget)
    {
        if (GroupUserProfileWidget->objectName().isEmpty())
            GroupUserProfileWidget->setObjectName(QStringLiteral("GroupUserProfileWidget"));
        GroupUserProfileWidget->resize(340, 510);
        backWidget = new QWidget(GroupUserProfileWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setGeometry(QRect(0, 0, 340, 510));
        backWidget->setStyleSheet(QLatin1String("QWidget#backWidget\n"
"{\n"
"background-color: #0b1d37;\n"
"}"));
        midwidget = new QWidget(backWidget);
        midwidget->setObjectName(QStringLiteral("midwidget"));
        midwidget->setGeometry(QRect(0, 250, 340, 90));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(midwidget->sizePolicy().hasHeightForWidth());
        midwidget->setSizePolicy(sizePolicy);
        midwidget->setMinimumSize(QSize(0, 90));
        midwidget->setMaximumSize(QSize(16777215, 90));
        midwidget->setStyleSheet(QLatin1String("QWidget#midwidget\n"
"{\n"
"background-color: #173156;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(midwidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(25, 0, 25, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(midwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(90, 0));
        label_7->setMaximumSize(QSize(50, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color: #6a82a5;"));

        horizontalLayout->addWidget(label_7);

        lianxinLabel = new QLabel(midwidget);
        lianxinLabel->setObjectName(QStringLiteral("lianxinLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        lianxinLabel->setFont(font1);
        lianxinLabel->setContextMenuPolicy(Qt::NoContextMenu);
        lianxinLabel->setStyleSheet(QStringLiteral("color: #108fe9;"));
        lianxinLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(lianxinLabel);


        verticalLayout_4->addLayout(horizontalLayout);

        line = new QFrame(midwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral("color: #6a82a5;"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(midwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(90, 0));
        label_6->setMaximumSize(QSize(50, 16777215));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color: #6a82a5;"));

        horizontalLayout_2->addWidget(label_6);

        addressLabel = new QLabel(midwidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setFont(font1);
        addressLabel->setStyleSheet(QStringLiteral("color: #108fe9;"));

        horizontalLayout_2->addWidget(addressLabel);

        copyAddressBtn = new QPushButton(midwidget);
        copyAddressBtn->setObjectName(QStringLiteral("copyAddressBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(copyAddressBtn->sizePolicy().hasHeightForWidth());
        copyAddressBtn->setSizePolicy(sizePolicy2);
        copyAddressBtn->setMinimumSize(QSize(16, 16));
        copyAddressBtn->setMaximumSize(QSize(16, 16));
        copyAddressBtn->setCursor(QCursor(Qt::PointingHandCursor));
        copyAddressBtn->setStyleSheet(QLatin1String("QPushButton#copyAddressBtn\n"
"{\n"
"border-image: url(:/ewallet/Resources/ewallet/copy.png);\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(copyAddressBtn);


        verticalLayout_4->addLayout(horizontalLayout_2);

        line->raise();
        spaceWidget = new QWidget(backWidget);
        spaceWidget->setObjectName(QStringLiteral("spaceWidget"));
        spaceWidget->setGeometry(QRect(0, 240, 340, 10));
        sizePolicy.setHeightForWidth(spaceWidget->sizePolicy().hasHeightForWidth());
        spaceWidget->setSizePolicy(sizePolicy);
        spaceWidget->setMinimumSize(QSize(0, 10));
        spaceWidget->setMaximumSize(QSize(16777215, 10));
        spaceWidget->setStyleSheet(QStringLiteral("background-color: #0b1d37;"));
        topWidget = new QWidget(backWidget);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        topWidget->setGeometry(QRect(0, 0, 340, 240));
        sizePolicy.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy);
        topWidget->setMinimumSize(QSize(0, 240));
        topWidget->setMaximumSize(QSize(16777215, 240));
        topWidget->setStyleSheet(QStringLiteral(""));
        headerLabel = new QLabelHeader(topWidget);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(20, 105, 60, 60));
        headerLabel->setMinimumSize(QSize(60, 60));
        headerLabel->setMaximumSize(QSize(60, 60));
        headerLabel->setCursor(QCursor(Qt::PointingHandCursor));
        headerLabel->setStyleSheet(QLatin1String("background-color: rgba(0,0,0,0);\n"
""));
        starLabel = new QLabel(topWidget);
        starLabel->setObjectName(QStringLiteral("starLabel"));
        starLabel->setGeometry(QRect(0, 0, 340, 135));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(starLabel->sizePolicy().hasHeightForWidth());
        starLabel->setSizePolicy(sizePolicy3);
        starLabel->setMinimumSize(QSize(0, 135));
        starLabel->setMaximumSize(QSize(16777215, 135));
        starLabel->setStyleSheet(QLatin1String("QLabel#starLabel\n"
"{\n"
"background-color: rgb(10,24,45);\n"
"}"));
        starLabel->setScaledContents(true);
        nickWidget = new QWidget(topWidget);
        nickWidget->setObjectName(QStringLiteral("nickWidget"));
        nickWidget->setGeometry(QRect(0, 135, 340, 105));
        nickWidget->setStyleSheet(QStringLiteral("background-color: #173156;"));
        verticalLayout_2 = new QVBoxLayout(nickWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(25, 5, 25, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(nickWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(40, 36));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Mine/Resources/mine/space.png);"));

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nameLabel = new QLabel(nickWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setMinimumSize(QSize(0, 28));
        nameLabel->setMaximumSize(QSize(16777215, 28));
        nameLabel->setFont(font);
        nameLabel->setStyleSheet(QStringLiteral("color: #108fe9;"));

        horizontalLayout_4->addWidget(nameLabel);

        sexLabel = new QLabel(nickWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setMinimumSize(QSize(20, 20));
        sexLabel->setMaximumSize(QSize(20, 20));
        sexLabel->setScaledContents(true);

        horizontalLayout_4->addWidget(sexLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        signLabel = new QLabel(nickWidget);
        signLabel->setObjectName(QStringLiteral("signLabel"));
        signLabel->setMinimumSize(QSize(0, 28));
        signLabel->setMaximumSize(QSize(16777215, 28));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        signLabel->setFont(font2);
        signLabel->setStyleSheet(QStringLiteral("color: #6a82a5;"));
        signLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(signLabel);

        starLabel->raise();
        nickWidget->raise();
        headerLabel->raise();
        bottomWidget = new QWidget(backWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setGeometry(QRect(0, 340, 340, 170));
        sizePolicy.setHeightForWidth(bottomWidget->sizePolicy().hasHeightForWidth());
        bottomWidget->setSizePolicy(sizePolicy);
        bottomWidget->setMaximumSize(QSize(16777215, 200));
        bottomWidget->setStyleSheet(QLatin1String("QWidget#bottomWidget\n"
"{\n"
"background-color: #0b1d37;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(bottomWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(25, -1, 25, 10);
        verticalSpacer_2 = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        applyBtn = new QPushButton(bottomWidget);
        applyBtn->setObjectName(QStringLiteral("applyBtn"));
        applyBtn->setMinimumSize(QSize(0, 40));
        applyBtn->setFont(font);
        applyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        applyBtn->setStyleSheet(QLatin1String("QPushButton#applyBtn\n"
"{\n"
"background-color: #108ee9;\n"
"border: none;\n"
"border-radius: 18px;\n"
"color: white;\n"
"}"));

        verticalLayout_3->addWidget(applyBtn);

        tipLabel = new QLabel(bottomWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        tipLabel->setFont(font3);
        tipLabel->setStyleSheet(QStringLiteral("color: #e4ba7b;"));
        tipLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(tipLabel);


        retranslateUi(GroupUserProfileWidget);

        QMetaObject::connectSlotsByName(GroupUserProfileWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupUserProfileWidget)
    {
        GroupUserProfileWidget->setWindowTitle(QApplication::translate("GroupUserProfileWidget", "GroupUserProfile", nullptr));
        label_7->setText(QApplication::translate("GroupUserProfileWidget", "Personal ID", nullptr));
        lianxinLabel->setText(QString());
        label_6->setText(QApplication::translate("GroupUserProfileWidget", "Base ID", nullptr));
        addressLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyAddressBtn->setToolTip(QApplication::translate("GroupUserProfileWidget", "Copy", nullptr));
#endif // QT_NO_TOOLTIP
        copyAddressBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        headerLabel->setToolTip(QApplication::translate("GroupUserProfileWidget", "View Avatar", nullptr));
#endif // QT_NO_TOOLTIP
        headerLabel->setText(QString());
        starLabel->setText(QString());
        label->setText(QString());
        nameLabel->setText(QString());
        sexLabel->setText(QString());
        signLabel->setText(QString());
        applyBtn->setText(QApplication::translate("GroupUserProfileWidget", "Add as friend", nullptr));
        tipLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GroupUserProfileWidget: public Ui_GroupUserProfileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPUSERPROFILEWIDGET_H

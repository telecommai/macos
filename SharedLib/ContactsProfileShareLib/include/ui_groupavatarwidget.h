/********************************************************************************
** Form generated from reading UI file 'groupavatarwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPAVATARWIDGET_H
#define UI_GROUPAVATARWIDGET_H

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

class Ui_GroupAvatarWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QLabel *titleLabel;
    QPushButton *closeBtn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QLabel *headerLabel;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *uploadBtn;
    QPushButton *confirmBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *GroupAvatarWidget)
    {
        if (GroupAvatarWidget->objectName().isEmpty())
            GroupAvatarWidget->setObjectName(QStringLiteral("GroupAvatarWidget"));
        GroupAvatarWidget->resize(300, 350);
        GroupAvatarWidget->setMinimumSize(QSize(300, 350));
        GroupAvatarWidget->setMaximumSize(QSize(300, 350));
        verticalLayout = new QVBoxLayout(GroupAvatarWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(GroupAvatarWidget);
        titleWidget->setObjectName(QStringLiteral("titleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy);
        titleWidget->setMinimumSize(QSize(0, 30));
        titleWidget->setMaximumSize(QSize(16777215, 30));
        horizontalLayout = new QHBoxLayout(titleWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, 0, 0);
        iconLabel = new QLabel(titleWidget);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setMinimumSize(QSize(26, 26));
        iconLabel->setMaximumSize(QSize(26, 26));

        horizontalLayout->addWidget(iconLabel);

        titleLabel = new QLabel(titleWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        sizePolicy.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        titleLabel->setFont(font);

        horizontalLayout->addWidget(titleLabel);

        closeBtn = new QPushButton(titleWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        sizePolicy1.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy1);
        closeBtn->setMinimumSize(QSize(28, 28));
        closeBtn->setMaximumSize(QSize(28, 28));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout->addWidget(titleWidget);

        widget_2 = new QWidget(GroupAvatarWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 0));
        widget_2->setMaximumSize(QSize(10000, 10000));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(6);
        widget_2->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(200, 200));
        scrollArea->setMaximumSize(QSize(200, 200));
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1000, 1000));
        scrollAreaWidgetContents->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        headerLabel = new QLabel(scrollAreaWidgetContents);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        sizePolicy1.setHeightForWidth(headerLabel->sizePolicy().hasHeightForWidth());
        headerLabel->setSizePolicy(sizePolicy1);
        headerLabel->setMinimumSize(QSize(1000, 1000));
        headerLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(headerLabel);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(widget_2);

        widget_4 = new QWidget(GroupAvatarWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(0, 60));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        uploadBtn = new QPushButton(widget_4);
        uploadBtn->setObjectName(QStringLiteral("uploadBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(uploadBtn->sizePolicy().hasHeightForWidth());
        uploadBtn->setSizePolicy(sizePolicy2);
        uploadBtn->setMinimumSize(QSize(60, 26));
        uploadBtn->setMaximumSize(QSize(16777215, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        uploadBtn->setFont(font2);

        horizontalLayout_2->addWidget(uploadBtn);

        confirmBtn = new QPushButton(widget_4);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(confirmBtn->sizePolicy().hasHeightForWidth());
        confirmBtn->setSizePolicy(sizePolicy3);
        confirmBtn->setMinimumSize(QSize(60, 0));
        confirmBtn->setMaximumSize(QSize(60, 26));
        confirmBtn->setFont(font2);

        horizontalLayout_2->addWidget(confirmBtn);

        cancelBtn = new QPushButton(widget_4);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        sizePolicy3.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy3);
        cancelBtn->setMinimumSize(QSize(60, 26));
        cancelBtn->setMaximumSize(QSize(70, 26));
        cancelBtn->setFont(font2);

        horizontalLayout_2->addWidget(cancelBtn);

        horizontalSpacer_2 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_4);


        retranslateUi(GroupAvatarWidget);

        QMetaObject::connectSlotsByName(GroupAvatarWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupAvatarWidget)
    {
        GroupAvatarWidget->setWindowTitle(QApplication::translate("GroupAvatarWidget", "Change avatar", nullptr));
        iconLabel->setText(QString());
        titleLabel->setText(QApplication::translate("GroupAvatarWidget", "Change avatar", nullptr));
        closeBtn->setText(QString());
        headerLabel->setText(QString());
        uploadBtn->setText(QApplication::translate("GroupAvatarWidget", "upload photos", nullptr));
        confirmBtn->setText(QApplication::translate("GroupAvatarWidget", "OK", nullptr));
        cancelBtn->setText(QApplication::translate("GroupAvatarWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupAvatarWidget: public Ui_GroupAvatarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPAVATARWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'contactswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSWIDGET_H
#define UI_CONTACTSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "groupprofilewidget.h"
#include "perprofilewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ContactsWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *tabsWidget;
    QVBoxLayout *verticalLayout;
    QWidget *searchWidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *searchLineWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchLineEdit;
    QPushButton *searchBtn;
    QStackedWidget *contactsStackedWidget;
    QHBoxLayout *buttonsLayout;
    QFrame *separateLine;
    QWidget *dataWidget;
    QHBoxLayout *horizontalLayout;
    perProfileWidget *perWidget;
    GroupProfileWidget *groupWidget;
    QListWidget *NewFriendWidget;

    void setupUi(QWidget *ContactsWidget)
    {
        if (ContactsWidget->objectName().isEmpty())
            ContactsWidget->setObjectName(QStringLiteral("ContactsWidget"));
        ContactsWidget->resize(1035, 583);
        horizontalLayout_2 = new QHBoxLayout(ContactsWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabsWidget = new QWidget(ContactsWidget);
        tabsWidget->setObjectName(QStringLiteral("tabsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabsWidget->sizePolicy().hasHeightForWidth());
        tabsWidget->setSizePolicy(sizePolicy);
        tabsWidget->setMinimumSize(QSize(280, 0));
        tabsWidget->setMaximumSize(QSize(280, 16777215));
        verticalLayout = new QVBoxLayout(tabsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        searchWidget = new QWidget(tabsWidget);
        searchWidget->setObjectName(QStringLiteral("searchWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchWidget->sizePolicy().hasHeightForWidth());
        searchWidget->setSizePolicy(sizePolicy1);
        searchWidget->setMinimumSize(QSize(0, 42));
        searchWidget->setMaximumSize(QSize(16777215, 42));
        horizontalLayout_4 = new QHBoxLayout(searchWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 9, 9, 9);
        searchLineWidget = new QWidget(searchWidget);
        searchLineWidget->setObjectName(QStringLiteral("searchLineWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchLineWidget->sizePolicy().hasHeightForWidth());
        searchLineWidget->setSizePolicy(sizePolicy2);
        searchLineWidget->setMinimumSize(QSize(23, 24));
        searchLineWidget->setMaximumSize(QSize(1000, 24));
        horizontalLayout_3 = new QHBoxLayout(searchLineWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        searchLineEdit = new QLineEdit(searchLineWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy3);
        searchLineEdit->setMinimumSize(QSize(1, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        searchLineEdit->setFont(font);
        searchLineEdit->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_3->addWidget(searchLineEdit);

        searchBtn = new QPushButton(searchLineWidget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy4);
        searchBtn->setMinimumSize(QSize(22, 22));
        searchBtn->setMaximumSize(QSize(22, 22));
        searchBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(searchBtn);


        horizontalLayout_4->addWidget(searchLineWidget);


        verticalLayout->addWidget(searchWidget);

        contactsStackedWidget = new QStackedWidget(tabsWidget);
        contactsStackedWidget->setObjectName(QStringLiteral("contactsStackedWidget"));
        contactsStackedWidget->setStyleSheet(QStringLiteral("W"));

        verticalLayout->addWidget(contactsStackedWidget);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setSpacing(0);
        buttonsLayout->setObjectName(QStringLiteral("buttonsLayout"));

        verticalLayout->addLayout(buttonsLayout);


        horizontalLayout_2->addWidget(tabsWidget);

        separateLine = new QFrame(ContactsWidget);
        separateLine->setObjectName(QStringLiteral("separateLine"));
        separateLine->setMinimumSize(QSize(2, 0));
        separateLine->setMaximumSize(QSize(2, 16777215));
        separateLine->setCursor(QCursor(Qt::SizeHorCursor));
        separateLine->setFrameShadow(QFrame::Raised);
        separateLine->setLineWidth(0);
        separateLine->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(separateLine);

        dataWidget = new QWidget(ContactsWidget);
        dataWidget->setObjectName(QStringLiteral("dataWidget"));
        sizePolicy3.setHeightForWidth(dataWidget->sizePolicy().hasHeightForWidth());
        dataWidget->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(dataWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        perWidget = new perProfileWidget(dataWidget);
        perWidget->setObjectName(QStringLiteral("perWidget"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(perWidget->sizePolicy().hasHeightForWidth());
        perWidget->setSizePolicy(sizePolicy5);
        perWidget->setMinimumSize(QSize(340, 510));
        perWidget->setMaximumSize(QSize(340, 510));

        horizontalLayout->addWidget(perWidget);

        groupWidget = new GroupProfileWidget(dataWidget);
        groupWidget->setObjectName(QStringLiteral("groupWidget"));
        sizePolicy5.setHeightForWidth(groupWidget->sizePolicy().hasHeightForWidth());
        groupWidget->setSizePolicy(sizePolicy5);
        groupWidget->setMinimumSize(QSize(340, 510));
        groupWidget->setMaximumSize(QSize(340, 510));

        horizontalLayout->addWidget(groupWidget);

        NewFriendWidget = new QListWidget(dataWidget);
        NewFriendWidget->setObjectName(QStringLiteral("NewFriendWidget"));
        sizePolicy5.setHeightForWidth(NewFriendWidget->sizePolicy().hasHeightForWidth());
        NewFriendWidget->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(NewFriendWidget);


        horizontalLayout_2->addWidget(dataWidget);


        retranslateUi(ContactsWidget);

        QMetaObject::connectSlotsByName(ContactsWidget);
    } // setupUi

    void retranslateUi(QWidget *ContactsWidget)
    {
        ContactsWidget->setWindowTitle(QApplication::translate("ContactsWidget", "ContactsWidget", nullptr));
#ifndef QT_NO_TOOLTIP
        searchLineWidget->setToolTip(QApplication::translate("ContactsWidget", "Search", nullptr));
#endif // QT_NO_TOOLTIP
        searchLineEdit->setInputMask(QString());
        searchLineEdit->setText(QString());
        searchLineEdit->setPlaceholderText(QApplication::translate("ContactsWidget", "Search", nullptr));
#ifndef QT_NO_TOOLTIP
        searchBtn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        searchBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContactsWidget: public Ui_ContactsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSWIDGET_H

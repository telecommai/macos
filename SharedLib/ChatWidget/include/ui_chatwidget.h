/********************************************************************************
** Form generated from reading UI file 'chatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "MessageWidget/messagelistview.h"
#include "SearchWidget/searchlist.h"

QT_BEGIN_NAMESPACE

class Ui_ChatWidget
{
public:
    QWidget *leftWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *searchWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *searchLineWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchLineEdit;
    QPushButton *searchBtn;
    QWidget *deviceWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QLabel *deviceLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    MessageListView *messageWidget;
    SearchList *searchList;
    QStackedWidget *chatStackedWidget;

    void setupUi(QSplitter *ChatWidget)
    {
        if (ChatWidget->objectName().isEmpty())
            ChatWidget->setObjectName(QStringLiteral("ChatWidget"));
        ChatWidget->resize(709, 462);
        ChatWidget->setOrientation(Qt::Horizontal);
        ChatWidget->setOpaqueResize(true);
        ChatWidget->setHandleWidth(2);
        ChatWidget->setChildrenCollapsible(false);
        leftWidget = new QWidget(ChatWidget);
        leftWidget->setObjectName(QStringLiteral("leftWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftWidget->sizePolicy().hasHeightForWidth());
        leftWidget->setSizePolicy(sizePolicy);
        leftWidget->setMinimumSize(QSize(150, 0));
        leftWidget->setMaximumSize(QSize(350, 16777215));
        verticalLayout_2 = new QVBoxLayout(leftWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        searchWidget = new QWidget(leftWidget);
        searchWidget->setObjectName(QStringLiteral("searchWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchWidget->sizePolicy().hasHeightForWidth());
        searchWidget->setSizePolicy(sizePolicy1);
        searchWidget->setMinimumSize(QSize(0, 42));
        searchWidget->setMaximumSize(QSize(16777215, 42));
        horizontalLayout_2 = new QHBoxLayout(searchWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, -1, 9);
        searchLineWidget = new QWidget(searchWidget);
        searchLineWidget->setObjectName(QStringLiteral("searchLineWidget"));
        sizePolicy1.setHeightForWidth(searchLineWidget->sizePolicy().hasHeightForWidth());
        searchLineWidget->setSizePolicy(sizePolicy1);
        searchLineWidget->setMinimumSize(QSize(23, 24));
        searchLineWidget->setMaximumSize(QSize(1000, 24));
        horizontalLayout_3 = new QHBoxLayout(searchLineWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        searchLineEdit = new QLineEdit(searchLineWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy2);
        searchLineEdit->setMinimumSize(QSize(1, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        searchLineEdit->setFont(font);
        searchLineEdit->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_3->addWidget(searchLineEdit);

        searchBtn = new QPushButton(searchLineWidget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy3);
        searchBtn->setMinimumSize(QSize(22, 22));
        searchBtn->setMaximumSize(QSize(22, 22));
        searchBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(searchBtn);


        horizontalLayout_2->addWidget(searchLineWidget);


        verticalLayout_2->addWidget(searchWidget);

        deviceWidget = new QWidget(leftWidget);
        deviceWidget->setObjectName(QStringLiteral("deviceWidget"));
        deviceWidget->setMaximumSize(QSize(16777215, 30));
        deviceWidget->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout = new QHBoxLayout(deviceWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 3, 0, 3);
        iconLabel = new QLabel(deviceWidget);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setMinimumSize(QSize(24, 24));
        iconLabel->setMaximumSize(QSize(24, 24));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/ewallet/Resources/ewallet/computer_icon.png")));
        iconLabel->setScaledContents(true);

        horizontalLayout->addWidget(iconLabel);

        deviceLabel = new QLabel(deviceWidget);
        deviceLabel->setObjectName(QStringLiteral("deviceLabel"));
        deviceLabel->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        deviceLabel->setFont(font1);
        deviceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(deviceLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(deviceWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        messageWidget = new MessageListView(leftWidget);
        messageWidget->setObjectName(QStringLiteral("messageWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(messageWidget->sizePolicy().hasHeightForWidth());
        messageWidget->setSizePolicy(sizePolicy4);
        messageWidget->setMinimumSize(QSize(0, 0));
        messageWidget->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(messageWidget);

        searchList = new SearchList(leftWidget);
        searchList->setObjectName(QStringLiteral("searchList"));
        sizePolicy4.setHeightForWidth(searchList->sizePolicy().hasHeightForWidth());
        searchList->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(searchList);


        verticalLayout_2->addLayout(horizontalLayout_4);

        ChatWidget->addWidget(leftWidget);
        chatStackedWidget = new QStackedWidget(ChatWidget);
        chatStackedWidget->setObjectName(QStringLiteral("chatStackedWidget"));
        ChatWidget->addWidget(chatStackedWidget);

        retranslateUi(ChatWidget);

        QMetaObject::connectSlotsByName(ChatWidget);
    } // setupUi

    void retranslateUi(QSplitter *ChatWidget)
    {
        ChatWidget->setWindowTitle(QApplication::translate("ChatWidget", "ChatWidget", nullptr));
#ifndef QT_NO_TOOLTIP
        searchLineWidget->setToolTip(QApplication::translate("ChatWidget", "Search", nullptr));
#endif // QT_NO_TOOLTIP
        searchLineEdit->setText(QString());
        searchLineEdit->setPlaceholderText(QApplication::translate("ChatWidget", "Search", nullptr));
#ifndef QT_NO_TOOLTIP
        searchBtn->setToolTip(QApplication::translate("ChatWidget", "Search", nullptr));
#endif // QT_NO_TOOLTIP
        searchBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        deviceWidget->setToolTip(QApplication::translate("ChatWidget", "View device list", nullptr));
#endif // QT_NO_TOOLTIP
        iconLabel->setText(QString());
        deviceLabel->setText(QApplication::translate("ChatWidget", "\345\275\223\345\211\215\350\264\246\346\210\267\345\234\250\345\205\266\344\273\2261\345\217\260\350\256\276\345\244\207\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWidget: public Ui_ChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H

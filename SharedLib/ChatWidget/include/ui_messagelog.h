/********************************************************************************
** Form generated from reading UI file 'messagelog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGELOG_H
#define UI_MESSAGELOG_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
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
#include "cfriendlistwidgetbase.h"

QT_BEGIN_NAMESPACE

class Ui_MessageLog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *iconLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *titleLabel;
    QPushButton *minBtn;
    QPushButton *maxBtn;
    QPushButton *closeBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *contactsBtn;
    QPushButton *groupBtn;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QPushButton *searchBtn;
    QPushButton *clearBtn;
    QHBoxLayout *horizontalLayout_2;
    CFriendListWidgetBase *perList;
    CFriendListWidgetBase *groupList;
    QVBoxLayout *verticalLayout_3;
    QWebEngineView *webView;
    QWidget *toolWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *dateBtn;
    QLabel *dateLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *firstPageBtn;
    QPushButton *lastPageBtn;
    QPushButton *nextPageBtn;
    QPushButton *endPageBtn;

    void setupUi(QWidget *MessageLog)
    {
        if (MessageLog->objectName().isEmpty())
            MessageLog->setObjectName(QStringLiteral("MessageLog"));
        MessageLog->resize(700, 515);
        MessageLog->setMinimumSize(QSize(700, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        MessageLog->setFont(font);
        verticalLayout = new QVBoxLayout(MessageLog);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleBar = new QWidget(MessageLog);
        titleBar->setObjectName(QStringLiteral("titleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy);
        titleBar->setMinimumSize(QSize(0, 30));
        titleBar->setMaximumSize(QSize(16777215, 30));
        horizontalLayout = new QHBoxLayout(titleBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        iconLabel = new QLabel(titleBar);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setMinimumSize(QSize(26, 26));
        iconLabel->setMaximumSize(QSize(26, 26));

        horizontalLayout->addWidget(iconLabel);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        titleLabel = new QLabel(titleBar);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        titleLabel->setFont(font1);

        horizontalLayout->addWidget(titleLabel);

        minBtn = new QPushButton(titleBar);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        sizePolicy1.setHeightForWidth(minBtn->sizePolicy().hasHeightForWidth());
        minBtn->setSizePolicy(sizePolicy1);
        minBtn->setMinimumSize(QSize(28, 28));
        minBtn->setMaximumSize(QSize(28, 28));

        horizontalLayout->addWidget(minBtn);

        maxBtn = new QPushButton(titleBar);
        maxBtn->setObjectName(QStringLiteral("maxBtn"));
        sizePolicy1.setHeightForWidth(maxBtn->sizePolicy().hasHeightForWidth());
        maxBtn->setSizePolicy(sizePolicy1);
        maxBtn->setMinimumSize(QSize(28, 28));
        maxBtn->setMaximumSize(QSize(28, 28));

        horizontalLayout->addWidget(maxBtn);

        closeBtn = new QPushButton(titleBar);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        sizePolicy1.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy1);
        closeBtn->setMinimumSize(QSize(28, 28));
        closeBtn->setMaximumSize(QSize(28, 28));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout->addWidget(titleBar);

        widget = new QWidget(MessageLog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 42));
        widget->setMaximumSize(QSize(16777215, 42));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 10, 2);
        contactsBtn = new QPushButton(widget);
        contactsBtn->setObjectName(QStringLiteral("contactsBtn"));
        sizePolicy1.setHeightForWidth(contactsBtn->sizePolicy().hasHeightForWidth());
        contactsBtn->setSizePolicy(sizePolicy1);
        contactsBtn->setMinimumSize(QSize(80, 42));
        contactsBtn->setMaximumSize(QSize(16777215, 42));
        contactsBtn->setFont(font1);
        contactsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        contactsBtn->setCheckable(true);
        contactsBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(contactsBtn);

        groupBtn = new QPushButton(widget);
        groupBtn->setObjectName(QStringLiteral("groupBtn"));
        sizePolicy1.setHeightForWidth(groupBtn->sizePolicy().hasHeightForWidth());
        groupBtn->setSizePolicy(sizePolicy1);
        groupBtn->setMinimumSize(QSize(80, 42));
        groupBtn->setMaximumSize(QSize(80, 42));
        groupBtn->setFont(font);
        groupBtn->setCursor(QCursor(Qt::PointingHandCursor));
        groupBtn->setCheckable(true);
        groupBtn->setAutoExclusive(true);

        horizontalLayout_3->addWidget(groupBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(110, 24));
        lineEdit->setMaximumSize(QSize(110, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setBold(false);
        font2.setWeight(50);
        lineEdit->setFont(font2);

        horizontalLayout_3->addWidget(lineEdit);

        searchBtn = new QPushButton(widget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setMinimumSize(QSize(42, 24));
        searchBtn->setFont(font2);

        horizontalLayout_3->addWidget(searchBtn);

        clearBtn = new QPushButton(widget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        sizePolicy1.setHeightForWidth(clearBtn->sizePolicy().hasHeightForWidth());
        clearBtn->setSizePolicy(sizePolicy1);
        clearBtn->setMinimumSize(QSize(42, 24));
        clearBtn->setMaximumSize(QSize(42, 24));

        horizontalLayout_3->addWidget(clearBtn);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        perList = new CFriendListWidgetBase(MessageLog);
        perList->setObjectName(QStringLiteral("perList"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(perList->sizePolicy().hasHeightForWidth());
        perList->setSizePolicy(sizePolicy3);
        perList->setMinimumSize(QSize(160, 0));
        perList->setMaximumSize(QSize(160, 16777215));
        perList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout_2->addWidget(perList);

        groupList = new CFriendListWidgetBase(MessageLog);
        groupList->setObjectName(QStringLiteral("groupList"));
        sizePolicy3.setHeightForWidth(groupList->sizePolicy().hasHeightForWidth());
        groupList->setSizePolicy(sizePolicy3);
        groupList->setMinimumSize(QSize(160, 0));
        groupList->setMaximumSize(QSize(160, 16777215));
        groupList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout_2->addWidget(groupList);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        webView = new QWebEngineView(MessageLog);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout_3->addWidget(webView);

        toolWidget = new QWidget(MessageLog);
        toolWidget->setObjectName(QStringLiteral("toolWidget"));
        sizePolicy.setHeightForWidth(toolWidget->sizePolicy().hasHeightForWidth());
        toolWidget->setSizePolicy(sizePolicy);
        toolWidget->setMinimumSize(QSize(0, 40));
        toolWidget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_4 = new QHBoxLayout(toolWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 0, 6, 0);
        dateBtn = new QPushButton(toolWidget);
        dateBtn->setObjectName(QStringLiteral("dateBtn"));
        sizePolicy1.setHeightForWidth(dateBtn->sizePolicy().hasHeightForWidth());
        dateBtn->setSizePolicy(sizePolicy1);
        dateBtn->setMinimumSize(QSize(30, 30));
        dateBtn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(dateBtn);

        dateLabel = new QLabel(toolWidget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(8);
        dateLabel->setFont(font3);

        horizontalLayout_4->addWidget(dateLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        firstPageBtn = new QPushButton(toolWidget);
        firstPageBtn->setObjectName(QStringLiteral("firstPageBtn"));
        firstPageBtn->setEnabled(true);
        sizePolicy1.setHeightForWidth(firstPageBtn->sizePolicy().hasHeightForWidth());
        firstPageBtn->setSizePolicy(sizePolicy1);
        firstPageBtn->setMinimumSize(QSize(30, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setBold(false);
        font4.setWeight(50);
        firstPageBtn->setFont(font4);

        horizontalLayout_4->addWidget(firstPageBtn);

        lastPageBtn = new QPushButton(toolWidget);
        lastPageBtn->setObjectName(QStringLiteral("lastPageBtn"));
        sizePolicy1.setHeightForWidth(lastPageBtn->sizePolicy().hasHeightForWidth());
        lastPageBtn->setSizePolicy(sizePolicy1);
        lastPageBtn->setMinimumSize(QSize(30, 30));
        lastPageBtn->setFont(font4);

        horizontalLayout_4->addWidget(lastPageBtn);

        nextPageBtn = new QPushButton(toolWidget);
        nextPageBtn->setObjectName(QStringLiteral("nextPageBtn"));
        nextPageBtn->setMinimumSize(QSize(30, 30));
        nextPageBtn->setFont(font4);

        horizontalLayout_4->addWidget(nextPageBtn);

        endPageBtn = new QPushButton(toolWidget);
        endPageBtn->setObjectName(QStringLiteral("endPageBtn"));
        endPageBtn->setMinimumSize(QSize(30, 30));
        endPageBtn->setFont(font4);

        horizontalLayout_4->addWidget(endPageBtn);


        verticalLayout_3->addWidget(toolWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        widget->raise();
        titleBar->raise();

        retranslateUi(MessageLog);

        QMetaObject::connectSlotsByName(MessageLog);
    } // setupUi

    void retranslateUi(QWidget *MessageLog)
    {
        MessageLog->setWindowTitle(QApplication::translate("MessageLog", "Message Log", nullptr));
        iconLabel->setText(QString());
        titleLabel->setText(QApplication::translate("MessageLog", "Messsage Log", nullptr));
        minBtn->setText(QString());
        maxBtn->setText(QString());
        closeBtn->setText(QString());
        contactsBtn->setText(QApplication::translate("MessageLog", "Friends", nullptr));
        groupBtn->setText(QApplication::translate("MessageLog", "Tribe", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MessageLog", "\360\237\224\216", nullptr));
        searchBtn->setText(QApplication::translate("MessageLog", "Search", nullptr));
        clearBtn->setText(QApplication::translate("MessageLog", "Clear", nullptr));
        dateBtn->setText(QString());
        dateLabel->setText(QString());
        firstPageBtn->setText(QApplication::translate("MessageLog", "|<", nullptr));
        lastPageBtn->setText(QApplication::translate("MessageLog", "<", nullptr));
        nextPageBtn->setText(QApplication::translate("MessageLog", ">", nullptr));
        endPageBtn->setText(QApplication::translate("MessageLog", ">|", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageLog: public Ui_MessageLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGELOG_H

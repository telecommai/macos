/********************************************************************************
** Form generated from reading UI file 'groupaddbuddywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPADDBUDDYWIDGET_H
#define UI_GROUPADDBUDDYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupAddBuddyWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *iconLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *titleLabel;
    QPushButton *closeBtn;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QListWidget *contactsList;
    QListWidget *searchList;
    QVBoxLayout *verticalLayout_2;
    QLabel *countLabel;
    QListWidget *memberList;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *enterBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *GroupAddBuddyWidget)
    {
        if (GroupAddBuddyWidget->objectName().isEmpty())
            GroupAddBuddyWidget->setObjectName(QStringLiteral("GroupAddBuddyWidget"));
        GroupAddBuddyWidget->resize(600, 450);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        GroupAddBuddyWidget->setFont(font);
        GroupAddBuddyWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: rgb(4,36,57);\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"	border:none;\n"
"    width:12px;\n"
"    background:rgba(0,0,0,0%);\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:12px;\n"
"    background:#073552;\n"
"    border-radius:4px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:12px;\n"
"    background:#073552;   \n"
"    border-radius:4px;\n"
"    min-height:20;\n"
"}\n"
"QScrollBar::add-line:vertical   \n"
"{\n"
"	border:none;\n"
"}\n"
"QScrollBar::sub-line:vertical  \n"
"{\n"
"	border:none;\n"
"}\n"
"QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical   \n"
"{\n"
"    background: #0a182d;\n"
"    border-radius:4px;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(GroupAddBuddyWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleBar = new QWidget(GroupAddBuddyWidget);
        titleBar->setObjectName(QStringLiteral("titleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy);
        titleBar->setMinimumSize(QSize(0, 30));
        titleBar->setMaximumSize(QSize(16777215, 30));
        titleBar->setStyleSheet(QLatin1String("QWidget#titleBar\n"
"{\n"
"background-color: #183257;\n"
"border: none;\n"
"}"));
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
        iconLabel->setStyleSheet(QLatin1String("QLabel#iconLabel\n"
"{\n"
"border-image: url(':/Login/Resources/login/system.ico');\n"
"}"));

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
        titleLabel->setStyleSheet(QLatin1String("QLabel#titleLabel\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(0,0,0, 0);\n"
"}"));

        horizontalLayout->addWidget(titleLabel);

        closeBtn = new QPushButton(titleBar);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        sizePolicy1.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy1);
        closeBtn->setMinimumSize(QSize(28, 28));
        closeBtn->setMaximumSize(QSize(28, 28));
        closeBtn->setStyleSheet(QLatin1String("QPushButton#closeBtn\n"
"{\n"
"border-image: url(':/PerChat/Resources/person/close01.png');\n"
"background-color: rgba(0,0,0, 0);\n"
"}\n"
"QPushButton#closeBtn:hover\n"
"{\n"
"border-image: url(':/PerChat/Resources/person/close03.png');\n"
"}"));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout_3->addWidget(titleBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 20, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, -1, 10, -1);
        lineEdit = new QLineEdit(GroupAddBuddyWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 30));
        lineEdit->setFont(font);
        lineEdit->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"border-radius: 4px;\n"
"color: white;"));

        verticalLayout->addWidget(lineEdit);

        contactsList = new QListWidget(GroupAddBuddyWidget);
        contactsList->setObjectName(QStringLiteral("contactsList"));
        contactsList->setStyleSheet(QStringLiteral("border: none;"));
        contactsList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(contactsList);

        searchList = new QListWidget(GroupAddBuddyWidget);
        searchList->setObjectName(QStringLiteral("searchList"));
        searchList->setStyleSheet(QStringLiteral("border: none;"));
        searchList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(searchList);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, -1, 20, -1);
        countLabel = new QLabel(GroupAddBuddyWidget);
        countLabel->setObjectName(QStringLiteral("countLabel"));
        countLabel->setMinimumSize(QSize(0, 30));
        countLabel->setFont(font);
        countLabel->setStyleSheet(QStringLiteral("color: white;"));

        verticalLayout_2->addWidget(countLabel);

        memberList = new QListWidget(GroupAddBuddyWidget);
        memberList->setObjectName(QStringLiteral("memberList"));
        memberList->setStyleSheet(QStringLiteral("border: none;"));
        memberList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(memberList);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        bottomWidget = new QWidget(GroupAddBuddyWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setStyleSheet(QLatin1String("QWidget#bottomWidget\n"
"{\n"
"background-color: #0A182D;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(bottomWidget);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 8, -1, 8);
        horizontalSpacer_3 = new QSpacerItem(445, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        enterBtn = new QPushButton(bottomWidget);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setMinimumSize(QSize(61, 27));
        enterBtn->setMaximumSize(QSize(61, 27));
        enterBtn->setFont(font);
        enterBtn->setCursor(QCursor(Qt::PointingHandCursor));
        enterBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #108ee9;\n"
"border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(enterBtn);

        cancelBtn = new QPushButton(bottomWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(61, 27));
        cancelBtn->setMaximumSize(QSize(61, 27));
        cancelBtn->setFont(font);
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #108ee9;\n"
"border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(cancelBtn);


        verticalLayout_3->addWidget(bottomWidget);

        QWidget::setTabOrder(lineEdit, contactsList);
        QWidget::setTabOrder(contactsList, memberList);
        QWidget::setTabOrder(memberList, enterBtn);
        QWidget::setTabOrder(enterBtn, cancelBtn);
        QWidget::setTabOrder(cancelBtn, closeBtn);
        QWidget::setTabOrder(closeBtn, searchList);

        retranslateUi(GroupAddBuddyWidget);

        QMetaObject::connectSlotsByName(GroupAddBuddyWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupAddBuddyWidget)
    {
        GroupAddBuddyWidget->setWindowTitle(QApplication::translate("GroupAddBuddyWidget", "GroupAddBuddy", nullptr));
        iconLabel->setText(QString());
        titleLabel->setText(QApplication::translate("GroupAddBuddyWidget", "Select contact(s)", nullptr));
        closeBtn->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("GroupAddBuddyWidget", "Search", nullptr));
        countLabel->setText(QApplication::translate("GroupAddBuddyWidget", "Please select contact(s) you want to invite", nullptr));
        enterBtn->setText(QApplication::translate("GroupAddBuddyWidget", "OK", nullptr));
        cancelBtn->setText(QApplication::translate("GroupAddBuddyWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupAddBuddyWidget: public Ui_GroupAddBuddyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPADDBUDDYWIDGET_H

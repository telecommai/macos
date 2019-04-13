/********************************************************************************
** Form generated from reading UI file 'imaddperson.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMADDPERSON_H
#define UI_IMADDPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMAddPerson
{
public:
    QPushButton *mPButtonFindAppNo;
    QStackedWidget *stackedWidget;
    QWidget *backWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPButtonFindPerson;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mPButtonFindGroup;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *IMAddPerson)
    {
        if (IMAddPerson->objectName().isEmpty())
            IMAddPerson->setObjectName(QStringLiteral("IMAddPerson"));
        IMAddPerson->resize(600, 447);
        mPButtonFindAppNo = new QPushButton(IMAddPerson);
        mPButtonFindAppNo->setObjectName(QStringLiteral("mPButtonFindAppNo"));
        mPButtonFindAppNo->setGeometry(QRect(460, 0, 121, 35));
        mPButtonFindAppNo->setCursor(QCursor(Qt::PointingHandCursor));
        stackedWidget = new QStackedWidget(IMAddPerson);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 62, 600, 385));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        backWidget = new QWidget(IMAddPerson);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setGeometry(QRect(0, 30, 601, 34));
        backWidget->setStyleSheet(QStringLiteral("background-color: rgb(24,50,87)"));
        horizontalLayout = new QHBoxLayout(backWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mPButtonFindPerson = new QPushButton(backWidget);
        mPButtonFindPerson->setObjectName(QStringLiteral("mPButtonFindPerson"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPButtonFindPerson->sizePolicy().hasHeightForWidth());
        mPButtonFindPerson->setSizePolicy(sizePolicy);
        mPButtonFindPerson->setMinimumSize(QSize(90, 32));
        mPButtonFindPerson->setMaximumSize(QSize(200, 32));
        mPButtonFindPerson->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonFindPerson->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(24,50,87);color: #6a82a5;border-style:hidden;font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; font-size:16px;font-weight:Bold;border:none;}\n"
"\n"
"\n"
"QPushButton:checked{background-color: rgb(24,50,87);color: #108ee9;border-style:hidden;font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; font-size:16px;font-weight:Bold;border-bottom: 2px solid #108ee9;}"));
        mPButtonFindPerson->setCheckable(true);
        mPButtonFindPerson->setAutoExclusive(true);

        horizontalLayout->addWidget(mPButtonFindPerson);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mPButtonFindGroup = new QPushButton(backWidget);
        mPButtonFindGroup->setObjectName(QStringLiteral("mPButtonFindGroup"));
        sizePolicy.setHeightForWidth(mPButtonFindGroup->sizePolicy().hasHeightForWidth());
        mPButtonFindGroup->setSizePolicy(sizePolicy);
        mPButtonFindGroup->setMinimumSize(QSize(90, 32));
        mPButtonFindGroup->setMaximumSize(QSize(200, 32));
        mPButtonFindGroup->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonFindGroup->setStyleSheet(QString::fromUtf8("QPushButton{background-color: rgb(24,50,87);color: #6a82a5;border-style:hidden;font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; font-size:16px;font-weight:Bold;border:none;}\n"
"\n"
"\n"
"QPushButton:checked{background-color: rgb(24,50,87);color: #108ee9;border-style:hidden;font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; font-size:16px;font-weight:Bold;border-bottom: 2px solid #108ee9;}"));
        mPButtonFindGroup->setCheckable(true);
        mPButtonFindGroup->setAutoExclusive(true);

        horizontalLayout->addWidget(mPButtonFindGroup);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(IMAddPerson);

        QMetaObject::connectSlotsByName(IMAddPerson);
    } // setupUi

    void retranslateUi(QWidget *IMAddPerson)
    {
        IMAddPerson->setWindowTitle(QApplication::translate("IMAddPerson", "Add friends", nullptr));
        mPButtonFindAppNo->setText(QApplication::translate("IMAddPerson", "Application number\n"
"service number", nullptr));
        mPButtonFindPerson->setText(QApplication::translate("IMAddPerson", "Find friend", nullptr));
        mPButtonFindGroup->setText(QApplication::translate("IMAddPerson", "Find tribe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IMAddPerson: public Ui_IMAddPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMADDPERSON_H

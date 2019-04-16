/********************************************************************************
** Form generated from reading UI file 'contactmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTMENUWIDGET_H
#define UI_CONTACTMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactMenuWidget
{
public:
    QPushButton *CreateBtn;
    QPushButton *AddBtn;
    QPushButton *picbtn1;
    QPushButton *picbtn2;

    void setupUi(QWidget *ContactMenuWidget)
    {
        if (ContactMenuWidget->objectName().isEmpty())
            ContactMenuWidget->setObjectName(QStringLiteral("ContactMenuWidget"));
        ContactMenuWidget->resize(140, 57);
        ContactMenuWidget->setMinimumSize(QSize(140, 0));
        ContactMenuWidget->setMaximumSize(QSize(140, 16777215));
        ContactMenuWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"	background-color:rgb(18,141,236);\n"
"}"));
        CreateBtn = new QPushButton(ContactMenuWidget);
        CreateBtn->setObjectName(QStringLiteral("CreateBtn"));
        CreateBtn->setGeometry(QRect(5, 0, 145, 26));
        CreateBtn->setMinimumSize(QSize(145, 0));
        CreateBtn->setMaximumSize(QSize(145, 26));
        CreateBtn->setCursor(QCursor(Qt::ArrowCursor));
        CreateBtn->setMouseTracking(true);
        CreateBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:white;\n"
"	font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221;\n"
"	font-weight:Regular;\n"
"	font-size:12px;\n"
"	background-color:rgb(49,161,239);\n"
"	border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color:white;\n"
"	font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221;\n"
"	font-weight:Regular;\n"
"	font-size:12px;\n"
"	background-color:rgb(49,161,239);\n"
"	border:none;\n"
"}\n"
""));
        AddBtn = new QPushButton(ContactMenuWidget);
        AddBtn->setObjectName(QStringLiteral("AddBtn"));
        AddBtn->setGeometry(QRect(5, 28, 145, 26));
        AddBtn->setMinimumSize(QSize(145, 0));
        AddBtn->setMaximumSize(QSize(145, 26));
        AddBtn->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color:white;\n"
"	font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221;\n"
"	font-weight:Regular;\n"
"	font-size:12px;\n"
"	background-color:rgb(18,141,236);\n"
"	border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color:white;\n"
"	font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221;\n"
"	font-weight:Regular;\n"
"	font-size:12px;\n"
"	background-color:rgb(18,141,236);\n"
"	border:none;\n"
"}\n"
""));
        picbtn1 = new QPushButton(ContactMenuWidget);
        picbtn1->setObjectName(QStringLiteral("picbtn1"));
        picbtn1->setGeometry(QRect(0, 0, 26, 26));
        picbtn1->setMaximumSize(QSize(26, 26));
        picbtn1->setStyleSheet(QLatin1String("image: url(:/addPerson/Resources/add/CreGrp.png);\n"
"background-color:rgb(49,161,239);\n"
"border:none;"));
        picbtn2 = new QPushButton(ContactMenuWidget);
        picbtn2->setObjectName(QStringLiteral("picbtn2"));
        picbtn2->setGeometry(QRect(0, 28, 26, 26));
        picbtn2->setMaximumSize(QSize(26, 26));
        picbtn2->setStyleSheet(QLatin1String("background-color:rgb(18,141,236);\n"
"image: url(:/addPerson/Resources/add/SerFri.png);\n"
"border:none;"));

        retranslateUi(ContactMenuWidget);

        QMetaObject::connectSlotsByName(ContactMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *ContactMenuWidget)
    {
        ContactMenuWidget->setWindowTitle(QApplication::translate("ContactMenuWidget", "ContactMenuWidget", nullptr));
        CreateBtn->setText(QApplication::translate("ContactMenuWidget", "Create tribe", nullptr));
        AddBtn->setText(QApplication::translate("ContactMenuWidget", "Add friend", nullptr));
        picbtn1->setText(QString());
        picbtn2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContactMenuWidget: public Ui_ContactMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTMENUWIDGET_H

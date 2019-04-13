/********************************************************************************
** Form generated from reading UI file 'imsearchperson.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMSEARCHPERSON_H
#define UI_IMSEARCHPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "cfriendtablewidgetbase.h"

QT_BEGIN_NAMESPACE

class Ui_IMSearchPerson
{
public:
    QLineEdit *mlineEditSearchPerson;
    QPushButton *mPButtonSearchPerson;
    QLabel *mLabelSearchPerson;
    QWidget *widget;
    CFriendTableWidgetBase *mListWidgetSearchPerson;

    void setupUi(QWidget *IMSearchPerson)
    {
        if (IMSearchPerson->objectName().isEmpty())
            IMSearchPerson->setObjectName(QStringLiteral("IMSearchPerson"));
        IMSearchPerson->resize(600, 385);
        mlineEditSearchPerson = new QLineEdit(IMSearchPerson);
        mlineEditSearchPerson->setObjectName(QStringLiteral("mlineEditSearchPerson"));
        mlineEditSearchPerson->setGeometry(QRect(20, 15, 470, 32));
        mlineEditSearchPerson->setContextMenuPolicy(Qt::NoContextMenu);
        mlineEditSearchPerson->setStyleSheet(QString::fromUtf8("background-color: rgb(56,116,188);\n"
"selection-color: rgb(56,116,188);\n"
"selection-background-color: white;\n"
"border:0px;\n"
"border-radius:4px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:white;\n"
"padding-left:10px;\n"
""));
        mPButtonSearchPerson = new QPushButton(IMSearchPerson);
        mPButtonSearchPerson->setObjectName(QStringLiteral("mPButtonSearchPerson"));
        mPButtonSearchPerson->setGeometry(QRect(500, 15, 72, 32));
        mPButtonSearchPerson->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonSearchPerson->setStyleSheet(QString::fromUtf8("background-color: rgb(56,116,188);\n"
"border-radius:4px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:white;\n"
"\n"
"\n"
""));
        mLabelSearchPerson = new QLabel(IMSearchPerson);
        mLabelSearchPerson->setObjectName(QStringLiteral("mLabelSearchPerson"));
        mLabelSearchPerson->setGeometry(QRect(0, 0, 600, 60));
        mLabelSearchPerson->setStyleSheet(QStringLiteral("background-color:#183257;"));
        widget = new QWidget(IMSearchPerson);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 60, 600, 325));
        widget->setStyleSheet(QStringLiteral("background-color:#183257;"));
        mListWidgetSearchPerson = new CFriendTableWidgetBase(widget);
        mListWidgetSearchPerson->setObjectName(QStringLiteral("mListWidgetSearchPerson"));
        mListWidgetSearchPerson->setGeometry(QRect(20, 0, 580, 325));
        mListWidgetSearchPerson->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:#183257;\n"
"border:0px;\n"
"color:white;\n"
"selection-background-color:rgb(4,36,57);\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"	border:none;\n"
"    width:12px;\n"
"    background:rgba(0,0,0,0%);\n"
"\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:12px;\n"
"    background: #073552;\n"
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
        mLabelSearchPerson->raise();
        mlineEditSearchPerson->raise();
        mPButtonSearchPerson->raise();
        widget->raise();

        retranslateUi(IMSearchPerson);

        QMetaObject::connectSlotsByName(IMSearchPerson);
    } // setupUi

    void retranslateUi(QWidget *IMSearchPerson)
    {
        IMSearchPerson->setWindowTitle(QApplication::translate("IMSearchPerson", "IMSearchPerson", nullptr));
        mlineEditSearchPerson->setText(QString());
        mPButtonSearchPerson->setText(QString());
        mLabelSearchPerson->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IMSearchPerson: public Ui_IMSearchPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMSEARCHPERSON_H

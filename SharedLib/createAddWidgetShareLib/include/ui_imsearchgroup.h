/********************************************************************************
** Form generated from reading UI file 'imsearchgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMSEARCHGROUP_H
#define UI_IMSEARCHGROUP_H

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

class Ui_IMSearchGroup
{
public:
    QLineEdit *mlineEditSearchGroup;
    QPushButton *mPButtonSearchGroup;
    QLabel *mLabelSearchGroup;
    QWidget *widget;
    CFriendTableWidgetBase *tableWidget;

    void setupUi(QWidget *IMSearchGroup)
    {
        if (IMSearchGroup->objectName().isEmpty())
            IMSearchGroup->setObjectName(QStringLiteral("IMSearchGroup"));
        IMSearchGroup->resize(600, 385);
        mlineEditSearchGroup = new QLineEdit(IMSearchGroup);
        mlineEditSearchGroup->setObjectName(QStringLiteral("mlineEditSearchGroup"));
        mlineEditSearchGroup->setGeometry(QRect(20, 15, 470, 32));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mlineEditSearchGroup->sizePolicy().hasHeightForWidth());
        mlineEditSearchGroup->setSizePolicy(sizePolicy);
        mlineEditSearchGroup->setMinimumSize(QSize(470, 32));
        mlineEditSearchGroup->setMaximumSize(QSize(470, 32));
        mlineEditSearchGroup->setContextMenuPolicy(Qt::NoContextMenu);
        mlineEditSearchGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(56,116,188);\n"
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
        mPButtonSearchGroup = new QPushButton(IMSearchGroup);
        mPButtonSearchGroup->setObjectName(QStringLiteral("mPButtonSearchGroup"));
        mPButtonSearchGroup->setGeometry(QRect(500, 15, 72, 32));
        sizePolicy.setHeightForWidth(mPButtonSearchGroup->sizePolicy().hasHeightForWidth());
        mPButtonSearchGroup->setSizePolicy(sizePolicy);
        mPButtonSearchGroup->setMinimumSize(QSize(72, 32));
        mPButtonSearchGroup->setMaximumSize(QSize(72, 32));
        mPButtonSearchGroup->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonSearchGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(56,116,188);\n"
"border-radius:4px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:white;\n"
"\n"
"\n"
""));
        mLabelSearchGroup = new QLabel(IMSearchGroup);
        mLabelSearchGroup->setObjectName(QStringLiteral("mLabelSearchGroup"));
        mLabelSearchGroup->setGeometry(QRect(0, 0, 600, 60));
        mLabelSearchGroup->setStyleSheet(QStringLiteral("background-color:#183257;"));
        widget = new QWidget(IMSearchGroup);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 60, 600, 325));
        tableWidget = new CFriendTableWidgetBase(widget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 610, 325));
        tableWidget->setStyleSheet(QLatin1String("QWidget\n"
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
        mLabelSearchGroup->raise();
        mlineEditSearchGroup->raise();
        mPButtonSearchGroup->raise();
        widget->raise();

        retranslateUi(IMSearchGroup);

        QMetaObject::connectSlotsByName(IMSearchGroup);
    } // setupUi

    void retranslateUi(QWidget *IMSearchGroup)
    {
        IMSearchGroup->setWindowTitle(QApplication::translate("IMSearchGroup", "IMSearchGroup", nullptr));
        mlineEditSearchGroup->setText(QString());
        mPButtonSearchGroup->setText(QString());
        mLabelSearchGroup->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IMSearchGroup: public Ui_IMSearchGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMSEARCHGROUP_H

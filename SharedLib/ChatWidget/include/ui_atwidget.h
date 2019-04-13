/********************************************************************************
** Form generated from reading UI file 'atwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATWIDGET_H
#define UI_ATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_AtWidget
{
public:

    void setupUi(QListWidget *AtWidget)
    {
        if (AtWidget->objectName().isEmpty())
            AtWidget->setObjectName(QStringLiteral("AtWidget"));
        AtWidget->resize(172, 191);
        AtWidget->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background-color: #0A182D;\n"
"color:  white;\n"
"border: none;\n"
"}\n"
"QListWidget::item:hover\n"
"{\n"
"    background-color: #183257;\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"    background-color: #183257;\n"
"	padding: -1px;\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"	border:none;\n"
"    width:10px;\n"
"    background:rgba(0,0,0,0%);\n"
"\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:10px;\n"
"    background:#073552;\n"
"    border-radius:4px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:10px;\n"
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
"    background: rgba(0,0,0,0);\n"
"}"));

        retranslateUi(AtWidget);

        QMetaObject::connectSlotsByName(AtWidget);
    } // setupUi

    void retranslateUi(QListWidget *AtWidget)
    {
        AtWidget->setWindowTitle(QApplication::translate("AtWidget", "AtWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AtWidget: public Ui_AtWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATWIDGET_H

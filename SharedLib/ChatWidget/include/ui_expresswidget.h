/********************************************************************************
** Form generated from reading UI file 'expresswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPRESSWIDGET_H
#define UI_EXPRESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpressWidget
{
public:

    void setupUi(QWidget *ExpressWidget)
    {
        if (ExpressWidget->objectName().isEmpty())
            ExpressWidget->setObjectName(QStringLiteral("ExpressWidget"));
        ExpressWidget->resize(400, 300);

        retranslateUi(ExpressWidget);

        QMetaObject::connectSlotsByName(ExpressWidget);
    } // setupUi

    void retranslateUi(QWidget *ExpressWidget)
    {
        ExpressWidget->setWindowTitle(QApplication::translate("ExpressWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpressWidget: public Ui_ExpressWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPRESSWIDGET_H

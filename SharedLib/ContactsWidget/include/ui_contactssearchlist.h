/********************************************************************************
** Form generated from reading UI file 'contactssearchlist.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSSEARCHLIST_H
#define UI_CONTACTSSEARCHLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactsSearchList
{
public:

    void setupUi(QListWidget *ContactsSearchList)
    {
        if (ContactsSearchList->objectName().isEmpty())
            ContactsSearchList->setObjectName(QStringLiteral("ContactsSearchList"));
        ContactsSearchList->resize(400, 300);

        retranslateUi(ContactsSearchList);

        QMetaObject::connectSlotsByName(ContactsSearchList);
    } // setupUi

    void retranslateUi(QListWidget *ContactsSearchList)
    {
        ContactsSearchList->setWindowTitle(QApplication::translate("ContactsSearchList", "ContactsSearchList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactsSearchList: public Ui_ContactsSearchList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSSEARCHLIST_H

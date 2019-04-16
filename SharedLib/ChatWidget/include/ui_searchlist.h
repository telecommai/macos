/********************************************************************************
** Form generated from reading UI file 'searchlist.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHLIST_H
#define UI_SEARCHLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchList
{
public:

    void setupUi(QWidget *SearchList)
    {
        if (SearchList->objectName().isEmpty())
            SearchList->setObjectName(QStringLiteral("SearchList"));
        SearchList->resize(400, 300);

        retranslateUi(SearchList);

        QMetaObject::connectSlotsByName(SearchList);
    } // setupUi

    void retranslateUi(QWidget *SearchList)
    {
        SearchList->setWindowTitle(QApplication::translate("SearchList", "SearchList", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchList: public Ui_SearchList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHLIST_H

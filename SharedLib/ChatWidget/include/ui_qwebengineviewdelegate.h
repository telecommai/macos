/********************************************************************************
** Form generated from reading UI file 'qwebengineviewdelegate.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWEBENGINEVIEWDELEGATE_H
#define UI_QWEBENGINEVIEWDELEGATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWebEngineViewDelegate
{
public:

    void setupUi(QWidget *QWebEngineViewDelegate)
    {
        if (QWebEngineViewDelegate->objectName().isEmpty())
            QWebEngineViewDelegate->setObjectName(QStringLiteral("QWebEngineViewDelegate"));
        QWebEngineViewDelegate->resize(400, 300);

        retranslateUi(QWebEngineViewDelegate);

        QMetaObject::connectSlotsByName(QWebEngineViewDelegate);
    } // setupUi

    void retranslateUi(QWidget *QWebEngineViewDelegate)
    {
        QWebEngineViewDelegate->setWindowTitle(QApplication::translate("QWebEngineViewDelegate", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWebEngineViewDelegate: public Ui_QWebEngineViewDelegate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWEBENGINEVIEWDELEGATE_H

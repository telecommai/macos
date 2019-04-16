/********************************************************************************
** Form generated from reading UI file 'updatewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEWIDGET_H
#define UI_UPDATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updateWidget
{
public:
    QLabel *mLabelBK;
    QLabel *labelOnline;
    QLabel *labelLogo;
    QLabel *labelUpdateContent;
    QLabel *labelContent;
    QPushButton *pushButton;
    QPushButton *updateButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *updateWidget)
    {
        if (updateWidget->objectName().isEmpty())
            updateWidget->setObjectName(QStringLiteral("updateWidget"));
        updateWidget->resize(500, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        updateWidget->setFont(font);
        mLabelBK = new QLabel(updateWidget);
        mLabelBK->setObjectName(QStringLiteral("mLabelBK"));
        mLabelBK->setGeometry(QRect(0, 0, 500, 227));
        labelOnline = new QLabel(updateWidget);
        labelOnline->setObjectName(QStringLiteral("labelOnline"));
        labelOnline->setGeometry(QRect(20, 10, 150, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        labelOnline->setFont(font1);
        labelLogo = new QLabel(updateWidget);
        labelLogo->setObjectName(QStringLiteral("labelLogo"));
        labelLogo->setGeometry(QRect(30, 40, 180, 180));
        labelUpdateContent = new QLabel(updateWidget);
        labelUpdateContent->setObjectName(QStringLiteral("labelUpdateContent"));
        labelUpdateContent->setGeometry(QRect(250, 40, 200, 20));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        labelUpdateContent->setFont(font2);
        labelContent = new QLabel(updateWidget);
        labelContent->setObjectName(QStringLiteral("labelContent"));
        labelContent->setGeometry(QRect(250, 75, 211, 141));
        pushButton = new QPushButton(updateWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(472, 0, 28, 28));
        updateButton = new QPushButton(updateWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(130, 250, 81, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        updateButton->setFont(font3);
        updateButton->setCursor(QCursor(Qt::PointingHandCursor));
        updateButton->setStyleSheet(QLatin1String("QPushButton#updateButton {\n"
"color:white;\n"
"background-color:#3692ef;\n"
"border: 1px solid blue;\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton#updateButton:hover {\n"
"color:black;\n"
"}"));
        cancelButton = new QPushButton(updateWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(300, 249, 81, 31));
        cancelButton->setFont(font3);
        cancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        cancelButton->setStyleSheet(QLatin1String("QPushButton#cancelButton {\n"
"color:white;\n"
"background-color:#3692ef;\n"
"border: 1px solid blue;\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton#cancelButton:hover {\n"
"color:black;\n"
"}"));

        retranslateUi(updateWidget);

        QMetaObject::connectSlotsByName(updateWidget);
    } // setupUi

    void retranslateUi(QWidget *updateWidget)
    {
        updateWidget->setWindowTitle(QApplication::translate("updateWidget", "Update", nullptr));
        mLabelBK->setText(QString());
        labelOnline->setText(QApplication::translate("updateWidget", "Update note", nullptr));
        labelLogo->setText(QString());
        labelUpdateContent->setText(QString());
        labelContent->setText(QString());
        pushButton->setText(QString());
        updateButton->setText(QApplication::translate("updateWidget", "Download", nullptr));
        cancelButton->setText(QApplication::translate("updateWidget", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateWidget: public Ui_updateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWIDGET_H

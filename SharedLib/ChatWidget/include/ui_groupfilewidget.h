/********************************************************************************
** Form generated from reading UI file 'groupfilewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPFILEWIDGET_H
#define UI_GROUPFILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupFileWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *backWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *informLabel;
    QTableWidget *tableWidget;

    void setupUi(QWidget *GroupFileWidget)
    {
        if (GroupFileWidget->objectName().isEmpty())
            GroupFileWidget->setObjectName(QStringLiteral("GroupFileWidget"));
        GroupFileWidget->resize(613, 419);
        GroupFileWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(GroupFileWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backWidget = new QWidget(GroupFileWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        font.setPointSize(11);
        backWidget->setFont(font);
        backWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #042439;\n"
"}\n"
"\n"
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
"    background-color: rgb(8, 67, 104);\n"
"    border-radius:4px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:12px;  \n"
"	background-color: rgb(8, 67, 104);\n"
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
"}\n"
"QScrollBar:horizontal\n"
"{\n"
"	border:none;\n"
"    height:12px;\n"
"    background:rgba(0,0,0,0%);\n"
"\n"
"}\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    height:12px;\n"
"    background-color: rgb(8, 67, 104);\n"
"    border-radius:4px;  \n"
"    min-widt"
                        "h:20;\n"
"}\n"
"QScrollBar::handle:horizontal:hover\n"
"{\n"
"    height:12px;  \n"
"	background-color: rgb(8, 67, 104);\n"
"    border-radius:4px;\n"
"    min-width:20;\n"
"}\n"
"QScrollBar::add-line:horizontal   \n"
"{\n"
"	border:none;\n"
"}\n"
"QScrollBar::sub-line:horizontal  \n"
"{\n"
"	border:none;\n"
"}\n"
"QScrollBar::add-page:horizontal,QScrollBar::sub-page:horizontal   \n"
"{\n"
"    background: #0a182d;\n"
"    border-radius:4px;\n"
"}"));
        verticalLayout = new QVBoxLayout(backWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        informLabel = new QLabel(backWidget);
        informLabel->setObjectName(QStringLiteral("informLabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(9);
        informLabel->setFont(font1);
        informLabel->setStyleSheet(QStringLiteral("color: #108ee9;"));

        horizontalLayout_2->addWidget(informLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(backWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QLatin1String("QHeaderView:section\n"
"{\n"
"border: none;\n"
"background-color: #183257;\n"
"color: #108ee9;\n"
"}\n"
"QTableWidget:item:selected\n"
"{ \n"
"background-color: #16396a;\n"
"color: #108ee9;\n"
"}"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(tableWidget);


        horizontalLayout->addWidget(backWidget);


        retranslateUi(GroupFileWidget);

        QMetaObject::connectSlotsByName(GroupFileWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupFileWidget)
    {
        GroupFileWidget->setWindowTitle(QApplication::translate("GroupFileWidget", "GroupFileWidget", nullptr));
        informLabel->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GroupFileWidget", "file", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GroupFileWidget", "upload time", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GroupFileWidget", "size", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GroupFileWidget", "uploaded by", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupFileWidget: public Ui_GroupFileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPFILEWIDGET_H

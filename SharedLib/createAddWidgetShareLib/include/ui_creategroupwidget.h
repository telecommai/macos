/********************************************************************************
** Form generated from reading UI file 'creategroupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUPWIDGET_H
#define UI_CREATEGROUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <cfriendlistwidgetbase.h>

QT_BEGIN_NAMESPACE

class Ui_CreateGroupWidget
{
public:
    QWidget *backWidget;
    QLineEdit *m_lineGroupName;
    QLabel *m_lbShowGroupMembersCount;
    QLineEdit *m_lineSearchText;
    CFriendListWidgetBase *m_listContactsList;
    CFriendListWidgetBase *m_listGroupMembers;
    QPushButton *m_btnCancel;
    QPushButton *m_btnConfirm;
    CFriendListWidgetBase *m_listSearch;
    QLabel *label_1;

    void setupUi(QWidget *CreateGroupWidget)
    {
        if (CreateGroupWidget->objectName().isEmpty())
            CreateGroupWidget->setObjectName(QStringLiteral("CreateGroupWidget"));
        CreateGroupWidget->resize(570, 450);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        CreateGroupWidget->setFont(font);
        CreateGroupWidget->setStyleSheet(QStringLiteral(""));
        backWidget = new QWidget(CreateGroupWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setGeometry(QRect(0, 30, 570, 420));
        backWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #183257;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"	border:none;\n"
"    width:12px;\n"
"    background:rgba(0,0,0,0%);\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:12px;\n"
"    background:#123C77;\n"
"    border-radius:6px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:12px;\n"
"    background:#123C77;   \n"
"    border-radius:6px;\n"
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
"    background: rgba(0,0,0, 0.2);\n"
"    border-radius:4px;\n"
"}"));
        m_lineGroupName = new QLineEdit(backWidget);
        m_lineGroupName->setObjectName(QStringLiteral("m_lineGroupName"));
        m_lineGroupName->setGeometry(QRect(380, 10, 171, 28));
        m_lineGroupName->setFont(font);
        m_lineGroupName->setContextMenuPolicy(Qt::NoContextMenu);
        m_lineGroupName->setStyleSheet(QLatin1String("border: 1px solid rgba(255,255,255,0.3);\n"
"border-radius: 4px;\n"
"color: white;"));
        m_lbShowGroupMembersCount = new QLabel(backWidget);
        m_lbShowGroupMembersCount->setObjectName(QStringLiteral("m_lbShowGroupMembersCount"));
        m_lbShowGroupMembersCount->setGeometry(QRect(290, 50, 271, 31));
        m_lbShowGroupMembersCount->setFont(font);
        m_lbShowGroupMembersCount->setStyleSheet(QStringLiteral("color: #6a82a5;"));
        m_lineSearchText = new QLineEdit(backWidget);
        m_lineSearchText->setObjectName(QStringLiteral("m_lineSearchText"));
        m_lineSearchText->setGeometry(QRect(10, 10, 260, 28));
        m_lineSearchText->setFont(font);
        m_lineSearchText->setContextMenuPolicy(Qt::NoContextMenu);
        m_lineSearchText->setStyleSheet(QLatin1String("border: 1px solid rgba(255,255,255,0.3);\n"
"border-radius: 4px;\n"
"color: white;"));
        m_listContactsList = new CFriendListWidgetBase(backWidget);
        m_listContactsList->setObjectName(QStringLiteral("m_listContactsList"));
        m_listContactsList->setGeometry(QRect(10, 50, 270, 360));
        QFont font1;
        font1.setPointSize(10);
        m_listContactsList->setFont(font1);
        m_listContactsList->setStyleSheet(QLatin1String("QListWidget::item:selected\n"
"{\n"
"	background-color:#163B68;\n"
"}"));
        m_listGroupMembers = new CFriendListWidgetBase(backWidget);
        m_listGroupMembers->setObjectName(QStringLiteral("m_listGroupMembers"));
        m_listGroupMembers->setGeometry(QRect(290, 89, 270, 281));
        m_listGroupMembers->setFont(font);
        m_listGroupMembers->setStyleSheet(QLatin1String("QListWidget::item:selected\n"
"{\n"
"	background-color:#163B68;\n"
"}"));
        m_btnCancel = new QPushButton(backWidget);
        m_btnCancel->setObjectName(QStringLiteral("m_btnCancel"));
        m_btnCancel->setGeometry(QRect(500, 380, 61, 27));
        m_btnCancel->setFont(font);
        m_btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        m_btnCancel->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #108ee9;\n"
"border-radius: 5px;\n"
"}"));
        m_btnConfirm = new QPushButton(backWidget);
        m_btnConfirm->setObjectName(QStringLiteral("m_btnConfirm"));
        m_btnConfirm->setGeometry(QRect(430, 380, 61, 27));
        m_btnConfirm->setFont(font);
        m_btnConfirm->setCursor(QCursor(Qt::PointingHandCursor));
        m_btnConfirm->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #108ee9;\n"
"border-radius: 5px;\n"
"}color: white;"));
        m_listSearch = new CFriendListWidgetBase(backWidget);
        m_listSearch->setObjectName(QStringLiteral("m_listSearch"));
        m_listSearch->setGeometry(QRect(10, 50, 271, 361));
        m_listSearch->setFont(font);
        m_listSearch->setStyleSheet(QLatin1String("QListWidget::item:selected\n"
"{\n"
"	background-color:#163B68;\n"
"}"));
        label_1 = new QLabel(backWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(290, 10, 90, 28));
        label_1->setFont(font);
        label_1->setStyleSheet(QStringLiteral("color: #108ee9;"));
        QWidget::setTabOrder(m_lineSearchText, m_lineGroupName);
        QWidget::setTabOrder(m_lineGroupName, m_listContactsList);
        QWidget::setTabOrder(m_listContactsList, m_listGroupMembers);
        QWidget::setTabOrder(m_listGroupMembers, m_btnConfirm);
        QWidget::setTabOrder(m_btnConfirm, m_btnCancel);
        QWidget::setTabOrder(m_btnCancel, m_listSearch);

        retranslateUi(CreateGroupWidget);

        QMetaObject::connectSlotsByName(CreateGroupWidget);
    } // setupUi

    void retranslateUi(QWidget *CreateGroupWidget)
    {
        CreateGroupWidget->setWindowTitle(QApplication::translate("CreateGroupWidget", "Create tribe", nullptr));
        m_lineGroupName->setText(QString());
        m_lineGroupName->setPlaceholderText(QApplication::translate("CreateGroupWidget", "the name of the tribe", nullptr));
        m_lbShowGroupMembersCount->setText(QApplication::translate("CreateGroupWidget", "Please tick the contacts you want to add", nullptr));
        m_lineSearchText->setText(QString());
        m_lineSearchText->setPlaceholderText(QApplication::translate("CreateGroupWidget", "Search for contacts", nullptr));
        m_btnCancel->setText(QApplication::translate("CreateGroupWidget", "Cancel", nullptr));
        m_btnConfirm->setText(QApplication::translate("CreateGroupWidget", "OK", nullptr));
        label_1->setText(QApplication::translate("CreateGroupWidget", "Tribal name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateGroupWidget: public Ui_CreateGroupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUPWIDGET_H

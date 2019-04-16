/********************************************************************************
** Form generated from reading UI file 'groupsearchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSEARCHWIDGET_H
#define UI_GROUPSEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupSearchWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QListWidget *listWidget;
    QFrame *line_2;
    QFrame *line_3;

    void setupUi(QWidget *GroupSearchWidget)
    {
        if (GroupSearchWidget->objectName().isEmpty())
            GroupSearchWidget->setObjectName(QStringLiteral("GroupSearchWidget"));
        GroupSearchWidget->resize(92, 26);
        GroupSearchWidget->setMinimumSize(QSize(30, 26));
        GroupSearchWidget->setAcceptDrops(false);
        verticalLayout_2 = new QVBoxLayout(GroupSearchWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(GroupSearchWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 24));
        lineEdit->setMaximumSize(QSize(16777215, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lineEdit->setFont(font);
        lineEdit->setContextMenuPolicy(Qt::NoContextMenu);

        verticalLayout_2->addWidget(lineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line_4 = new QFrame(GroupSearchWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setMinimumSize(QSize(0, 1));
        line_4->setMaximumSize(QSize(16777215, 1));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        line = new QFrame(GroupSearchWidget);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setMinimumSize(QSize(1, 0));
        line->setMaximumSize(QSize(1, 16777215));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        listWidget = new QListWidget(GroupSearchWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(0, 1));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout->addWidget(listWidget);

        line_2 = new QFrame(GroupSearchWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setMinimumSize(QSize(1, 0));
        line_2->setMaximumSize(QSize(1, 16777215));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);


        verticalLayout->addLayout(horizontalLayout);

        line_3 = new QFrame(GroupSearchWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        sizePolicy.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy);
        line_3->setMinimumSize(QSize(0, 1));
        line_3->setMaximumSize(QSize(16777215, 1));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(GroupSearchWidget);

        QMetaObject::connectSlotsByName(GroupSearchWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupSearchWidget)
    {
        GroupSearchWidget->setWindowTitle(QApplication::translate("GroupSearchWidget", "GroupSearchWidget", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("GroupSearchWidget", "Find Tribe Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupSearchWidget: public Ui_GroupSearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSEARCHWIDGET_H

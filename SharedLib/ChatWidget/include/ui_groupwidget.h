/********************************************************************************
** Form generated from reading UI file 'groupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPWIDGET_H
#define UI_GROUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *mGroupLabelBK;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mLabelGroupNickChat;
    QSpacerItem *horizontalSpacer;
    QPushButton *chatPageBtn;
    QPushButton *filePageBtn;
    QStackedWidget *mGroupStackedWidget;

    void setupUi(QWidget *GroupWidget)
    {
        if (GroupWidget->objectName().isEmpty())
            GroupWidget->setObjectName(QStringLiteral("GroupWidget"));
        GroupWidget->resize(630, 600);
        verticalLayout = new QVBoxLayout(GroupWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mGroupLabelBK = new QWidget(GroupWidget);
        mGroupLabelBK->setObjectName(QStringLiteral("mGroupLabelBK"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGroupLabelBK->sizePolicy().hasHeightForWidth());
        mGroupLabelBK->setSizePolicy(sizePolicy);
        mGroupLabelBK->setMinimumSize(QSize(0, 42));
        mGroupLabelBK->setMaximumSize(QSize(16777215, 42));
        horizontalLayout_2 = new QHBoxLayout(mGroupLabelBK);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 0, 0, 0);
        mLabelGroupNickChat = new QLabel(mGroupLabelBK);
        mLabelGroupNickChat->setObjectName(QStringLiteral("mLabelGroupNickChat"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        mLabelGroupNickChat->setFont(font);
        mLabelGroupNickChat->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(mLabelGroupNickChat);

        horizontalSpacer = new QSpacerItem(457, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        chatPageBtn = new QPushButton(mGroupLabelBK);
        chatPageBtn->setObjectName(QStringLiteral("chatPageBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chatPageBtn->sizePolicy().hasHeightForWidth());
        chatPageBtn->setSizePolicy(sizePolicy1);
        chatPageBtn->setMinimumSize(QSize(60, 0));
        chatPageBtn->setMaximumSize(QSize(60, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei"));
        font1.setPointSize(12);
        chatPageBtn->setFont(font1);
        chatPageBtn->setCursor(QCursor(Qt::PointingHandCursor));
        chatPageBtn->setCheckable(true);
        chatPageBtn->setChecked(true);
        chatPageBtn->setAutoExclusive(true);

        horizontalLayout_2->addWidget(chatPageBtn);

        filePageBtn = new QPushButton(mGroupLabelBK);
        filePageBtn->setObjectName(QStringLiteral("filePageBtn"));
        sizePolicy1.setHeightForWidth(filePageBtn->sizePolicy().hasHeightForWidth());
        filePageBtn->setSizePolicy(sizePolicy1);
        filePageBtn->setMinimumSize(QSize(60, 0));
        filePageBtn->setMaximumSize(QSize(60, 16777215));
        filePageBtn->setFont(font1);
        filePageBtn->setCursor(QCursor(Qt::PointingHandCursor));
        filePageBtn->setCheckable(true);
        filePageBtn->setChecked(false);
        filePageBtn->setAutoExclusive(true);

        horizontalLayout_2->addWidget(filePageBtn);


        verticalLayout->addWidget(mGroupLabelBK);

        mGroupStackedWidget = new QStackedWidget(GroupWidget);
        mGroupStackedWidget->setObjectName(QStringLiteral("mGroupStackedWidget"));

        verticalLayout->addWidget(mGroupStackedWidget);


        retranslateUi(GroupWidget);

        QMetaObject::connectSlotsByName(GroupWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupWidget)
    {
        GroupWidget->setWindowTitle(QApplication::translate("GroupWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        mLabelGroupNickChat->setToolTip(QApplication::translate("GroupWidget", "View the Details", nullptr));
#endif // QT_NO_TOOLTIP
        mLabelGroupNickChat->setText(QString());
        chatPageBtn->setText(QApplication::translate("GroupWidget", "chat", nullptr));
        filePageBtn->setText(QApplication::translate("GroupWidget", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupWidget: public Ui_GroupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPWIDGET_H

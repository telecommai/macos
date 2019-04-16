/********************************************************************************
** Form generated from reading UI file 'groupchatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPCHATWIDGET_H
#define UI_GROUPCHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GroupUserWidget/GroupUserList.h"
#include "qwebengineviewdelegate.h"

QT_BEGIN_NAMESPACE

class Ui_GroupChatWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QWebEngineViewDelegate *mGroupWebView;
    QWidget *mLabelBKTool;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *mPButtonGroupFont;
    QPushButton *mPButtonGroupExpress;
    QPushButton *mPButtonGroupShake;
    QPushButton *mPButtonGroupPicture;
    QPushButton *mPButtonGroupCutPicture;
    QPushButton *mPButtonGroupFile;
    QPushButton *mPButtonNotice;
    QPushButton *mPButtonGroupSpeak;
    QPushButton *mPButtonGroupRedPacket;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPButtonGroupLog;
    QPushButton *mPButtonGroupSend;
    QTextEdit *mTextEditGroup;
    QWidget *GroupUserWidget;
    QVBoxLayout *verticalLayout;
    QWidget *mLabelGroupWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *mLabelGroupNum;
    QPushButton *searchBtn;
    QPushButton *addBtn;
    QLabel *refreshBtn;
    GroupUserList *mGroupUserlistWidget;

    void setupUi(QWidget *GroupChatWidget)
    {
        if (GroupChatWidget->objectName().isEmpty())
            GroupChatWidget->setObjectName(QStringLiteral("GroupChatWidget"));
        GroupChatWidget->resize(629, 489);
        horizontalLayout_2 = new QHBoxLayout(GroupChatWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        mGroupWebView = new QWebEngineViewDelegate(GroupChatWidget);
        mGroupWebView->setObjectName(QStringLiteral("mGroupWebView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mGroupWebView->sizePolicy().hasHeightForWidth());
        mGroupWebView->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mGroupWebView);

        mLabelBKTool = new QWidget(GroupChatWidget);
        mLabelBKTool->setObjectName(QStringLiteral("mLabelBKTool"));
        horizontalLayout_3 = new QHBoxLayout(mLabelBKTool);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 4, 4, 0);
        mPButtonGroupFont = new QPushButton(mLabelBKTool);
        mPButtonGroupFont->setObjectName(QStringLiteral("mPButtonGroupFont"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mPButtonGroupFont->sizePolicy().hasHeightForWidth());
        mPButtonGroupFont->setSizePolicy(sizePolicy1);
        mPButtonGroupFont->setMinimumSize(QSize(30, 24));
        mPButtonGroupFont->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonGroupFont);

        mPButtonGroupExpress = new QPushButton(mLabelBKTool);
        mPButtonGroupExpress->setObjectName(QStringLiteral("mPButtonGroupExpress"));
        sizePolicy1.setHeightForWidth(mPButtonGroupExpress->sizePolicy().hasHeightForWidth());
        mPButtonGroupExpress->setSizePolicy(sizePolicy1);
        mPButtonGroupExpress->setMinimumSize(QSize(30, 24));
        mPButtonGroupExpress->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonGroupExpress);

        mPButtonGroupShake = new QPushButton(mLabelBKTool);
        mPButtonGroupShake->setObjectName(QStringLiteral("mPButtonGroupShake"));
        sizePolicy1.setHeightForWidth(mPButtonGroupShake->sizePolicy().hasHeightForWidth());
        mPButtonGroupShake->setSizePolicy(sizePolicy1);
        mPButtonGroupShake->setMinimumSize(QSize(30, 24));
        mPButtonGroupShake->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonGroupShake);

        mPButtonGroupPicture = new QPushButton(mLabelBKTool);
        mPButtonGroupPicture->setObjectName(QStringLiteral("mPButtonGroupPicture"));
        sizePolicy1.setHeightForWidth(mPButtonGroupPicture->sizePolicy().hasHeightForWidth());
        mPButtonGroupPicture->setSizePolicy(sizePolicy1);
        mPButtonGroupPicture->setMinimumSize(QSize(30, 24));
        mPButtonGroupPicture->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonGroupPicture);

        mPButtonGroupCutPicture = new QPushButton(mLabelBKTool);
        mPButtonGroupCutPicture->setObjectName(QStringLiteral("mPButtonGroupCutPicture"));
        sizePolicy1.setHeightForWidth(mPButtonGroupCutPicture->sizePolicy().hasHeightForWidth());
        mPButtonGroupCutPicture->setSizePolicy(sizePolicy1);
        mPButtonGroupCutPicture->setMinimumSize(QSize(30, 24));
        mPButtonGroupCutPicture->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonGroupCutPicture);

        mPButtonGroupFile = new QPushButton(mLabelBKTool);
        mPButtonGroupFile->setObjectName(QStringLiteral("mPButtonGroupFile"));
        sizePolicy1.setHeightForWidth(mPButtonGroupFile->sizePolicy().hasHeightForWidth());
        mPButtonGroupFile->setSizePolicy(sizePolicy1);
        mPButtonGroupFile->setMinimumSize(QSize(30, 24));
        mPButtonGroupFile->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonGroupFile);

        mPButtonNotice = new QPushButton(mLabelBKTool);
        mPButtonNotice->setObjectName(QStringLiteral("mPButtonNotice"));
        sizePolicy1.setHeightForWidth(mPButtonNotice->sizePolicy().hasHeightForWidth());
        mPButtonNotice->setSizePolicy(sizePolicy1);
        mPButtonNotice->setMinimumSize(QSize(30, 24));
        mPButtonNotice->setMaximumSize(QSize(30, 24));

        horizontalLayout_3->addWidget(mPButtonNotice);

        mPButtonGroupSpeak = new QPushButton(mLabelBKTool);
        mPButtonGroupSpeak->setObjectName(QStringLiteral("mPButtonGroupSpeak"));
        sizePolicy1.setHeightForWidth(mPButtonGroupSpeak->sizePolicy().hasHeightForWidth());
        mPButtonGroupSpeak->setSizePolicy(sizePolicy1);
        mPButtonGroupSpeak->setMinimumSize(QSize(30, 24));
        mPButtonGroupSpeak->setMaximumSize(QSize(30, 24));
        mPButtonGroupSpeak->setCheckable(true);

        horizontalLayout_3->addWidget(mPButtonGroupSpeak);

        mPButtonGroupRedPacket = new QPushButton(mLabelBKTool);
        mPButtonGroupRedPacket->setObjectName(QStringLiteral("mPButtonGroupRedPacket"));
        sizePolicy1.setHeightForWidth(mPButtonGroupRedPacket->sizePolicy().hasHeightForWidth());
        mPButtonGroupRedPacket->setSizePolicy(sizePolicy1);
        mPButtonGroupRedPacket->setMinimumSize(QSize(24, 24));
        mPButtonGroupRedPacket->setMaximumSize(QSize(24, 24));

        horizontalLayout_3->addWidget(mPButtonGroupRedPacket);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        mPButtonGroupLog = new QPushButton(mLabelBKTool);
        mPButtonGroupLog->setObjectName(QStringLiteral("mPButtonGroupLog"));
        mPButtonGroupLog->setMinimumSize(QSize(120, 22));
        mPButtonGroupLog->setMaximumSize(QSize(75, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        mPButtonGroupLog->setFont(font);

        horizontalLayout_3->addWidget(mPButtonGroupLog);

        mPButtonGroupSend = new QPushButton(mLabelBKTool);
        mPButtonGroupSend->setObjectName(QStringLiteral("mPButtonGroupSend"));
        mPButtonGroupSend->setMinimumSize(QSize(56, 22));
        mPButtonGroupSend->setMaximumSize(QSize(56, 22));
        mPButtonGroupSend->setFont(font);

        horizontalLayout_3->addWidget(mPButtonGroupSend);


        verticalLayout_2->addWidget(mLabelBKTool);

        mTextEditGroup = new QTextEdit(GroupChatWidget);
        mTextEditGroup->setObjectName(QStringLiteral("mTextEditGroup"));
        mTextEditGroup->setMinimumSize(QSize(0, 150));
        mTextEditGroup->setMaximumSize(QSize(16777215, 150));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        mTextEditGroup->setFont(font1);
        mTextEditGroup->setFocusPolicy(Qt::StrongFocus);

        verticalLayout_2->addWidget(mTextEditGroup);


        horizontalLayout_2->addLayout(verticalLayout_2);

        GroupUserWidget = new QWidget(GroupChatWidget);
        GroupUserWidget->setObjectName(QStringLiteral("GroupUserWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GroupUserWidget->sizePolicy().hasHeightForWidth());
        GroupUserWidget->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(GroupUserWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mLabelGroupWidget = new QWidget(GroupUserWidget);
        mLabelGroupWidget->setObjectName(QStringLiteral("mLabelGroupWidget"));
        horizontalLayout = new QHBoxLayout(mLabelGroupWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mLabelGroupNum = new QLabel(mLabelGroupWidget);
        mLabelGroupNum->setObjectName(QStringLiteral("mLabelGroupNum"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mLabelGroupNum->sizePolicy().hasHeightForWidth());
        mLabelGroupNum->setSizePolicy(sizePolicy3);
        mLabelGroupNum->setFont(font);

        horizontalLayout->addWidget(mLabelGroupNum);

        searchBtn = new QPushButton(mLabelGroupWidget);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        sizePolicy1.setHeightForWidth(searchBtn->sizePolicy().hasHeightForWidth());
        searchBtn->setSizePolicy(sizePolicy1);
        searchBtn->setMinimumSize(QSize(26, 26));
        searchBtn->setMaximumSize(QSize(26, 26));
        searchBtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchBtn->setLayoutDirection(Qt::RightToLeft);
        searchBtn->setCheckable(true);

        horizontalLayout->addWidget(searchBtn);

        addBtn = new QPushButton(mLabelGroupWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        sizePolicy1.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy1);
        addBtn->setMinimumSize(QSize(26, 26));
        addBtn->setMaximumSize(QSize(26, 26));
        addBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addBtn->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(addBtn);

        refreshBtn = new QLabel(mLabelGroupWidget);
        refreshBtn->setObjectName(QStringLiteral("refreshBtn"));
        sizePolicy1.setHeightForWidth(refreshBtn->sizePolicy().hasHeightForWidth());
        refreshBtn->setSizePolicy(sizePolicy1);
        refreshBtn->setMinimumSize(QSize(26, 26));
        refreshBtn->setMaximumSize(QSize(26, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setBold(false);
        font2.setWeight(50);
        refreshBtn->setFont(font2);
        refreshBtn->setCursor(QCursor(Qt::PointingHandCursor));
        refreshBtn->setPixmap(QPixmap(QString::fromUtf8(":/GroupChat/Resources/groupchat/refresh.png")));

        horizontalLayout->addWidget(refreshBtn);


        verticalLayout->addWidget(mLabelGroupWidget);

        mGroupUserlistWidget = new GroupUserList(GroupUserWidget);
        mGroupUserlistWidget->setObjectName(QStringLiteral("mGroupUserlistWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(mGroupUserlistWidget->sizePolicy().hasHeightForWidth());
        mGroupUserlistWidget->setSizePolicy(sizePolicy4);
        mGroupUserlistWidget->setMinimumSize(QSize(150, 0));
        mGroupUserlistWidget->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(mGroupUserlistWidget);


        horizontalLayout_2->addWidget(GroupUserWidget);


        retranslateUi(GroupChatWidget);

        QMetaObject::connectSlotsByName(GroupChatWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupChatWidget)
    {
        GroupChatWidget->setWindowTitle(QApplication::translate("GroupChatWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        mPButtonGroupFont->setToolTip(QApplication::translate("GroupChatWidget", "Font", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupFont->setText(QString());
#ifndef QT_NO_SHORTCUT
        mPButtonGroupFont->setShortcut(QApplication::translate("GroupChatWidget", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        mPButtonGroupExpress->setToolTip(QApplication::translate("GroupChatWidget", "Expressions", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupExpress->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupShake->setToolTip(QApplication::translate("GroupChatWidget", "Vibration", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupShake->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupPicture->setToolTip(QApplication::translate("GroupChatWidget", "Picture", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupPicture->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupCutPicture->setToolTip(QApplication::translate("GroupChatWidget", "Screen Cut", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupCutPicture->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupFile->setToolTip(QApplication::translate("GroupChatWidget", "File", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonNotice->setToolTip(QApplication::translate("GroupChatWidget", "Announcement", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonNotice->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupSpeak->setToolTip(QApplication::translate("GroupChatWidget", "Mute All", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupSpeak->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupRedPacket->setToolTip(QApplication::translate("GroupChatWidget", "Red Packet", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonGroupRedPacket->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonGroupLog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mPButtonGroupLog->setText(QApplication::translate("GroupChatWidget", "Message Log", nullptr));
#ifndef QT_NO_TOOLTIP
        mPButtonGroupSend->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mPButtonGroupSend->setText(QApplication::translate("GroupChatWidget", "Send", nullptr));
#ifndef QT_NO_SHORTCUT
        mPButtonGroupSend->setShortcut(QApplication::translate("GroupChatWidget", "Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        mLabelGroupNum->setText(QApplication::translate("GroupChatWidget", "Tribe Members", nullptr));
#ifndef QT_NO_TOOLTIP
        searchBtn->setToolTip(QApplication::translate("GroupChatWidget", "Search", nullptr));
#endif // QT_NO_TOOLTIP
        searchBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        addBtn->setToolTip(QApplication::translate("GroupChatWidget", "Add Member", nullptr));
#endif // QT_NO_TOOLTIP
        addBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        refreshBtn->setToolTip(QApplication::translate("GroupChatWidget", "Refresh", nullptr));
#endif // QT_NO_TOOLTIP
        refreshBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GroupChatWidget: public Ui_GroupChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPCHATWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'groupprofilewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPPROFILEWIDGET_H
#define UI_GROUPPROFILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupProfileWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *backWidget;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *groupLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_5;
    QLabel *numberLabel;
    QPushButton *QRcodeBtn;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *enEdit;
    QFrame *line_1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label1;
    QLabel *createrLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *timeLabel;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QPlainTextEdit *descEdit;
    QWidget *localWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_1;
    QLabel *managerLabel;
    QPushButton *addBtn;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QLineEdit *noteEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QPushButton *freeBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *joinBtn;
    QLabel *tipLabel;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;

    void setupUi(QWidget *GroupProfileWidget)
    {
        if (GroupProfileWidget->objectName().isEmpty())
            GroupProfileWidget->setObjectName(QStringLiteral("GroupProfileWidget"));
        GroupProfileWidget->resize(340, 510);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupProfileWidget->sizePolicy().hasHeightForWidth());
        GroupProfileWidget->setSizePolicy(sizePolicy);
        GroupProfileWidget->setMinimumSize(QSize(340, 510));
        verticalLayout = new QVBoxLayout(GroupProfileWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        backWidget = new QWidget(GroupProfileWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        topWidget = new QWidget(backWidget);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        topWidget->setGeometry(QRect(0, 0, 340, 100));
        topWidget->setMinimumSize(QSize(0, 100));
        topWidget->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_7 = new QHBoxLayout(topWidget);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(20, 20, 20, 20);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(15);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_3 = new QSpacerItem(75, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        groupLabel = new QLabel(topWidget);
        groupLabel->setObjectName(QStringLiteral("groupLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        groupLabel->setFont(font);
        groupLabel->setContextMenuPolicy(Qt::NoContextMenu);
        groupLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_8->addWidget(groupLabel);

        horizontalSpacer_2 = new QSpacerItem(9, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(15);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_5 = new QSpacerItem(75, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        numberLabel = new QLabel(topWidget);
        numberLabel->setObjectName(QStringLiteral("numberLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        numberLabel->setFont(font1);
        numberLabel->setContextMenuPolicy(Qt::NoContextMenu);
        numberLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        numberLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_9->addWidget(numberLabel);

        QRcodeBtn = new QPushButton(topWidget);
        QRcodeBtn->setObjectName(QStringLiteral("QRcodeBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(QRcodeBtn->sizePolicy().hasHeightForWidth());
        QRcodeBtn->setSizePolicy(sizePolicy1);
        QRcodeBtn->setMinimumSize(QSize(20, 20));
        QRcodeBtn->setMaximumSize(QSize(20, 20));
        QRcodeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QRcodeBtn->setMouseTracking(false);

        horizontalLayout_9->addWidget(QRcodeBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_7->addLayout(verticalLayout_2);

        stackedWidget = new QStackedWidget(backWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 100, 340, 410));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        verticalLayout_3 = new QVBoxLayout(page1);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(15, 0, 15, 20);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(page1);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(110, 0));
        label_3->setMaximumSize(QSize(110, 16777215));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        nameEdit = new QLineEdit(page1);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        nameEdit->setFont(font2);
        nameEdit->setContextMenuPolicy(Qt::NoContextMenu);
        nameEdit->setReadOnly(false);

        horizontalLayout->addWidget(nameEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_4 = new QLabel(page1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(110, 0));
        label_4->setMaximumSize(QSize(110, 16777215));
        label_4->setFont(font2);

        horizontalLayout_6->addWidget(label_4);

        enEdit = new QLineEdit(page1);
        enEdit->setObjectName(QStringLiteral("enEdit"));
        enEdit->setFont(font2);
        enEdit->setContextMenuPolicy(Qt::NoContextMenu);
        enEdit->setStyleSheet(QStringLiteral(""));
        enEdit->setReadOnly(false);

        horizontalLayout_6->addWidget(enEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        line_1 = new QFrame(page1);
        line_1->setObjectName(QStringLiteral("line_1"));
        line_1->setFrameShadow(QFrame::Plain);
        line_1->setFrameShape(QFrame::HLine);

        verticalLayout_3->addWidget(line_1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label1 = new QLabel(page1);
        label1->setObjectName(QStringLiteral("label1"));
        sizePolicy2.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy2);
        label1->setMaximumSize(QSize(110, 16777215));
        label1->setFont(font2);

        horizontalLayout_5->addWidget(label1);

        createrLabel = new QLabel(page1);
        createrLabel->setObjectName(QStringLiteral("createrLabel"));
        createrLabel->setFont(font2);
        createrLabel->setContextMenuPolicy(Qt::NoContextMenu);
        createrLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(createrLabel);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(page1);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMaximumSize(QSize(110, 16777215));
        label_7->setFont(font1);

        horizontalLayout_2->addWidget(label_7);

        timeLabel = new QLabel(page1);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setFont(font1);
        timeLabel->setContextMenuPolicy(Qt::NoContextMenu);
        timeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(timeLabel);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(page1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(110, 0));
        label_2->setMaximumSize(QSize(110, 16777215));
        label_2->setFont(font2);

        horizontalLayout_10->addWidget(label_2);

        descEdit = new QPlainTextEdit(page1);
        descEdit->setObjectName(QStringLiteral("descEdit"));
        descEdit->setMaximumSize(QSize(16777215, 50));
        descEdit->setFont(font2);
        descEdit->setContextMenuPolicy(Qt::NoContextMenu);
        descEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        descEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        descEdit->setReadOnly(false);

        horizontalLayout_10->addWidget(descEdit);


        verticalLayout_3->addLayout(horizontalLayout_10);

        localWidget = new QWidget(page1);
        localWidget->setObjectName(QStringLiteral("localWidget"));
        verticalLayout_4 = new QVBoxLayout(localWidget);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, -1, 0);
        label_1 = new QLabel(localWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setMinimumSize(QSize(110, 0));
        label_1->setMaximumSize(QSize(110, 16777215));
        label_1->setFont(font2);

        horizontalLayout_12->addWidget(label_1);

        managerLabel = new QLabel(localWidget);
        managerLabel->setObjectName(QStringLiteral("managerLabel"));
        managerLabel->setFont(font2);
        managerLabel->setContextMenuPolicy(Qt::NoContextMenu);
        managerLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_12->addWidget(managerLabel);

        addBtn = new QPushButton(localWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        sizePolicy1.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy1);
        addBtn->setMinimumSize(QSize(24, 24));
        addBtn->setMaximumSize(QSize(24, 24));
        addBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout_12->addWidget(addBtn);


        verticalLayout_4->addLayout(horizontalLayout_12);

        line_2 = new QFrame(localWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, -1, -1, 0);
        label_6 = new QLabel(localWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(110, 0));
        label_6->setMaximumSize(QSize(110, 16777215));
        label_6->setFont(font2);

        horizontalLayout_11->addWidget(label_6);

        noteEdit = new QLineEdit(localWidget);
        noteEdit->setObjectName(QStringLiteral("noteEdit"));
        noteEdit->setFont(font2);
        noteEdit->setContextMenuPolicy(Qt::NoContextMenu);
        noteEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_11->addWidget(noteEdit);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(localWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMinimumSize(QSize(110, 0));
        label_5->setMaximumSize(QSize(200, 16777215));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        freeBtn = new QPushButton(localWidget);
        freeBtn->setObjectName(QStringLiteral("freeBtn"));
        freeBtn->setEnabled(true);
        sizePolicy1.setHeightForWidth(freeBtn->sizePolicy().hasHeightForWidth());
        freeBtn->setSizePolicy(sizePolicy1);
        freeBtn->setMinimumSize(QSize(37, 19));
        freeBtn->setMaximumSize(QSize(37, 19));
        freeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        freeBtn->setStyleSheet(QStringLiteral(""));
        freeBtn->setCheckable(true);

        horizontalLayout_3->addWidget(freeBtn);

        horizontalSpacer_4 = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(localWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        joinBtn = new QPushButton(page1);
        joinBtn->setObjectName(QStringLiteral("joinBtn"));
        joinBtn->setMinimumSize(QSize(0, 30));
        joinBtn->setFont(font2);
        joinBtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(joinBtn);

        tipLabel = new QLabel(page1);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        tipLabel->setFont(font2);
        tipLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(tipLabel);

        widget_3 = new QWidget(page1);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(widget_3);

        stackedWidget->addWidget(page1);

        verticalLayout->addWidget(backWidget);


        retranslateUi(GroupProfileWidget);

        QMetaObject::connectSlotsByName(GroupProfileWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupProfileWidget)
    {
        GroupProfileWidget->setWindowTitle(QApplication::translate("GroupProfileWidget", "Tribal details", nullptr));
        groupLabel->setText(QString());
        numberLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        QRcodeBtn->setToolTip(QApplication::translate("GroupProfileWidget", "Tribal QR code", nullptr));
#endif // QT_NO_TOOLTIP
        QRcodeBtn->setText(QString());
        label_3->setText(QApplication::translate("GroupProfileWidget", "Tribal name", nullptr));
        nameEdit->setText(QString());
        nameEdit->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("GroupProfileWidget", "English name", nullptr));
        label1->setText(QApplication::translate("GroupProfileWidget", "creator", nullptr));
        createrLabel->setText(QString());
        label_7->setText(QApplication::translate("GroupProfileWidget", "Creation time", nullptr));
        timeLabel->setText(QString());
        label_2->setText(QApplication::translate("GroupProfileWidget", "Tribal\n"
"introduction", nullptr));
        descEdit->setPlainText(QString());
        label_1->setText(QApplication::translate("GroupProfileWidget", "Group owner", nullptr));
        managerLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        addBtn->setToolTip(QApplication::translate("GroupProfileWidget", "Add member", nullptr));
#endif // QT_NO_TOOLTIP
        addBtn->setText(QString());
        label_6->setText(QApplication::translate("GroupProfileWidget", "My nickname", nullptr));
        label_5->setText(QApplication::translate("GroupProfileWidget", "Free to join", nullptr));
        freeBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        joinBtn->setToolTip(QApplication::translate("GroupProfileWidget", "Join the tribe", nullptr));
#endif // QT_NO_TOOLTIP
        joinBtn->setText(QApplication::translate("GroupProfileWidget", "Join the tribe", nullptr));
        tipLabel->setText(QApplication::translate("GroupProfileWidget", "Apply for tribal success", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupProfileWidget: public Ui_GroupProfileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPPROFILEWIDGET_H

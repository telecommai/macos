/********************************************************************************
** Form generated from reading UI file 'transmitmessagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSMITMESSAGEWIDGET_H
#define UI_TRANSMITMESSAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransmitMessageWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *iconLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *titleLabel;
    QPushButton *closeBtn;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *searchLineEdit;
    QListWidget *searchList;
    QWidget *recentWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_1;
    QListWidget *messageList;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QWidget *tabWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buddyBtn;
    QPushButton *groupBtn;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *buddyList;
    QListWidget *groupList;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *enterBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *TransmitMessageWidget)
    {
        if (TransmitMessageWidget->objectName().isEmpty())
            TransmitMessageWidget->setObjectName(QStringLiteral("TransmitMessageWidget"));
        TransmitMessageWidget->resize(600, 480);
        TransmitMessageWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: rgb(4,36,57);\n"
"}\n"
"QListWidget::item:selected\n"
"{\n"
"padding: -1px;\n"
"background-color: #0A182D;\n"
"}\n"
"QScrollBar:vertical\n"
"{\n"
"	border:none;\n"
"    width:12px;\n"
"    background:rgba(0,0,0,0%);\n"
"}\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    width:12px;\n"
"    background:#073552;\n"
"    border-radius:4px;  \n"
"    min-height:20;\n"
"}\n"
"QScrollBar::handle:vertical:hover\n"
"{\n"
"    width:12px;\n"
"    background:#073552;   \n"
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
"}"));
        verticalLayout_3 = new QVBoxLayout(TransmitMessageWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleBar = new QWidget(TransmitMessageWidget);
        titleBar->setObjectName(QStringLiteral("titleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy);
        titleBar->setMinimumSize(QSize(0, 30));
        titleBar->setMaximumSize(QSize(16777215, 30));
        titleBar->setStyleSheet(QLatin1String("QWidget#titleBar\n"
"{\n"
"background-color: #183257;\n"
"border: none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(titleBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        iconLabel = new QLabel(titleBar);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy1);
        iconLabel->setMinimumSize(QSize(26, 26));
        iconLabel->setMaximumSize(QSize(26, 26));
        iconLabel->setStyleSheet(QLatin1String("QLabel#iconLabel\n"
"{\n"
"border-image: url(':/Login/Resources/login/system.ico');\n"
"}"));

        horizontalLayout->addWidget(iconLabel);

        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        titleLabel = new QLabel(titleBar);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleLabel->sizePolicy().hasHeightForWidth());
        titleLabel->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QLatin1String("QLabel#titleLabel\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(0,0,0, 0);\n"
"}"));

        horizontalLayout->addWidget(titleLabel);

        closeBtn = new QPushButton(titleBar);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        sizePolicy1.setHeightForWidth(closeBtn->sizePolicy().hasHeightForWidth());
        closeBtn->setSizePolicy(sizePolicy1);
        closeBtn->setMinimumSize(QSize(28, 28));
        closeBtn->setMaximumSize(QSize(28, 28));
        closeBtn->setStyleSheet(QLatin1String("QPushButton#closeBtn\n"
"{\n"
"border-image: url(':/PerChat/Resources/person/close01.png');\n"
"background-color: rgba(0,0,0, 0);\n"
"}\n"
"QPushButton#closeBtn:hover\n"
"{\n"
"border-image: url(':/PerChat/Resources/person/close03.png');\n"
"}"));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout_3->addWidget(titleBar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, 0, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 8, 10, -1);
        searchLineEdit = new QLineEdit(TransmitMessageWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        searchLineEdit->setFont(font1);
        searchLineEdit->setStyleSheet(QLatin1String("border: 1px solid white;\n"
"border-radius: 4px;\n"
"color: white;"));

        verticalLayout->addWidget(searchLineEdit);

        searchList = new QListWidget(TransmitMessageWidget);
        searchList->setObjectName(QStringLiteral("searchList"));
        searchList->setStyleSheet(QStringLiteral("border: none;"));

        verticalLayout->addWidget(searchList);

        recentWidget = new QWidget(TransmitMessageWidget);
        recentWidget->setObjectName(QStringLiteral("recentWidget"));
        sizePolicy2.setHeightForWidth(recentWidget->sizePolicy().hasHeightForWidth());
        recentWidget->setSizePolicy(sizePolicy2);
        recentWidget->setMinimumSize(QSize(0, 100));
        verticalLayout_4 = new QVBoxLayout(recentWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(recentWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setMinimumSize(QSize(0, 30));
        label_1->setMaximumSize(QSize(16777215, 30));
        label_1->setFont(font1);
        label_1->setStyleSheet(QStringLiteral("color: white;"));

        verticalLayout_4->addWidget(label_1);

        messageList = new QListWidget(recentWidget);
        messageList->setObjectName(QStringLiteral("messageList"));
        messageList->setStyleSheet(QStringLiteral("border: none;"));
        messageList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_4->addWidget(messageList);


        verticalLayout->addWidget(recentWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        line = new QFrame(TransmitMessageWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral("color: #0A182D;"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_2->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, -1, 5, -1);
        tabWidget = new QWidget(TransmitMessageWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(tabWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 1, -1, -1);
        buddyBtn = new QPushButton(tabWidget);
        buddyBtn->setObjectName(QStringLiteral("buddyBtn"));
        buddyBtn->setMinimumSize(QSize(80, 30));
        buddyBtn->setFont(font1);
        buddyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        buddyBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(4,36,57);\n"
"color: white;\n"
"border:none;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"color: #108ee9;\n"
"border-bottom: 1px solid #108ee9;\n"
"font-weight: bold;\n"
"}"));
        buddyBtn->setCheckable(true);
        buddyBtn->setChecked(true);
        buddyBtn->setAutoExclusive(true);

        horizontalLayout_4->addWidget(buddyBtn);

        groupBtn = new QPushButton(tabWidget);
        groupBtn->setObjectName(QStringLiteral("groupBtn"));
        groupBtn->setMinimumSize(QSize(80, 30));
        groupBtn->setFont(font1);
        groupBtn->setCursor(QCursor(Qt::PointingHandCursor));
        groupBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(4,36,57);\n"
"color: white;\n"
"border:none;\n"
"}\n"
"QPushButton:checked\n"
"{\n"
"color: #108ee9;\n"
"border-bottom: 1px solid #108ee9;\n"
"font-weight: bold;\n"
"}"));
        groupBtn->setCheckable(true);
        groupBtn->setAutoExclusive(true);

        horizontalLayout_4->addWidget(groupBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(tabWidget);

        buddyList = new QListWidget(TransmitMessageWidget);
        buddyList->setObjectName(QStringLiteral("buddyList"));
        buddyList->setStyleSheet(QStringLiteral("border: none;"));
        buddyList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(buddyList);

        groupList = new QListWidget(TransmitMessageWidget);
        groupList->setObjectName(QStringLiteral("groupList"));
        groupList->setStyleSheet(QStringLiteral("border:none;"));
        groupList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_2->addWidget(groupList);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        bottomWidget = new QWidget(TransmitMessageWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setStyleSheet(QLatin1String("QWidget#bottomWidget\n"
"{\n"
"background-color: #0A182D;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(bottomWidget);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 8, -1, 8);
        horizontalSpacer_3 = new QSpacerItem(445, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        enterBtn = new QPushButton(bottomWidget);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setMinimumSize(QSize(61, 27));
        enterBtn->setMaximumSize(QSize(61, 27));
        enterBtn->setFont(font1);
        enterBtn->setCursor(QCursor(Qt::PointingHandCursor));
        enterBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #108ee9;\n"
"border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(enterBtn);

        cancelBtn = new QPushButton(bottomWidget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(61, 27));
        cancelBtn->setMaximumSize(QSize(61, 27));
        cancelBtn->setFont(font1);
        cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        cancelBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #108ee9;\n"
"border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(cancelBtn);


        verticalLayout_3->addWidget(bottomWidget);

        QWidget::setTabOrder(enterBtn, cancelBtn);
        QWidget::setTabOrder(cancelBtn, messageList);
        QWidget::setTabOrder(messageList, buddyBtn);
        QWidget::setTabOrder(buddyBtn, groupBtn);
        QWidget::setTabOrder(groupBtn, buddyList);
        QWidget::setTabOrder(buddyList, closeBtn);

        retranslateUi(TransmitMessageWidget);

        QMetaObject::connectSlotsByName(TransmitMessageWidget);
    } // setupUi

    void retranslateUi(QWidget *TransmitMessageWidget)
    {
        TransmitMessageWidget->setWindowTitle(QApplication::translate("TransmitMessageWidget", "TransmitMessage", nullptr));
        iconLabel->setText(QString());
        titleLabel->setText(QApplication::translate("TransmitMessageWidget", "Send to", nullptr));
        closeBtn->setText(QString());
        searchLineEdit->setPlaceholderText(QApplication::translate("TransmitMessageWidget", "Search", nullptr));
        label_1->setText(QApplication::translate("TransmitMessageWidget", "Recently", nullptr));
        buddyBtn->setText(QApplication::translate("TransmitMessageWidget", "Friends", nullptr));
        groupBtn->setText(QApplication::translate("TransmitMessageWidget", "Tribes", nullptr));
        enterBtn->setText(QApplication::translate("TransmitMessageWidget", "OK", nullptr));
        cancelBtn->setText(QApplication::translate("TransmitMessageWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransmitMessageWidget: public Ui_TransmitMessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSMITMESSAGEWIDGET_H

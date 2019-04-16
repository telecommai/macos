/********************************************************************************
** Form generated from reading UI file 'noticewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICEWIDGET_H
#define UI_NOTICEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoticeWidget
{
public:
    QWidget *backWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *titleBarWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeBtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *piclabel;
    QLineEdit *urltitleedit;
    QLabel *urllabel;
    QLineEdit *urledit;
    QSpacerItem *verticalSpacer;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *sendBtn;

    void setupUi(QWidget *NoticeWidget)
    {
        if (NoticeWidget->objectName().isEmpty())
            NoticeWidget->setObjectName(QStringLiteral("NoticeWidget"));
        NoticeWidget->resize(298, 397);
        backWidget = new QWidget(NoticeWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setGeometry(QRect(0, 0, 300, 380));
        backWidget->setStyleSheet(QLatin1String("QWidget#backWidget\n"
"{\n"
"background-color: #08172c;\n"
"border-radius: 10px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(backWidget);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 10);
        titleBarWidget = new QWidget(backWidget);
        titleBarWidget->setObjectName(QStringLiteral("titleBarWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleBarWidget->sizePolicy().hasHeightForWidth());
        titleBarWidget->setSizePolicy(sizePolicy);
        titleBarWidget->setMinimumSize(QSize(0, 40));
        titleBarWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(titleBarWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(66, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(titleBarWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(142, 0));
        label->setMaximumSize(QSize(142, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: white;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        closeBtn = new QPushButton(titleBarWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(25, 25));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setStyleSheet(QLatin1String("QPushButton#closeBtn\n"
"{\n"
"border-image: url(:/Login/Resources/login/pclogin_title_close.png);\n"
"}\n"
"QPushButton#closeBtn:hover\n"
"{\n"
"border-image: url(:/Login/Resources/login/title_close_hover.png);\n"
"}"));

        horizontalLayout->addWidget(closeBtn);


        verticalLayout_2->addWidget(titleBarWidget);

        widget = new QWidget(backWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        piclabel = new QLabel(widget);
        piclabel->setObjectName(QStringLiteral("piclabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(piclabel->sizePolicy().hasHeightForWidth());
        piclabel->setSizePolicy(sizePolicy2);
        piclabel->setMinimumSize(QSize(280, 120));
        piclabel->setMaximumSize(QSize(280, 120));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        piclabel->setFont(font1);
        piclabel->setCursor(QCursor(Qt::PointingHandCursor));
        piclabel->setStyleSheet(QLatin1String("border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;\n"
"background-color: rgb(217,217,217);\n"
"text-align:center;\n"
"color:white;\n"
"text-margin-bottom:30px;"));
        piclabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(piclabel);

        urltitleedit = new QLineEdit(widget);
        urltitleedit->setObjectName(QStringLiteral("urltitleedit"));
        urltitleedit->setMinimumSize(QSize(0, 30));
        urltitleedit->setMaximumSize(QSize(16777215, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        urltitleedit->setFont(font2);
        urltitleedit->setStyleSheet(QLatin1String("border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border:none;\n"
"padding-left:10px"));
        urltitleedit->setFrame(false);

        verticalLayout->addWidget(urltitleedit);

        urllabel = new QLabel(widget);
        urllabel->setObjectName(QStringLiteral("urllabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(30);
        sizePolicy3.setHeightForWidth(urllabel->sizePolicy().hasHeightForWidth());
        urllabel->setSizePolicy(sizePolicy3);
        urllabel->setMinimumSize(QSize(0, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        urllabel->setFont(font3);
        urllabel->setStyleSheet(QLatin1String("background-color: #08172c;\n"
"color:rgb(106,130,165);\n"
"padding-left:10px;"));
        urllabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(urllabel);

        urledit = new QLineEdit(widget);
        urledit->setObjectName(QStringLiteral("urledit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(30);
        sizePolicy4.setHeightForWidth(urledit->sizePolicy().hasHeightForWidth());
        urledit->setSizePolicy(sizePolicy4);
        urledit->setMinimumSize(QSize(0, 30));
        urledit->setFont(font3);
        urledit->setStyleSheet(QLatin1String("background-color: rgb(20,50,90);\n"
"border:none;\n"
"color:white;\n"
"padding-left:10px;"));

        verticalLayout->addWidget(urledit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget);

        bottomWidget = new QWidget(backWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setMinimumSize(QSize(0, 40));
        bottomWidget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(bottomWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 5, 10, 5);
        sendBtn = new QPushButton(bottomWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy5);
        sendBtn->setMinimumSize(QSize(200, 0));
        sendBtn->setMaximumSize(QSize(200, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        sendBtn->setFont(font4);
        sendBtn->setCursor(QCursor(Qt::PointingHandCursor));
        sendBtn->setStyleSheet(QLatin1String("QPushButton#sendBtn\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #165da3;\n"
"border-radius: 4px;\n"
"}"));

        horizontalLayout_2->addWidget(sendBtn);


        verticalLayout_2->addWidget(bottomWidget);

        QWidget::setTabOrder(urltitleedit, urledit);
        QWidget::setTabOrder(urledit, closeBtn);
        QWidget::setTabOrder(closeBtn, sendBtn);

        retranslateUi(NoticeWidget);

        QMetaObject::connectSlotsByName(NoticeWidget);
    } // setupUi

    void retranslateUi(QWidget *NoticeWidget)
    {
        NoticeWidget->setWindowTitle(QApplication::translate("NoticeWidget", "NoticeWidget", nullptr));
        label->setText(QApplication::translate("NoticeWidget", "Announcement", nullptr));
        closeBtn->setText(QString());
        piclabel->setText(QApplication::translate("NoticeWidget", "Click to Choose Image", nullptr));
        urltitleedit->setInputMask(QString());
        urltitleedit->setText(QString());
        urltitleedit->setPlaceholderText(QApplication::translate("NoticeWidget", "Please enter the title of the web page", nullptr));
        urllabel->setText(QApplication::translate("NoticeWidget", "Please enter the link of the web page", nullptr));
        urledit->setInputMask(QString());
        urledit->setText(QString());
        sendBtn->setText(QApplication::translate("NoticeWidget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticeWidget: public Ui_NoticeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICEWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'leavemessagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEAVEMESSAGEWIDGET_H
#define UI_LEAVEMESSAGEWIDGET_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qlabelheader.h>

QT_BEGIN_NAMESPACE

class Ui_LeaveMessageWidget
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_13;
    QLabel *iconLabel_6;
    QSpacerItem *horizontalSpacer_14;
    QLabel *titleLabel_6;
    QPushButton *closeButton;
    QHBoxLayout *horizontalLayout_4;
    QWidget *InfoWIdget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabelHeader *HeaderLabel;
    QSpacerItem *verticalSpacer;
    QLabel *NameLable;
    QSpacerItem *verticalSpacer_4;
    QLabel *IdLabel;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *MessageLable;
    QTextEdit *MessageEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *OtherNameLable;
    QLineEdit *OtherNamelineEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonEsc;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonOK;

    void setupUi(QWidget *LeaveMessageWidget)
    {
        if (LeaveMessageWidget->objectName().isEmpty())
            LeaveMessageWidget->setObjectName(QStringLiteral("LeaveMessageWidget"));
        LeaveMessageWidget->resize(466, 272);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeaveMessageWidget->sizePolicy().hasHeightForWidth());
        LeaveMessageWidget->setSizePolicy(sizePolicy);
        LeaveMessageWidget->setMinimumSize(QSize(462, 272));
        LeaveMessageWidget->setMaximumSize(QSize(466, 272));
        LeaveMessageWidget->setStyleSheet(QLatin1String("background-color: rgba(24,50,87);\n"
"border:0px;"));
        horizontalLayout_5 = new QHBoxLayout(LeaveMessageWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        titleBar = new QWidget(LeaveMessageWidget);
        titleBar->setObjectName(QStringLiteral("titleBar"));
        titleBar->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(titleBar->sizePolicy().hasHeightForWidth());
        titleBar->setSizePolicy(sizePolicy1);
        titleBar->setMinimumSize(QSize(0, 30));
        titleBar->setStyleSheet(QStringLiteral("background-color: rgba(24,50,87);"));
        horizontalLayout_11 = new QHBoxLayout(titleBar);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_13 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_13);

        iconLabel_6 = new QLabel(titleBar);
        iconLabel_6->setObjectName(QStringLiteral("iconLabel_6"));
        sizePolicy.setHeightForWidth(iconLabel_6->sizePolicy().hasHeightForWidth());
        iconLabel_6->setSizePolicy(sizePolicy);
        iconLabel_6->setMinimumSize(QSize(26, 26));
        iconLabel_6->setMaximumSize(QSize(26, 26));
        iconLabel_6->setStyleSheet(QStringLiteral("border-image: url(':/Login/Resources/login/logo.png')"));

        horizontalLayout_11->addWidget(iconLabel_6);

        horizontalSpacer_14 = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);

        titleLabel_6 = new QLabel(titleBar);
        titleLabel_6->setObjectName(QStringLiteral("titleLabel_6"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleLabel_6->sizePolicy().hasHeightForWidth());
        titleLabel_6->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        titleLabel_6->setFont(font);
        titleLabel_6->setStyleSheet(QLatin1String("background-color: rgba(24,50,87);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(titleLabel_6);

        closeButton = new QPushButton(titleBar);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setMinimumSize(QSize(28, 28));
        closeButton->setMaximumSize(QSize(28, 28));
        closeButton->setStyleSheet(QLatin1String("QPushButton#closeButton\n"
"{\n"
"border-image: url(:/Login/Resources/login/pclogin_title_close.png);\n"
"}\n"
"QPushButton#closeButton:hover\n"
"{\n"
"border-image: url(:/Login/Resources/login/title_close_hover.png);\n"
"}"));

        horizontalLayout_11->addWidget(closeButton);


        verticalLayout_3->addWidget(titleBar);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        InfoWIdget = new QWidget(LeaveMessageWidget);
        InfoWIdget->setObjectName(QStringLiteral("InfoWIdget"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(InfoWIdget->sizePolicy().hasHeightForWidth());
        InfoWIdget->setSizePolicy(sizePolicy3);
        InfoWIdget->setMinimumSize(QSize(170, 0));
        InfoWIdget->setMaximumSize(QSize(170, 16777215));
        InfoWIdget->setStyleSheet(QLatin1String("QWidget#InfoWIdget\n"
"{\n"
"background-color: rgba(24,50,87);\n"
"border-right: 1px solid #042439;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(InfoWIdget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        HeaderLabel = new QLabelHeader(InfoWIdget);
        HeaderLabel->setObjectName(QStringLiteral("HeaderLabel"));
        sizePolicy.setHeightForWidth(HeaderLabel->sizePolicy().hasHeightForWidth());
        HeaderLabel->setSizePolicy(sizePolicy);
        HeaderLabel->setMinimumSize(QSize(96, 96));
        HeaderLabel->setMaximumSize(QSize(96, 96));
        HeaderLabel->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_7->addWidget(HeaderLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        NameLable = new QLabel(InfoWIdget);
        NameLable->setObjectName(QStringLiteral("NameLable"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(NameLable->sizePolicy().hasHeightForWidth());
        NameLable->setSizePolicy(sizePolicy4);
        NameLable->setMinimumSize(QSize(170, 20));
        NameLable->setMaximumSize(QSize(170, 20));
        NameLable->setStyleSheet(QString::fromUtf8("font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:#108ee9\n"
"\n"
"\n"
""));
        NameLable->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(NameLable);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        IdLabel = new QLabel(InfoWIdget);
        IdLabel->setObjectName(QStringLiteral("IdLabel"));
        IdLabel->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(IdLabel->sizePolicy().hasHeightForWidth());
        IdLabel->setSizePolicy(sizePolicy5);
        IdLabel->setMinimumSize(QSize(170, 20));
        IdLabel->setMaximumSize(QSize(170, 20));
        IdLabel->setStyleSheet(QString::fromUtf8("font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:14px;\n"
"font-weight:100 ;\n"
"color:#6a82a5;\n"
""));
        IdLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(IdLabel, 0, Qt::AlignLeft);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_4->addWidget(InfoWIdget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, -1, 15, 15);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, 0, -1);
        MessageLable = new QLabel(LeaveMessageWidget);
        MessageLable->setObjectName(QStringLiteral("MessageLable"));
        sizePolicy.setHeightForWidth(MessageLable->sizePolicy().hasHeightForWidth());
        MessageLable->setSizePolicy(sizePolicy);
        MessageLable->setMinimumSize(QSize(260, 20));
        MessageLable->setMaximumSize(QSize(16777215, 20));
        MessageLable->setStyleSheet(QString::fromUtf8("font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:#6a82a5;\n"
"\n"
""));

        verticalLayout_4->addWidget(MessageLable);

        MessageEdit = new QTextEdit(LeaveMessageWidget);
        MessageEdit->setObjectName(QStringLiteral("MessageEdit"));
        sizePolicy.setHeightForWidth(MessageEdit->sizePolicy().hasHeightForWidth());
        MessageEdit->setSizePolicy(sizePolicy);
        MessageEdit->setMinimumSize(QSize(260, 96));
        MessageEdit->setMaximumSize(QSize(260, 96));
        MessageEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(24,50,87);\n"
"selection-color: rgb(56,116,188);\n"
"selection-background-color: yellow;\n"
"padding-left:10px;\n"
"border: 1px solid #6a82a5;\n"
"border-radius:4px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:#6a82a5;\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_4->addWidget(MessageEdit);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 10, 0, 0);
        OtherNameLable = new QLabel(LeaveMessageWidget);
        OtherNameLable->setObjectName(QStringLiteral("OtherNameLable"));
        sizePolicy.setHeightForWidth(OtherNameLable->sizePolicy().hasHeightForWidth());
        OtherNameLable->setSizePolicy(sizePolicy);
        OtherNameLable->setMinimumSize(QSize(260, 20));
        OtherNameLable->setMaximumSize(QSize(260, 20));
        OtherNameLable->setStyleSheet(QString::fromUtf8("font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:#6a82a5;\n"
"\n"
""));

        verticalLayout_5->addWidget(OtherNameLable);

        OtherNamelineEdit = new QLineEdit(LeaveMessageWidget);
        OtherNamelineEdit->setObjectName(QStringLiteral("OtherNamelineEdit"));
        sizePolicy.setHeightForWidth(OtherNamelineEdit->sizePolicy().hasHeightForWidth());
        OtherNamelineEdit->setSizePolicy(sizePolicy);
        OtherNamelineEdit->setMinimumSize(QSize(260, 32));
        OtherNamelineEdit->setMaximumSize(QSize(260, 32));
        OtherNamelineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(24,50,87);\n"
"selection-color: rgb(56,116,188);\n"
"selection-background-color: yellow;\n"
"padding-left:10px;\n"
"border: 1px solid #6a82a5;\n"
"border-radius:4px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:#6a82a5;\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_5->addWidget(OtherNamelineEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 5, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonEsc = new QPushButton(LeaveMessageWidget);
        pushButtonEsc->setObjectName(QStringLiteral("pushButtonEsc"));
        sizePolicy.setHeightForWidth(pushButtonEsc->sizePolicy().hasHeightForWidth());
        pushButtonEsc->setSizePolicy(sizePolicy);
        pushButtonEsc->setMinimumSize(QSize(72, 32));
        pushButtonEsc->setMaximumSize(QSize(72, 32));
        pushButtonEsc->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonEsc->setStyleSheet(QString::fromUtf8("background-color:#164e83;\n"
"border-radius:5px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:white;\n"
"\n"
"\n"
""));

        horizontalLayout_3->addWidget(pushButtonEsc);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonOK = new QPushButton(LeaveMessageWidget);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        sizePolicy.setHeightForWidth(pushButtonOK->sizePolicy().hasHeightForWidth());
        pushButtonOK->setSizePolicy(sizePolicy);
        pushButtonOK->setMinimumSize(QSize(72, 32));
        pushButtonOK->setMaximumSize(QSize(72, 32));
        pushButtonOK->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonOK->setStyleSheet(QString::fromUtf8("background-color: #108ee9;\n"
"border-radius:5px;\n"
"font: 75 16pt \345\276\256\350\275\257\351\233\205\351\273\221; \n"
"font-size:15px;\n"
"font-weight:100 ;\n"
"color:white;"));

        horizontalLayout_3->addWidget(pushButtonOK);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_3);


        retranslateUi(LeaveMessageWidget);

        QMetaObject::connectSlotsByName(LeaveMessageWidget);
    } // setupUi

    void retranslateUi(QWidget *LeaveMessageWidget)
    {
        LeaveMessageWidget->setWindowTitle(QApplication::translate("LeaveMessageWidget", "Add Friends", nullptr));
        iconLabel_6->setText(QString());
        titleLabel_6->setText(QApplication::translate("LeaveMessageWidget", "Add", nullptr));
        closeButton->setText(QString());
        HeaderLabel->setText(QString());
        NameLable->setText(QString());
        IdLabel->setText(QString());
        MessageLable->setText(QApplication::translate("LeaveMessageWidget", "Verification Info", nullptr));
        MessageEdit->setHtml(QApplication::translate("LeaveMessageWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:15px; font-weight:96; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Microsoft YaHei';\"><br /></p></body></html>", nullptr));
        OtherNameLable->setText(QApplication::translate("LeaveMessageWidget", "Remarks", nullptr));
        OtherNamelineEdit->setText(QString());
        OtherNamelineEdit->setPlaceholderText(QString());
        pushButtonEsc->setText(QApplication::translate("LeaveMessageWidget", "Cancel", nullptr));
        pushButtonOK->setText(QApplication::translate("LeaveMessageWidget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaveMessageWidget: public Ui_LeaveMessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEAVEMESSAGEWIDGET_H

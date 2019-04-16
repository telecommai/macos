/********************************************************************************
** Form generated from reading UI file 'enterpasswordwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERPASSWORDWIDGET_H
#define UI_ENTERPASSWORDWIDGET_H

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

class Ui_EnterPasswordWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *backWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QLabel *titleLabel;
    QLabel *tipLabel;
    QLineEdit *passwordEdit;
    QLabel *label_3;
    QPushButton *enterBtn;

    void setupUi(QWidget *EnterPasswordWidget)
    {
        if (EnterPasswordWidget->objectName().isEmpty())
            EnterPasswordWidget->setObjectName(QStringLiteral("EnterPasswordWidget"));
        EnterPasswordWidget->resize(414, 230);
        verticalLayout_2 = new QVBoxLayout(EnterPasswordWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        backWidget = new QWidget(EnterPasswordWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setStyleSheet(QLatin1String("QWidget#backWidget\n"
"{\n"
"background-color:#15447c;\n"
"border-radius: 10px;\n"
"}"));
        verticalLayout = new QVBoxLayout(backWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBtn = new QPushButton(backWidget);
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


        verticalLayout->addLayout(horizontalLayout);

        titleLabel = new QLabel(backWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QStringLiteral("color: #6a82a6;"));
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        tipLabel = new QLabel(backWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        tipLabel->setFont(font1);
        tipLabel->setStyleSheet(QStringLiteral("color: #c97a1e;"));
        tipLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tipLabel);

        passwordEdit = new QLineEdit(backWidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        passwordEdit->setFont(font2);
        passwordEdit->setStyleSheet(QLatin1String("QLineEdit#passwordEdit\n"
"{\n"
"color: white;\n"
"background-color: rgba(0,0,0, 0);\n"
"border:none;\n"
"border-bottom: 2px solid #183257;\n"
"}"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordEdit);

        label_3 = new QLabel(backWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: #c97a1e;"));

        verticalLayout->addWidget(label_3);

        enterBtn = new QPushButton(backWidget);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setMinimumSize(QSize(0, 40));
        enterBtn->setFont(font);
        enterBtn->setCursor(QCursor(Qt::PointingHandCursor));
        enterBtn->setStyleSheet(QLatin1String("QPushButton#enterBtn\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #165da3;\n"
"border-radius: 20px;\n"
"}"));

        verticalLayout->addWidget(enterBtn);


        verticalLayout_2->addWidget(backWidget);

        QWidget::setTabOrder(passwordEdit, enterBtn);

        retranslateUi(EnterPasswordWidget);

        QMetaObject::connectSlotsByName(EnterPasswordWidget);
    } // setupUi

    void retranslateUi(QWidget *EnterPasswordWidget)
    {
        EnterPasswordWidget->setWindowTitle(QApplication::translate("EnterPasswordWidget", "EnterPasswordWidget", nullptr));
        closeBtn->setText(QString());
        titleLabel->setText(QApplication::translate("EnterPasswordWidget", "Please enter password of the base:", nullptr));
        tipLabel->setText(QApplication::translate("EnterPasswordWidget", "Base password is used to decrypt the password of the message", nullptr));
        passwordEdit->setText(QString());
        passwordEdit->setPlaceholderText(QApplication::translate("EnterPasswordWidget", "Please enter the base password", nullptr));
        label_3->setText(QString());
        enterBtn->setText(QApplication::translate("EnterPasswordWidget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterPasswordWidget: public Ui_EnterPasswordWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERPASSWORDWIDGET_H

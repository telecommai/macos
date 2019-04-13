/********************************************************************************
** Form generated from reading UI file 'secretimagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECRETIMAGEWIDGET_H
#define UI_SECRETIMAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_SecretImageWidget
{
public:
    QWidget *backWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *titleBarWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QPushButton *closeBtn;
    QWidget *passwordWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_lock;
    QLineEdit *passwordEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QListWidget *fileListWidget;
    QLabel *tipLabel;
    QWidget *bottomWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *selectBtn;
    QPushButton *sendBtn;

    void setupUi(QWidget *SecretImageWidget)
    {
        if (SecretImageWidget->objectName().isEmpty())
            SecretImageWidget->setObjectName(QStringLiteral("SecretImageWidget"));
        SecretImageWidget->resize(300, 400);
        backWidget = new QWidget(SecretImageWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setGeometry(QRect(0, 0, 280, 378));
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
        titleBarWidget->setMinimumSize(QSize(0, 45));
        titleBarWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(titleBarWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(titleBarWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(110, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: white;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        closeBtn = new QPushButton(titleBarWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setMinimumSize(QSize(35, 35));
        closeBtn->setMaximumSize(QSize(35, 35));
        closeBtn->setCursor(QCursor(Qt::PointingHandCursor));
        closeBtn->setStyleSheet(QLatin1String("QPushButton#closeBtn\n"
"{\n"
"border-image: url(:/Login/Resources/login/pclogin_title_close.png);\n"
"}\n"
"QPushButton#closeBtn:hover\n"
"{\n"
"border-image: url(:/Login/Resources/login/title_close_hover.png);\n"
"}"));

        horizontalLayout_4->addWidget(closeBtn);


        verticalLayout_2->addWidget(titleBarWidget);

        passwordWidget = new QWidget(backWidget);
        passwordWidget->setObjectName(QStringLiteral("passwordWidget"));
        passwordWidget->setMinimumSize(QSize(0, 40));
        passwordWidget->setMaximumSize(QSize(16777215, 40));
        passwordWidget->setStyleSheet(QLatin1String("QWidget#passwordWidget\n"
"{\n"
"background-color: #162d4c;\n"
"border-radius: 5px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(passwordWidget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(17, 7, 17, 7);
        label_lock = new QLabel(passwordWidget);
        label_lock->setObjectName(QStringLiteral("label_lock"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_lock->sizePolicy().hasHeightForWidth());
        label_lock->setSizePolicy(sizePolicy);
        label_lock->setMinimumSize(QSize(26, 26));
        label_lock->setMaximumSize(QSize(26, 26));
        label_lock->setStyleSheet(QStringLiteral("border-image: url(:/PerChat/Resources/person/lock.png);"));

        horizontalLayout->addWidget(label_lock);

        passwordEdit = new QLineEdit(passwordWidget);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(passwordEdit->sizePolicy().hasHeightForWidth());
        passwordEdit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        passwordEdit->setFont(font1);
        passwordEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background-color: rgba(0,0,0, 0);\n"
"border: none;\n"
"color: white;\n"
"}"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(passwordEdit);


        verticalLayout_2->addWidget(passwordWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(22, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        fileListWidget = new QListWidget(backWidget);
        fileListWidget->setObjectName(QStringLiteral("fileListWidget"));
        QFont font2;
        font2.setPointSize(10);
        fileListWidget->setFont(font2);
        fileListWidget->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background-color: #08172c;\n"
"border:none;\n"
"}\n"
"QListWidget:item\n"
"{\n"
"color: white;\n"
"}"));
        fileListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fileListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fileListWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        fileListWidget->setAutoScrollMargin(16);
        fileListWidget->setTabKeyNavigation(false);
        fileListWidget->setSelectionMode(QAbstractItemView::NoSelection);
        fileListWidget->setIconSize(QSize(40, 40));
        fileListWidget->setTextElideMode(Qt::ElideMiddle);
        fileListWidget->setMovement(QListView::Free);
        fileListWidget->setFlow(QListView::LeftToRight);
        fileListWidget->setResizeMode(QListView::Adjust);
        fileListWidget->setSpacing(0);
        fileListWidget->setGridSize(QSize(65, 72));
        fileListWidget->setViewMode(QListView::IconMode);
        fileListWidget->setModelColumn(0);
        fileListWidget->setBatchSize(100);
        fileListWidget->setSelectionRectVisible(true);
        fileListWidget->setSortingEnabled(false);

        horizontalLayout_3->addWidget(fileListWidget);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tipLabel = new QLabel(backWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        tipLabel->setFont(font3);
        tipLabel->setStyleSheet(QStringLiteral("color: #c97a1e;"));
        tipLabel->setAlignment(Qt::AlignCenter);
        tipLabel->setWordWrap(true);

        verticalLayout_2->addWidget(tipLabel);

        bottomWidget = new QWidget(backWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        bottomWidget->setMinimumSize(QSize(0, 40));
        bottomWidget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(bottomWidget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 5, 10, 5);
        selectBtn = new QPushButton(bottomWidget);
        selectBtn->setObjectName(QStringLiteral("selectBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectBtn->sizePolicy().hasHeightForWidth());
        selectBtn->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        selectBtn->setFont(font4);
        selectBtn->setCursor(QCursor(Qt::PointingHandCursor));
        selectBtn->setStyleSheet(QLatin1String("QPushButton#selectBtn\n"
"{\n"
"color: white;\n"
"border: none;\n"
"background-color: #165da3;\n"
"border-radius: 4px;\n"
"}"));

        horizontalLayout_2->addWidget(selectBtn);

        sendBtn = new QPushButton(bottomWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sizePolicy2.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy2);
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

        QWidget::setTabOrder(passwordEdit, fileListWidget);
        QWidget::setTabOrder(fileListWidget, selectBtn);
        QWidget::setTabOrder(selectBtn, sendBtn);
        QWidget::setTabOrder(sendBtn, closeBtn);

        retranslateUi(SecretImageWidget);

        QMetaObject::connectSlotsByName(SecretImageWidget);
    } // setupUi

    void retranslateUi(QWidget *SecretImageWidget)
    {
        SecretImageWidget->setWindowTitle(QApplication::translate("SecretImageWidget", "SecretImageWidget", nullptr));
        label->setText(QApplication::translate("SecretImageWidget", "Secret Image", nullptr));
        closeBtn->setText(QString());
        label_lock->setText(QString());
        passwordEdit->setPlaceholderText(QApplication::translate("SecretImageWidget", "Enter Password", nullptr));
        tipLabel->setText(QApplication::translate("SecretImageWidget", "Click \"add\" button to add secret image, double click file to cancel", nullptr));
        selectBtn->setText(QApplication::translate("SecretImageWidget", "Add", nullptr));
        sendBtn->setText(QApplication::translate("SecretImageWidget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecretImageWidget: public Ui_SecretImageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECRETIMAGEWIDGET_H

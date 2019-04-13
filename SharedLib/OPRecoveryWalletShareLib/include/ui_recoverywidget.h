/********************************************************************************
** Form generated from reading UI file 'recoverywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOVERYWIDGET_H
#define UI_RECOVERYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_RecoveryWidget
{
public:
    QPushButton *enterBtn;
    QPushButton *closeBtn;
    QWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *wordBtn;
    QPushButton *privateKeyBtn;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *wordPage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QWidget *prikeyPage;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QPlainTextEdit *prikeyEdit;
    QSpacerItem *verticalSpacer_2;
    QLabel *backLabel;

    void setupUi(QWidget *RecoveryWidget)
    {
        if (RecoveryWidget->objectName().isEmpty())
            RecoveryWidget->setObjectName(QStringLiteral("RecoveryWidget"));
        RecoveryWidget->resize(280, 400);
        RecoveryWidget->setMinimumSize(QSize(280, 400));
        RecoveryWidget->setMaximumSize(QSize(280, 400));
        RecoveryWidget->setStyleSheet(QStringLiteral(""));
        enterBtn = new QPushButton(RecoveryWidget);
        enterBtn->setObjectName(QStringLiteral("enterBtn"));
        enterBtn->setGeometry(QRect(87, 350, 106, 32));
        enterBtn->setMinimumSize(QSize(106, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        enterBtn->setFont(font);
        enterBtn->setCursor(QCursor(Qt::PointingHandCursor));
        enterBtn->setStyleSheet(QLatin1String("QPushButton#enterBtn\n"
"{\n"
"color: white;\n"
"background-color: #165ca3;\n"
"border: none;\n"
"border-radius: 6px;\n"
"}\n"
"QPushButton#enterBtn:hover\n"
"{\n"
"color: #163e70;\n"
"}"));
        closeBtn = new QPushButton(RecoveryWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(246, 10, 24, 24));
        closeBtn->setMinimumSize(QSize(24, 24));
        closeBtn->setMaximumSize(QSize(24, 24));
        closeBtn->setStyleSheet(QLatin1String("QPushButton#closeBtn\n"
"{\n"
"border-image: url(:/Login/Resources/login/pclogin_title_close.png);\n"
"}\n"
"QPushButton#closeBtn:hover\n"
"{\n"
"	border-image: url(:/Login/Resources/login/title_close_hover.png);\n"
"}"));
        tabWidget = new QWidget(RecoveryWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 35, 260, 30));
        tabWidget->setMinimumSize(QSize(0, 30));
        tabWidget->setMaximumSize(QSize(16777215, 30));
        tabWidget->setStyleSheet(QLatin1String("QWidget#tabWidget\n"
"{\n"
"border: none;\n"
"border-bottom: 1px solid #6883a5;\n"
"}"));
        horizontalLayout = new QHBoxLayout(tabWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        wordBtn = new QPushButton(tabWidget);
        wordBtn->setObjectName(QStringLiteral("wordBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(wordBtn->sizePolicy().hasHeightForWidth());
        wordBtn->setSizePolicy(sizePolicy);
        wordBtn->setMinimumSize(QSize(75, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        wordBtn->setFont(font1);
        wordBtn->setCursor(QCursor(Qt::PointingHandCursor));
        wordBtn->setStyleSheet(QLatin1String("QPushButton#wordBtn\n"
"{\n"
"border:none;\n"
"color: #6883a5;\n"
"}\n"
"QPushButton#wordBtn:checked\n"
"{\n"
"color: #165ca3;\n"
"font-weight: bold;\n"
"border-bottom: 1px solid #165ca3;\n"
"}\n"
""));
        wordBtn->setCheckable(true);
        wordBtn->setChecked(true);
        wordBtn->setAutoRepeat(false);
        wordBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(wordBtn);

        privateKeyBtn = new QPushButton(tabWidget);
        privateKeyBtn->setObjectName(QStringLiteral("privateKeyBtn"));
        sizePolicy.setHeightForWidth(privateKeyBtn->sizePolicy().hasHeightForWidth());
        privateKeyBtn->setSizePolicy(sizePolicy);
        privateKeyBtn->setMinimumSize(QSize(75, 0));
        privateKeyBtn->setFont(font1);
        privateKeyBtn->setCursor(QCursor(Qt::PointingHandCursor));
        privateKeyBtn->setStyleSheet(QLatin1String("QPushButton#privateKeyBtn\n"
"{\n"
"border:none;\n"
"color: #6883a5;\n"
"}\n"
"QPushButton#privateKeyBtn:checked\n"
"{\n"
"color: #165ca3;\n"
"font-weight: bold;\n"
"border-bottom: 1px solid #165ca3;\n"
"}\n"
""));
        privateKeyBtn->setCheckable(true);
        privateKeyBtn->setAutoRepeat(false);
        privateKeyBtn->setAutoExclusive(true);

        horizontalLayout->addWidget(privateKeyBtn);

        label = new QLabel(RecoveryWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 11, 101, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("QLabel#label\n"
"{\n"
"color: #95adcb;\n"
"}\n"
""));
        stackedWidget = new QStackedWidget(RecoveryWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(15, 65, 250, 280));
        stackedWidget->setMinimumSize(QSize(250, 280));
        stackedWidget->setMaximumSize(QSize(250, 280));
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QLatin1String("QStackedWidget\n"
"{\n"
"background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"background-color: rgba(0,0,0,0);\n"
"color: white;\n"
"border: 1px solid #6883a5;\n"
"border-radius: 4px;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border-color: white;\n"
"}"));
        wordPage = new QWidget();
        wordPage->setObjectName(QStringLiteral("wordPage"));
        verticalLayout = new QVBoxLayout(wordPage);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 9, 6, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_1 = new QLineEdit(wordPage);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setMinimumSize(QSize(0, 28));
        lineEdit_1->setFont(font);
        lineEdit_1->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_2->addWidget(lineEdit_1);

        lineEdit_2 = new QLineEdit(wordPage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 28));
        lineEdit_2->setFont(font);
        lineEdit_2->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_3 = new QLineEdit(wordPage);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 28));
        lineEdit_3->setFont(font);
        lineEdit_3->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_3->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(wordPage);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 28));
        lineEdit_4->setFont(font);
        lineEdit_4->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_3->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_5 = new QLineEdit(wordPage);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 28));
        lineEdit_5->setFont(font);
        lineEdit_5->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_4->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(wordPage);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(0, 28));
        lineEdit_6->setFont(font);
        lineEdit_6->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_4->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(12);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lineEdit_7 = new QLineEdit(wordPage);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(0, 28));
        lineEdit_7->setFont(font);
        lineEdit_7->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_5->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(wordPage);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 28));
        lineEdit_8->setFont(font);
        lineEdit_8->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_5->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        lineEdit_9 = new QLineEdit(wordPage);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 28));
        lineEdit_9->setFont(font);
        lineEdit_9->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_6->addWidget(lineEdit_9);

        lineEdit_10 = new QLineEdit(wordPage);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(0, 28));
        lineEdit_10->setFont(font);
        lineEdit_10->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_6->addWidget(lineEdit_10);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEdit_11 = new QLineEdit(wordPage);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(0, 28));
        lineEdit_11->setFont(font);
        lineEdit_11->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_7->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(wordPage);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(0, 28));
        lineEdit_12->setFont(font);
        lineEdit_12->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_7->addWidget(lineEdit_12);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(wordPage);
        prikeyPage = new QWidget();
        prikeyPage->setObjectName(QStringLiteral("prikeyPage"));
        verticalLayout_2 = new QVBoxLayout(prikeyPage);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, -1, 12, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(prikeyPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QLatin1String("QLabel#label_2\n"
"{\n"
"color: #6883a5;\n"
"}"));

        verticalLayout_2->addWidget(label_2);

        prikeyEdit = new QPlainTextEdit(prikeyPage);
        prikeyEdit->setObjectName(QStringLiteral("prikeyEdit"));
        prikeyEdit->setMinimumSize(QSize(0, 0));
        prikeyEdit->setMaximumSize(QSize(16777215, 72));
        prikeyEdit->setFont(font1);
        prikeyEdit->setContextMenuPolicy(Qt::NoContextMenu);
        prikeyEdit->setStyleSheet(QLatin1String("QPlainTextEdit\n"
"{\n"
"background-color: rgba(0,0,0,0);\n"
"color: white;\n"
"border: 1px solid #6883a5;\n"
"border-radius: 4px;\n"
"}\n"
"QPlainTextEdit:focus\n"
"{\n"
"border-color: white;\n"
"}"));

        verticalLayout_2->addWidget(prikeyEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        stackedWidget->addWidget(prikeyPage);
        backLabel = new QLabel(RecoveryWidget);
        backLabel->setObjectName(QStringLiteral("backLabel"));
        backLabel->setGeometry(QRect(0, 0, 280, 400));
        backLabel->setStyleSheet(QLatin1String("QLabel#backLabel\n"
"{\n"
"border-image: url(:/ewallet/Resources/ewallet/walletBack.png);\n"
"border-radius: 15px;\n"
"}"));
        backLabel->raise();
        enterBtn->raise();
        closeBtn->raise();
        tabWidget->raise();
        label->raise();
        stackedWidget->raise();

        retranslateUi(RecoveryWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RecoveryWidget);
    } // setupUi

    void retranslateUi(QWidget *RecoveryWidget)
    {
        RecoveryWidget->setWindowTitle(QApplication::translate("RecoveryWidget", "Recovery Base", nullptr));
        enterBtn->setText(QApplication::translate("RecoveryWidget", "OK", nullptr));
#ifndef QT_NO_SHORTCUT
        enterBtn->setShortcut(QApplication::translate("RecoveryWidget", "Return", nullptr));
#endif // QT_NO_SHORTCUT
        closeBtn->setText(QString());
        wordBtn->setText(QApplication::translate("RecoveryWidget", "Mnemonic", nullptr));
        privateKeyBtn->setText(QApplication::translate("RecoveryWidget", "Private key", nullptr));
        label->setText(QApplication::translate("RecoveryWidget", "OpenPlanet", nullptr));
        lineEdit_1->setPlaceholderText(QApplication::translate("RecoveryWidget", "1.", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("RecoveryWidget", "2.", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("RecoveryWidget", "3.", nullptr));
        lineEdit_4->setPlaceholderText(QApplication::translate("RecoveryWidget", "4.", nullptr));
        lineEdit_5->setPlaceholderText(QApplication::translate("RecoveryWidget", "5.", nullptr));
        lineEdit_6->setPlaceholderText(QApplication::translate("RecoveryWidget", "6.", nullptr));
        lineEdit_7->setPlaceholderText(QApplication::translate("RecoveryWidget", "7.", nullptr));
        lineEdit_8->setPlaceholderText(QApplication::translate("RecoveryWidget", "8.", nullptr));
        lineEdit_9->setPlaceholderText(QApplication::translate("RecoveryWidget", "9.", nullptr));
        lineEdit_10->setPlaceholderText(QApplication::translate("RecoveryWidget", "10.", nullptr));
        lineEdit_11->setPlaceholderText(QApplication::translate("RecoveryWidget", "11.", nullptr));
        lineEdit_12->setPlaceholderText(QApplication::translate("RecoveryWidget", "12.", nullptr));
        label_2->setText(QApplication::translate("RecoveryWidget", "Please enter the private key:", nullptr));
        prikeyEdit->setPlainText(QString());
        backLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RecoveryWidget: public Ui_RecoveryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOVERYWIDGET_H

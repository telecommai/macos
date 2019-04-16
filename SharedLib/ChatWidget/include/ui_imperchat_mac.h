/********************************************************************************
** Form generated from reading UI file 'imperchat_mac.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPERCHAT_MAC_H
#define UI_IMPERCHAT_MAC_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IMPerChat
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mLabelPerNickChat;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addGroupBtn;
    QFrame *line;
    QWebEngineView *mWebView;
    QWidget *toolWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mPButtonPerFont;
    QPushButton *mPButtonPerExpress;
    QPushButton *mPButtonPerShake;
    QPushButton *mPButtonPerVoiceChat;
    QPushButton *mPButtonPerPicture;
    QPushButton *mPButtonPerCutPicture;
    QPushButton *mPButtonPerFile;
    QPushButton *mPButtonSecretLetter;
    QPushButton *mPButtonSecretImage;
    QPushButton *mPButtonSecretFile;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPButtonPerLog;
    QPushButton *mPButtonPerSend;
    QTextEdit *mTextEditPer;

    void setupUi(QWidget *IMPerChat)
    {
        if (IMPerChat->objectName().isEmpty())
            IMPerChat->setObjectName(QStringLiteral("IMPerChat"));
        IMPerChat->resize(630, 600);
        verticalLayout = new QVBoxLayout(IMPerChat);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(IMPerChat);
        titleWidget->setObjectName(QStringLiteral("titleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy);
        titleWidget->setMinimumSize(QSize(0, 42));
        horizontalLayout_2 = new QHBoxLayout(titleWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 6, 12, 6);
        mLabelPerNickChat = new QLabel(titleWidget);
        mLabelPerNickChat->setObjectName(QStringLiteral("mLabelPerNickChat"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mLabelPerNickChat->sizePolicy().hasHeightForWidth());
        mLabelPerNickChat->setSizePolicy(sizePolicy1);
        mLabelPerNickChat->setMinimumSize(QSize(300, 30));
        mLabelPerNickChat->setMaximumSize(QSize(300, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        mLabelPerNickChat->setFont(font);
        mLabelPerNickChat->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(mLabelPerNickChat);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        addGroupBtn = new QPushButton(titleWidget);
        addGroupBtn->setObjectName(QStringLiteral("addGroupBtn"));
        sizePolicy1.setHeightForWidth(addGroupBtn->sizePolicy().hasHeightForWidth());
        addGroupBtn->setSizePolicy(sizePolicy1);
        addGroupBtn->setMinimumSize(QSize(30, 30));
        addGroupBtn->setMaximumSize(QSize(30, 30));
        addGroupBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addGroupBtn->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(addGroupBtn);


        verticalLayout->addWidget(titleWidget);

        line = new QFrame(IMPerChat);
        line->setObjectName(QStringLiteral("line"));
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShadow(QFrame::Plain);
        line->setMidLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        mWebView = new QWebEngineView(IMPerChat);
        mWebView->setObjectName(QStringLiteral("mWebView"));
        mWebView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(mWebView);

        toolWidget = new QWidget(IMPerChat);
        toolWidget->setObjectName(QStringLiteral("toolWidget"));
        sizePolicy.setHeightForWidth(toolWidget->sizePolicy().hasHeightForWidth());
        toolWidget->setSizePolicy(sizePolicy);
        toolWidget->setMinimumSize(QSize(0, 28));
        horizontalLayout = new QHBoxLayout(toolWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 4, 4, 0);
        mPButtonPerFont = new QPushButton(toolWidget);
        mPButtonPerFont->setObjectName(QStringLiteral("mPButtonPerFont"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPButtonPerFont->sizePolicy().hasHeightForWidth());
        mPButtonPerFont->setSizePolicy(sizePolicy2);
        mPButtonPerFont->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerFont);

        mPButtonPerExpress = new QPushButton(toolWidget);
        mPButtonPerExpress->setObjectName(QStringLiteral("mPButtonPerExpress"));
        sizePolicy2.setHeightForWidth(mPButtonPerExpress->sizePolicy().hasHeightForWidth());
        mPButtonPerExpress->setSizePolicy(sizePolicy2);
        mPButtonPerExpress->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerExpress);

        mPButtonPerShake = new QPushButton(toolWidget);
        mPButtonPerShake->setObjectName(QStringLiteral("mPButtonPerShake"));
        sizePolicy2.setHeightForWidth(mPButtonPerShake->sizePolicy().hasHeightForWidth());
        mPButtonPerShake->setSizePolicy(sizePolicy2);
        mPButtonPerShake->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerShake);

        mPButtonPerVoiceChat = new QPushButton(toolWidget);
        mPButtonPerVoiceChat->setObjectName(QStringLiteral("mPButtonPerVoiceChat"));
        sizePolicy2.setHeightForWidth(mPButtonPerVoiceChat->sizePolicy().hasHeightForWidth());
        mPButtonPerVoiceChat->setSizePolicy(sizePolicy2);
        mPButtonPerVoiceChat->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerVoiceChat);

        mPButtonPerPicture = new QPushButton(toolWidget);
        mPButtonPerPicture->setObjectName(QStringLiteral("mPButtonPerPicture"));
        sizePolicy2.setHeightForWidth(mPButtonPerPicture->sizePolicy().hasHeightForWidth());
        mPButtonPerPicture->setSizePolicy(sizePolicy2);
        mPButtonPerPicture->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerPicture);

        mPButtonPerCutPicture = new QPushButton(toolWidget);
        mPButtonPerCutPicture->setObjectName(QStringLiteral("mPButtonPerCutPicture"));
        sizePolicy2.setHeightForWidth(mPButtonPerCutPicture->sizePolicy().hasHeightForWidth());
        mPButtonPerCutPicture->setSizePolicy(sizePolicy2);
        mPButtonPerCutPicture->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerCutPicture);

        mPButtonPerFile = new QPushButton(toolWidget);
        mPButtonPerFile->setObjectName(QStringLiteral("mPButtonPerFile"));
        sizePolicy1.setHeightForWidth(mPButtonPerFile->sizePolicy().hasHeightForWidth());
        mPButtonPerFile->setSizePolicy(sizePolicy1);
        mPButtonPerFile->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerFile);

        mPButtonSecretLetter = new QPushButton(toolWidget);
        mPButtonSecretLetter->setObjectName(QStringLiteral("mPButtonSecretLetter"));
        sizePolicy1.setHeightForWidth(mPButtonSecretLetter->sizePolicy().hasHeightForWidth());
        mPButtonSecretLetter->setSizePolicy(sizePolicy1);
        mPButtonSecretLetter->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonSecretLetter);

        mPButtonSecretImage = new QPushButton(toolWidget);
        mPButtonSecretImage->setObjectName(QStringLiteral("mPButtonSecretImage"));
        sizePolicy1.setHeightForWidth(mPButtonSecretImage->sizePolicy().hasHeightForWidth());
        mPButtonSecretImage->setSizePolicy(sizePolicy1);
        mPButtonSecretImage->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonSecretImage);

        mPButtonSecretFile = new QPushButton(toolWidget);
        mPButtonSecretFile->setObjectName(QStringLiteral("mPButtonSecretFile"));
        sizePolicy1.setHeightForWidth(mPButtonSecretFile->sizePolicy().hasHeightForWidth());
        mPButtonSecretFile->setSizePolicy(sizePolicy1);
        mPButtonSecretFile->setMinimumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonSecretFile);

        horizontalSpacer = new QSpacerItem(262, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mPButtonPerLog = new QPushButton(toolWidget);
        mPButtonPerLog->setObjectName(QStringLiteral("mPButtonPerLog"));
        sizePolicy1.setHeightForWidth(mPButtonPerLog->sizePolicy().hasHeightForWidth());
        mPButtonPerLog->setSizePolicy(sizePolicy1);
        mPButtonPerLog->setMinimumSize(QSize(75, 22));
        mPButtonPerLog->setMaximumSize(QSize(75, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        mPButtonPerLog->setFont(font1);

        horizontalLayout->addWidget(mPButtonPerLog);

        mPButtonPerSend = new QPushButton(toolWidget);
        mPButtonPerSend->setObjectName(QStringLiteral("mPButtonPerSend"));
        mPButtonPerSend->setMinimumSize(QSize(56, 22));
        mPButtonPerSend->setMaximumSize(QSize(56, 22));
        mPButtonPerSend->setFont(font1);

        horizontalLayout->addWidget(mPButtonPerSend);


        verticalLayout->addWidget(toolWidget);

        mTextEditPer = new QTextEdit(IMPerChat);
        mTextEditPer->setObjectName(QStringLiteral("mTextEditPer"));
        sizePolicy.setHeightForWidth(mTextEditPer->sizePolicy().hasHeightForWidth());
        mTextEditPer->setSizePolicy(sizePolicy);
        mTextEditPer->setMinimumSize(QSize(0, 150));
        mTextEditPer->setMaximumSize(QSize(16777215, 150));
        mTextEditPer->setFont(font);
        mTextEditPer->setFocusPolicy(Qt::StrongFocus);
        mTextEditPer->setStyleSheet(QStringLiteral(""));
        mTextEditPer->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout->addWidget(mTextEditPer);


        retranslateUi(IMPerChat);

        QMetaObject::connectSlotsByName(IMPerChat);
    } // setupUi

    void retranslateUi(QWidget *IMPerChat)
    {
        IMPerChat->setWindowTitle(QApplication::translate("IMPerChat", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        mLabelPerNickChat->setToolTip(QApplication::translate("IMPerChat", "\346\237\245\347\234\213\350\265\204\346\226\231", nullptr));
#endif // QT_NO_TOOLTIP
        mLabelPerNickChat->setText(QString());
#ifndef QT_NO_TOOLTIP
        addGroupBtn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        addGroupBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerFont->setToolTip(QApplication::translate("IMPerChat", "\345\255\227\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerFont->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerExpress->setToolTip(QApplication::translate("IMPerChat", "\350\241\250\346\203\205", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerExpress->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerShake->setToolTip(QApplication::translate("IMPerChat", "\346\212\226\345\212\250", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerShake->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerVoiceChat->setToolTip(QApplication::translate("IMPerChat", "\350\257\255\351\237\263", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerVoiceChat->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerPicture->setToolTip(QApplication::translate("IMPerChat", "\345\233\276\347\211\207", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerPicture->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerCutPicture->setToolTip(QApplication::translate("IMPerChat", "\346\210\252\345\233\276(Ctrl+Shift+Z)", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerCutPicture->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerFile->setToolTip(QApplication::translate("IMPerChat", "\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonSecretLetter->setToolTip(QApplication::translate("IMPerChat", "\345\257\206\344\277\241", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonSecretLetter->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonSecretImage->setToolTip(QApplication::translate("IMPerChat", "\345\257\206\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonSecretImage->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonSecretFile->setToolTip(QApplication::translate("IMPerChat", "\345\257\206\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonSecretFile->setText(QString());
        mPButtonPerLog->setText(QApplication::translate("IMPerChat", "\346\266\210\346\201\257\350\256\260\345\275\225", nullptr));
        mPButtonPerSend->setText(QApplication::translate("IMPerChat", "\345\217\221\351\200\201", nullptr));
#ifndef QT_NO_SHORTCUT
        mPButtonPerSend->setShortcut(QApplication::translate("IMPerChat", "Alt+S", nullptr));
#endif // QT_NO_SHORTCUT
        mTextEditPer->setHtml(QApplication::translate("IMPerChat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        mTextEditPer->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class IMPerChat: public Ui_IMPerChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPERCHAT_MAC_H

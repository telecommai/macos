/********************************************************************************
** Form generated from reading UI file 'imperchat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPERCHAT_H
#define UI_IMPERCHAT_H

#include <QtCore/QVariant>
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
#include "qwebengineviewdelegate.h"

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
    QWebEngineViewDelegate *mWebView;
    QWidget *toolWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mPButtonPerCutPicture;
    QPushButton *mPButtonPerFont;
    QPushButton *mPButtonPerExpress;
    QPushButton *mPButtonPerShake;
    QPushButton *mPButtonPerPicture;
    QPushButton *mPButtonPerFile;
    QPushButton *mPButtonSecretLetter;
    QPushButton *mPButtonSecretImage;
    QPushButton *mPButtonSecretFile;
    QPushButton *mPButtonNotice;
    QPushButton *mPButtonTransfer;
    QPushButton *mPButtonETH;
    QPushButton *mPButtonBTC;
    QPushButton *mPButtonEOS;
    QPushButton *mPButtonPerRedPacket;
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

        mWebView = new QWebEngineViewDelegate(IMPerChat);
        mWebView->setObjectName(QStringLiteral("mWebView"));

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
        mPButtonPerCutPicture = new QPushButton(toolWidget);
        mPButtonPerCutPicture->setObjectName(QStringLiteral("mPButtonPerCutPicture"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mPButtonPerCutPicture->sizePolicy().hasHeightForWidth());
        mPButtonPerCutPicture->setSizePolicy(sizePolicy2);
        mPButtonPerCutPicture->setMinimumSize(QSize(30, 24));
        mPButtonPerCutPicture->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerCutPicture);

        mPButtonPerFont = new QPushButton(toolWidget);
        mPButtonPerFont->setObjectName(QStringLiteral("mPButtonPerFont"));
        sizePolicy2.setHeightForWidth(mPButtonPerFont->sizePolicy().hasHeightForWidth());
        mPButtonPerFont->setSizePolicy(sizePolicy2);
        mPButtonPerFont->setMinimumSize(QSize(30, 24));
        mPButtonPerFont->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerFont);

        mPButtonPerExpress = new QPushButton(toolWidget);
        mPButtonPerExpress->setObjectName(QStringLiteral("mPButtonPerExpress"));
        sizePolicy2.setHeightForWidth(mPButtonPerExpress->sizePolicy().hasHeightForWidth());
        mPButtonPerExpress->setSizePolicy(sizePolicy2);
        mPButtonPerExpress->setMinimumSize(QSize(30, 24));
        mPButtonPerExpress->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerExpress);

        mPButtonPerShake = new QPushButton(toolWidget);
        mPButtonPerShake->setObjectName(QStringLiteral("mPButtonPerShake"));
        sizePolicy2.setHeightForWidth(mPButtonPerShake->sizePolicy().hasHeightForWidth());
        mPButtonPerShake->setSizePolicy(sizePolicy2);
        mPButtonPerShake->setMinimumSize(QSize(30, 24));
        mPButtonPerShake->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerShake);

        mPButtonPerPicture = new QPushButton(toolWidget);
        mPButtonPerPicture->setObjectName(QStringLiteral("mPButtonPerPicture"));
        sizePolicy2.setHeightForWidth(mPButtonPerPicture->sizePolicy().hasHeightForWidth());
        mPButtonPerPicture->setSizePolicy(sizePolicy2);
        mPButtonPerPicture->setMinimumSize(QSize(30, 24));
        mPButtonPerPicture->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerPicture);

        mPButtonPerFile = new QPushButton(toolWidget);
        mPButtonPerFile->setObjectName(QStringLiteral("mPButtonPerFile"));
        sizePolicy1.setHeightForWidth(mPButtonPerFile->sizePolicy().hasHeightForWidth());
        mPButtonPerFile->setSizePolicy(sizePolicy1);
        mPButtonPerFile->setMinimumSize(QSize(30, 24));
        mPButtonPerFile->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonPerFile);

        mPButtonSecretLetter = new QPushButton(toolWidget);
        mPButtonSecretLetter->setObjectName(QStringLiteral("mPButtonSecretLetter"));
        sizePolicy1.setHeightForWidth(mPButtonSecretLetter->sizePolicy().hasHeightForWidth());
        mPButtonSecretLetter->setSizePolicy(sizePolicy1);
        mPButtonSecretLetter->setMinimumSize(QSize(30, 24));
        mPButtonSecretLetter->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonSecretLetter);

        mPButtonSecretImage = new QPushButton(toolWidget);
        mPButtonSecretImage->setObjectName(QStringLiteral("mPButtonSecretImage"));
        sizePolicy1.setHeightForWidth(mPButtonSecretImage->sizePolicy().hasHeightForWidth());
        mPButtonSecretImage->setSizePolicy(sizePolicy1);
        mPButtonSecretImage->setMinimumSize(QSize(30, 24));
        mPButtonSecretImage->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonSecretImage);

        mPButtonSecretFile = new QPushButton(toolWidget);
        mPButtonSecretFile->setObjectName(QStringLiteral("mPButtonSecretFile"));
        sizePolicy1.setHeightForWidth(mPButtonSecretFile->sizePolicy().hasHeightForWidth());
        mPButtonSecretFile->setSizePolicy(sizePolicy1);
        mPButtonSecretFile->setMinimumSize(QSize(30, 24));
        mPButtonSecretFile->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonSecretFile);

        mPButtonNotice = new QPushButton(toolWidget);
        mPButtonNotice->setObjectName(QStringLiteral("mPButtonNotice"));
        sizePolicy1.setHeightForWidth(mPButtonNotice->sizePolicy().hasHeightForWidth());
        mPButtonNotice->setSizePolicy(sizePolicy1);
        mPButtonNotice->setMinimumSize(QSize(30, 24));
        mPButtonNotice->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonNotice);

        mPButtonTransfer = new QPushButton(toolWidget);
        mPButtonTransfer->setObjectName(QStringLiteral("mPButtonTransfer"));
        sizePolicy1.setHeightForWidth(mPButtonTransfer->sizePolicy().hasHeightForWidth());
        mPButtonTransfer->setSizePolicy(sizePolicy1);
        mPButtonTransfer->setMinimumSize(QSize(30, 24));
        mPButtonTransfer->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonTransfer);

        mPButtonETH = new QPushButton(toolWidget);
        mPButtonETH->setObjectName(QStringLiteral("mPButtonETH"));
        sizePolicy1.setHeightForWidth(mPButtonETH->sizePolicy().hasHeightForWidth());
        mPButtonETH->setSizePolicy(sizePolicy1);
        mPButtonETH->setMinimumSize(QSize(30, 24));
        mPButtonETH->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonETH);

        mPButtonBTC = new QPushButton(toolWidget);
        mPButtonBTC->setObjectName(QStringLiteral("mPButtonBTC"));
        sizePolicy1.setHeightForWidth(mPButtonBTC->sizePolicy().hasHeightForWidth());
        mPButtonBTC->setSizePolicy(sizePolicy1);
        mPButtonBTC->setMinimumSize(QSize(30, 24));
        mPButtonBTC->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonBTC);

        mPButtonEOS = new QPushButton(toolWidget);
        mPButtonEOS->setObjectName(QStringLiteral("mPButtonEOS"));
        sizePolicy1.setHeightForWidth(mPButtonEOS->sizePolicy().hasHeightForWidth());
        mPButtonEOS->setSizePolicy(sizePolicy1);
        mPButtonEOS->setMinimumSize(QSize(30, 24));
        mPButtonEOS->setMaximumSize(QSize(30, 24));

        horizontalLayout->addWidget(mPButtonEOS);

        mPButtonPerRedPacket = new QPushButton(toolWidget);
        mPButtonPerRedPacket->setObjectName(QStringLiteral("mPButtonPerRedPacket"));
        sizePolicy2.setHeightForWidth(mPButtonPerRedPacket->sizePolicy().hasHeightForWidth());
        mPButtonPerRedPacket->setSizePolicy(sizePolicy2);
        mPButtonPerRedPacket->setMinimumSize(QSize(24, 24));
        mPButtonPerRedPacket->setMaximumSize(QSize(24, 24));

        horizontalLayout->addWidget(mPButtonPerRedPacket);

        horizontalSpacer = new QSpacerItem(262, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mPButtonPerLog = new QPushButton(toolWidget);
        mPButtonPerLog->setObjectName(QStringLiteral("mPButtonPerLog"));
        sizePolicy1.setHeightForWidth(mPButtonPerLog->sizePolicy().hasHeightForWidth());
        mPButtonPerLog->setSizePolicy(sizePolicy1);
        mPButtonPerLog->setMinimumSize(QSize(120, 22));
        mPButtonPerLog->setMaximumSize(QSize(75, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        mPButtonPerLog->setFont(font1);
        mPButtonPerLog->setStyleSheet(QStringLiteral("text-align: center"));

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
        mLabelPerNickChat->setToolTip(QApplication::translate("IMPerChat", "View the Detail", nullptr));
#endif // QT_NO_TOOLTIP
        mLabelPerNickChat->setText(QString());
#ifndef QT_NO_TOOLTIP
        addGroupBtn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        addGroupBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerCutPicture->setToolTip(QApplication::translate("IMPerChat", "Screen Cut", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerCutPicture->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerFont->setToolTip(QApplication::translate("IMPerChat", "Font", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerFont->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerExpress->setToolTip(QApplication::translate("IMPerChat", "Expressions", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerExpress->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerShake->setToolTip(QApplication::translate("IMPerChat", "Vibration", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerShake->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerPicture->setToolTip(QApplication::translate("IMPerChat", "Picture", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerPicture->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerFile->setToolTip(QApplication::translate("IMPerChat", "File", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonSecretLetter->setToolTip(QApplication::translate("IMPerChat", "Secret Message", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonSecretLetter->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonSecretImage->setToolTip(QApplication::translate("IMPerChat", "Secret Picture", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonSecretImage->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonSecretFile->setToolTip(QApplication::translate("IMPerChat", "Secret File", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonSecretFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonNotice->setToolTip(QApplication::translate("IMPerChat", "Announcement", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonNotice->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonTransfer->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        mPButtonTransfer->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonETH->setToolTip(QApplication::translate("IMPerChat", "ETH Transfer", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonETH->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonBTC->setToolTip(QApplication::translate("IMPerChat", "BTC Transfer", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonBTC->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonEOS->setToolTip(QApplication::translate("IMPerChat", "EOS Transfer", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonEOS->setText(QString());
#ifndef QT_NO_TOOLTIP
        mPButtonPerRedPacket->setToolTip(QApplication::translate("IMPerChat", "Red Packet", nullptr));
#endif // QT_NO_TOOLTIP
        mPButtonPerRedPacket->setText(QString());
        mPButtonPerLog->setText(QApplication::translate("IMPerChat", "Message Log", nullptr));
        mPButtonPerSend->setText(QApplication::translate("IMPerChat", "Send", nullptr));
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

#endif // UI_IMPERCHAT_H

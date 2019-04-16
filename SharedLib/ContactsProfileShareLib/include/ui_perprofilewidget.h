/********************************************************************************
** Form generated from reading UI file 'perprofilewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERPROFILEWIDGET_H
#define UI_PERPROFILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qlabelheader.h>

QT_BEGIN_NAMESPACE

class Ui_perProfileWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *backWidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *topWidget;
    QLabelHeader *headerLabel;
    QLabel *starLabel;
    QWidget *nickWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *nameEdit;
    QLabel *sexLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *noteBtn;
    QPushButton *shareBtn;
    QSpacerItem *horizontalSpacer_2;
    QLabel *signLabel;
    QWidget *spaceWidget;
    QWidget *midwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *lianxinLabel;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *addressLabel;
    QPushButton *copyAddressBtn;
    QLabel *copyLabel;
    QWidget *bottomWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *perAddBtn;
    QSpacerItem *verticalSpacer;
    QPushButton *perChatBtn;
    QLabel *tipLabel;

    void setupUi(QWidget *perProfileWidget)
    {
        if (perProfileWidget->objectName().isEmpty())
            perProfileWidget->setObjectName(QStringLiteral("perProfileWidget"));
        perProfileWidget->resize(340, 510);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(perProfileWidget->sizePolicy().hasHeightForWidth());
        perProfileWidget->setSizePolicy(sizePolicy);
        perProfileWidget->setMinimumSize(QSize(340, 510));
        perProfileWidget->setMaximumSize(QSize(16777215, 16777215));
        perProfileWidget->setStyleSheet(QLatin1String("QWidget#perProfileWidget\n"
"{\n"
"background-color: #0b1d37;\n"
"}"));
        verticalLayout = new QVBoxLayout(perProfileWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        backWidget = new QWidget(perProfileWidget);
        backWidget->setObjectName(QStringLiteral("backWidget"));
        backWidget->setStyleSheet(QLatin1String("QWidget#backWidget\n"
"{\n"
"background-color: #0b1d37;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(backWidget);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        topWidget = new QWidget(backWidget);
        topWidget->setObjectName(QStringLiteral("topWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topWidget->sizePolicy().hasHeightForWidth());
        topWidget->setSizePolicy(sizePolicy1);
        topWidget->setMinimumSize(QSize(0, 240));
        topWidget->setMaximumSize(QSize(16777215, 240));
        topWidget->setStyleSheet(QStringLiteral(""));
        headerLabel = new QLabelHeader(topWidget);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(20, 105, 60, 60));
        headerLabel->setMinimumSize(QSize(60, 60));
        headerLabel->setMaximumSize(QSize(60, 60));
        headerLabel->setCursor(QCursor(Qt::PointingHandCursor));
        headerLabel->setStyleSheet(QLatin1String("background-color: rgba(0,0,0,0);\n"
""));
        starLabel = new QLabel(topWidget);
        starLabel->setObjectName(QStringLiteral("starLabel"));
        starLabel->setGeometry(QRect(0, 0, 340, 135));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(starLabel->sizePolicy().hasHeightForWidth());
        starLabel->setSizePolicy(sizePolicy2);
        starLabel->setMinimumSize(QSize(0, 135));
        starLabel->setMaximumSize(QSize(16777215, 135));
        starLabel->setContextMenuPolicy(Qt::NoContextMenu);
        starLabel->setStyleSheet(QStringLiteral(""));
        starLabel->setScaledContents(true);
        starLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);
        nickWidget = new QWidget(topWidget);
        nickWidget->setObjectName(QStringLiteral("nickWidget"));
        nickWidget->setGeometry(QRect(0, 135, 340, 105));
        nickWidget->setStyleSheet(QStringLiteral("background-color: #173156;"));
        verticalLayout_2 = new QVBoxLayout(nickWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(25, 5, 25, 5);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(nickWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(40, 36));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Mine/Resources/mine/space.png);"));

        horizontalLayout_3->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nameEdit = new QLineEdit(nickWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy3);
        nameEdit->setMinimumSize(QSize(0, 0));
        nameEdit->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        nameEdit->setFont(font);
        nameEdit->setContextMenuPolicy(Qt::NoContextMenu);
        nameEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"border: none;\n"
"color: #108fe9;\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border: none;\n"
"}"));
        nameEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(nameEdit);

        sexLabel = new QLabel(nickWidget);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setMinimumSize(QSize(20, 20));
        sexLabel->setMaximumSize(QSize(20, 20));
        sexLabel->setContextMenuPolicy(Qt::NoContextMenu);
        sexLabel->setScaledContents(true);
        sexLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(sexLabel);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        noteBtn = new QPushButton(nickWidget);
        noteBtn->setObjectName(QStringLiteral("noteBtn"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(noteBtn->sizePolicy().hasHeightForWidth());
        noteBtn->setSizePolicy(sizePolicy4);
        noteBtn->setMinimumSize(QSize(18, 18));
        noteBtn->setMaximumSize(QSize(18, 18));
        noteBtn->setCursor(QCursor(Qt::PointingHandCursor));
        noteBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: none;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/profile/Resources/profile/noteEdit.png"), QSize(), QIcon::Normal, QIcon::Off);
        noteBtn->setIcon(icon);
        noteBtn->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(noteBtn);

        shareBtn = new QPushButton(nickWidget);
        shareBtn->setObjectName(QStringLiteral("shareBtn"));
        shareBtn->setMinimumSize(QSize(18, 18));
        shareBtn->setMaximumSize(QSize(18, 18));
        shareBtn->setCursor(QCursor(Qt::PointingHandCursor));
        shareBtn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/profile/Resources/profile/share.png"), QSize(), QIcon::Normal, QIcon::Off);
        shareBtn->setIcon(icon1);
        shareBtn->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(shareBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        signLabel = new QLabel(nickWidget);
        signLabel->setObjectName(QStringLiteral("signLabel"));
        signLabel->setMinimumSize(QSize(0, 28));
        signLabel->setMaximumSize(QSize(16777215, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        signLabel->setFont(font1);
        signLabel->setContextMenuPolicy(Qt::NoContextMenu);
        signLabel->setStyleSheet(QStringLiteral("color: #6a82a5;"));
        signLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        signLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(signLabel);

        starLabel->raise();
        nickWidget->raise();
        headerLabel->raise();

        verticalLayout_5->addWidget(topWidget);

        spaceWidget = new QWidget(backWidget);
        spaceWidget->setObjectName(QStringLiteral("spaceWidget"));
        sizePolicy1.setHeightForWidth(spaceWidget->sizePolicy().hasHeightForWidth());
        spaceWidget->setSizePolicy(sizePolicy1);
        spaceWidget->setMinimumSize(QSize(0, 10));
        spaceWidget->setMaximumSize(QSize(16777215, 10));
        spaceWidget->setStyleSheet(QStringLiteral("background-color: #0b1d37;"));

        verticalLayout_5->addWidget(spaceWidget);

        midwidget = new QWidget(backWidget);
        midwidget->setObjectName(QStringLiteral("midwidget"));
        sizePolicy1.setHeightForWidth(midwidget->sizePolicy().hasHeightForWidth());
        midwidget->setSizePolicy(sizePolicy1);
        midwidget->setMinimumSize(QSize(0, 90));
        midwidget->setMaximumSize(QSize(16777215, 90));
        midwidget->setStyleSheet(QLatin1String("QWidget#midwidget\n"
"{\n"
"background-color: #173156;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(midwidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(25, 0, 25, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(midwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy5);
        label_7->setMinimumSize(QSize(110, 0));
        label_7->setMaximumSize(QSize(50, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("color: #6a82a5;"));

        horizontalLayout->addWidget(label_7);

        lianxinLabel = new QLabel(midwidget);
        lianxinLabel->setObjectName(QStringLiteral("lianxinLabel"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        lianxinLabel->setFont(font3);
        lianxinLabel->setContextMenuPolicy(Qt::NoContextMenu);
        lianxinLabel->setStyleSheet(QStringLiteral("color: #108fe9;"));
        lianxinLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(lianxinLabel);


        verticalLayout_4->addLayout(horizontalLayout);

        line = new QFrame(midwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral("color: #6a82a5;"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(midwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setMinimumSize(QSize(110, 0));
        label_6->setMaximumSize(QSize(50, 16777215));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("color: #6a82a5;"));

        horizontalLayout_2->addWidget(label_6);

        addressLabel = new QLabel(midwidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setFont(font3);
        addressLabel->setStyleSheet(QStringLiteral("color: #108fe9;"));

        horizontalLayout_2->addWidget(addressLabel);

        copyAddressBtn = new QPushButton(midwidget);
        copyAddressBtn->setObjectName(QStringLiteral("copyAddressBtn"));
        sizePolicy3.setHeightForWidth(copyAddressBtn->sizePolicy().hasHeightForWidth());
        copyAddressBtn->setSizePolicy(sizePolicy3);
        copyAddressBtn->setMinimumSize(QSize(16, 16));
        copyAddressBtn->setMaximumSize(QSize(16, 16));
        copyAddressBtn->setCursor(QCursor(Qt::PointingHandCursor));
        copyAddressBtn->setStyleSheet(QLatin1String("QPushButton#copyAddressBtn\n"
"{\n"
"border-image: url(:/ewallet/Resources/ewallet/copy.png);\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(copyAddressBtn);

        copyLabel = new QLabel(midwidget);
        copyLabel->setObjectName(QStringLiteral("copyLabel"));
        copyLabel->setMinimumSize(QSize(64, 20));
        copyLabel->setMaximumSize(QSize(64, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        copyLabel->setFont(font4);
        copyLabel->setStyleSheet(QLatin1String("QLabel#copyLabel\n"
"{\n"
"color: #44608a;\n"
"background-color: white;\n"
"border-radius: 4px;\n"
"padding: 0px 2px 0px 2px;\n"
"margin-left: 6px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(copyLabel);


        verticalLayout_4->addLayout(horizontalLayout_2);

        line->raise();

        verticalLayout_5->addWidget(midwidget);

        bottomWidget = new QWidget(backWidget);
        bottomWidget->setObjectName(QStringLiteral("bottomWidget"));
        sizePolicy1.setHeightForWidth(bottomWidget->sizePolicy().hasHeightForWidth());
        bottomWidget->setSizePolicy(sizePolicy1);
        bottomWidget->setMaximumSize(QSize(16777215, 200));
        bottomWidget->setStyleSheet(QLatin1String("QWidget#bottomWidget\n"
"{\n"
"background-color: #0b1d37;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(bottomWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(25, -1, 25, 10);
        verticalSpacer_2 = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        perAddBtn = new QPushButton(bottomWidget);
        perAddBtn->setObjectName(QStringLiteral("perAddBtn"));
        perAddBtn->setMinimumSize(QSize(0, 40));
        perAddBtn->setFont(font);
        perAddBtn->setStyleSheet(QLatin1String("QPushButton#perAddBtn\n"
"{\n"
"background-color: #108ee9;\n"
"border: none;\n"
"border-radius: 18px;\n"
"color: white;\n"
"}"));

        verticalLayout_3->addWidget(perAddBtn);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        perChatBtn = new QPushButton(bottomWidget);
        perChatBtn->setObjectName(QStringLiteral("perChatBtn"));
        perChatBtn->setMinimumSize(QSize(0, 40));
        perChatBtn->setFont(font2);
        perChatBtn->setCursor(QCursor(Qt::PointingHandCursor));
        perChatBtn->setStyleSheet(QLatin1String("QPushButton#perChatBtn\n"
"{\n"
"background-color: #108ee9;\n"
"border: none;\n"
"border-radius: 18px;\n"
"color: white;\n"
"}"));

        verticalLayout_3->addWidget(perChatBtn);

        tipLabel = new QLabel(bottomWidget);
        tipLabel->setObjectName(QStringLiteral("tipLabel"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(10);
        tipLabel->setFont(font5);
        tipLabel->setStyleSheet(QStringLiteral("color: #e4ba7b;"));
        tipLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(tipLabel);


        verticalLayout_5->addWidget(bottomWidget);


        verticalLayout->addWidget(backWidget);

        QWidget::setTabOrder(perChatBtn, copyAddressBtn);
        QWidget::setTabOrder(copyAddressBtn, nameEdit);
        QWidget::setTabOrder(nameEdit, noteBtn);

        retranslateUi(perProfileWidget);

        QMetaObject::connectSlotsByName(perProfileWidget);
    } // setupUi

    void retranslateUi(QWidget *perProfileWidget)
    {
        perProfileWidget->setWindowTitle(QApplication::translate("perProfileWidget", "Member details", nullptr));
#ifndef QT_NO_TOOLTIP
        headerLabel->setToolTip(QApplication::translate("perProfileWidget", "View avatar", nullptr));
#endif // QT_NO_TOOLTIP
        headerLabel->setText(QString());
        starLabel->setText(QString());
        label->setText(QString());
        nameEdit->setText(QString());
        sexLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        noteBtn->setToolTip(QApplication::translate("perProfileWidget", "Modify note", nullptr));
#endif // QT_NO_TOOLTIP
        noteBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        shareBtn->setToolTip(QApplication::translate("perProfileWidget", "Recommend to a friend", nullptr));
#endif // QT_NO_TOOLTIP
        shareBtn->setText(QString());
        signLabel->setText(QString());
        label_7->setText(QApplication::translate("perProfileWidget", "Interstellar ID", nullptr));
        lianxinLabel->setText(QString());
        label_6->setText(QApplication::translate("perProfileWidget", "Base ID", nullptr));
        addressLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyAddressBtn->setToolTip(QApplication::translate("perProfileWidget", "copy", nullptr));
#endif // QT_NO_TOOLTIP
        copyAddressBtn->setText(QString());
        copyLabel->setText(QApplication::translate("perProfileWidget", "Success", nullptr));
        perAddBtn->setText(QString());
        perChatBtn->setText(QApplication::translate("perProfileWidget", "Send message", nullptr));
        tipLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class perProfileWidget: public Ui_perProfileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERPROFILEWIDGET_H

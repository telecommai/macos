/********************************************************************************
** Form generated from reading UI file 'TransAccWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACCWIDGET_H
#define UI_TRANSACCWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransAccWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mPButtonClose;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *balanceLabel;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *addressBox;
    QLabel *mLabelAddress;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_15;
    QLabel *label_14;
    QSpacerItem *verticalSpacer;
    QWidget *minerWidget;
    QVBoxLayout *verticalLayout_4;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_16;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *mPButtonConfirm;

    void setupUi(QWidget *TransAccWidget)
    {
        if (TransAccWidget->objectName().isEmpty())
            TransAccWidget->setObjectName(QStringLiteral("TransAccWidget"));
        TransAccWidget->resize(300, 365);
        TransAccWidget->setMaximumSize(QSize(300, 16777215));
        TransAccWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(TransAccWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 10);
        widget = new QWidget(TransAccWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 40));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(204, 51, 51);"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 3, 3, -1);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:white;"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mPButtonClose = new QPushButton(widget);
        mPButtonClose->setObjectName(QStringLiteral("mPButtonClose"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPButtonClose->sizePolicy().hasHeightForWidth());
        mPButtonClose->setSizePolicy(sizePolicy);
        mPButtonClose->setMinimumSize(QSize(24, 24));
        mPButtonClose->setMaximumSize(QSize(24, 24));
        mPButtonClose->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonClose->setStyleSheet(QStringLiteral("border-image: url(:/RedPacket/Resources/redPacket/close.png);"));

        horizontalLayout_2->addWidget(mPButtonClose);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(TransAccWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 40));
        widget_2->setStyleSheet(QLatin1String("QWidget#widget_2{\n"
"	background-color: rgb(238, 238, 238);\n"
"	border-bottom:1px solid #bbbbbb;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(18, 6, -1, -1);
        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color:#cc3333;"));

        horizontalLayout_3->addWidget(label_6);

        balanceLabel = new QLabel(widget_2);
        balanceLabel->setObjectName(QStringLiteral("balanceLabel"));
        balanceLabel->setFont(font);
        balanceLabel->setStyleSheet(QStringLiteral("color:#cc3333;"));

        horizontalLayout_3->addWidget(balanceLabel);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color:#cc3333;"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(TransAccWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background-color:white;"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QLatin1String("QWidget#widget_5{\n"
"	border-bottom:1px solid #eeeeee;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:#999999;"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        horizontalLayout->addWidget(label_7);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QLatin1String("QWidget#widget_6{\n"
"	border-bottom:1px solid #eeeeee;\n"
"}"));
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 6, -1, -1);
        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color:#999999;"));

        horizontalLayout_7->addWidget(label_8);

        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QLatin1String("border:none;\n"
"background-color:white;"));
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setDragEnabled(true);

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QLatin1String("QWidget#widget_7{\n"
"	border-bottom:1px solid #eeeeee;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 6, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_12 = new QLabel(widget_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);
        label_12->setStyleSheet(QStringLiteral("color:#999999;"));

        horizontalLayout_4->addWidget(label_12);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        addressBox = new QComboBox(widget_7);
        addressBox->setObjectName(QStringLiteral("addressBox"));
        sizePolicy.setHeightForWidth(addressBox->sizePolicy().hasHeightForWidth());
        addressBox->setSizePolicy(sizePolicy);
        addressBox->setFont(font1);
        addressBox->setStyleSheet(QLatin1String("QComboBox \n"
"{\n"
"border: 1px solid #6a82a6;;\n"
"background-color: rgba(0,0,0, 0);\n"
"color: #6a82a5;\n"
"}\n"
"QComboBox::drop-down\n"
"{\n"
"border-image: url(:/TreeIcon/Resources/TreeIcon/tree_open.png);\n"
"border: none;\n"
"}\n"
"QComboBox QAbstractItemView::item\n"
"{\n"
"background-color: white;\n"
"color: black;\n"
"}\n"
"QComboBox QAbstractItemView::item:selected\n"
"{\n"
"background-color: #15447c;\n"
"color: white;\n"
"}"));

        horizontalLayout_4->addWidget(addressBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        mLabelAddress = new QLabel(widget_7);
        mLabelAddress->setObjectName(QStringLiteral("mLabelAddress"));
        mLabelAddress->setFont(font1);

        verticalLayout_3->addWidget(mLabelAddress);


        verticalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setStyleSheet(QLatin1String("QWidget#widget_8{\n"
"	border-bottom:1px solid #eeeeee;\n"
"}"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 6, -1, -1);
        label_13 = new QLabel(widget_8);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("color:#999999;"));

        horizontalLayout_8->addWidget(label_13);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        label_15 = new QLabel(widget_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font);

        horizontalLayout_8->addWidget(label_15);

        label_14 = new QLabel(widget_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font);

        horizontalLayout_8->addWidget(label_14);


        verticalLayout_2->addWidget(widget_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        minerWidget = new QWidget(widget_3);
        minerWidget->setObjectName(QStringLiteral("minerWidget"));
        minerWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(minerWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 6, -1, 0);
        horizontalSlider = new QSlider(minerWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(0, 15));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setStyleSheet(QLatin1String("QSlider{\n"
"border-color: #cc3333;\n"
"}\n"
"QSlider::groove:horizontal {                                \n"
"     border: 1px solid #cc3333;                             \n"
"     height: 1px;                                           \n"
"    margin: 0px 0;                                         \n"
"     left: 5px; right: 5px; \n"
" }\n"
"QSlider::handle:horizontal {                               \n"
"     border: 0px ;                           \n"
"	border-image: url(:/RedPacket/Resources/redPacket/redPoint.png);\n"
"     width: 15px;                                          \n"
"     margin: -7px -7px -7px -7px;                  \n"
"} \n"
"QSlider::add-page:horizontal{\n"
"background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #bcbcbc, stop:0.25 #CC3333, stop:0.5 #CC3333, stop:1 #CC3333); \n"
"\n"
"}\n"
"QSlider::sub-page:horizontal{                               \n"
" background: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #439cf3, stop:0.25 #CC3333, stop:0.5 #CC3333, st"
                        "op:1 #CC3333);                     \n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_17 = new QLabel(minerWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font1);

        horizontalLayout_5->addWidget(label_17);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_16 = new QLabel(minerWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font1);

        horizontalLayout_5->addWidget(label_16);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(minerWidget);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(TransAccWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMaximumSize(QSize(16777215, 40));
        widget_4->setStyleSheet(QLatin1String("QWidget#widget_4{\n"
"	background-color: rgb(238, 238, 238);\n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 6, -1, 6);
        mPButtonConfirm = new QPushButton(widget_4);
        mPButtonConfirm->setObjectName(QStringLiteral("mPButtonConfirm"));
        mPButtonConfirm->setMinimumSize(QSize(0, 30));
        mPButtonConfirm->setFont(font);
        mPButtonConfirm->setCursor(QCursor(Qt::PointingHandCursor));
        mPButtonConfirm->setStyleSheet(QLatin1String("border:none;\n"
"background-color:#cc3333;\n"
"color:white;\n"
"border-radius:5px;"));

        horizontalLayout_6->addWidget(mPButtonConfirm);


        verticalLayout->addWidget(widget_4);


        retranslateUi(TransAccWidget);

        QMetaObject::connectSlotsByName(TransAccWidget);
    } // setupUi

    void retranslateUi(QWidget *TransAccWidget)
    {
        TransAccWidget->setWindowTitle(QApplication::translate("TransAccWidget", "TransAccWidget", nullptr));
        label->setText(QApplication::translate("TransAccWidget", "PWR", nullptr));
        label_2->setText(QApplication::translate("TransAccWidget", "Transfer", nullptr));
        mPButtonClose->setText(QString());
        label_6->setText(QApplication::translate("TransAccWidget", "Escrow Balance", nullptr));
        balanceLabel->setText(QString());
        label_5->setText(QApplication::translate("TransAccWidget", "PWR", nullptr));
        label_3->setText(QApplication::translate("TransAccWidget", "Address", nullptr));
        label_7->setText(QApplication::translate("TransAccWidget", "Hosted Address", nullptr));
        label_8->setText(QApplication::translate("TransAccWidget", "Amount", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QApplication::translate("TransAccWidget", "Enter Amount", nullptr));
        label_12->setText(QApplication::translate("TransAccWidget", "Payment Address", nullptr));
        mLabelAddress->setText(QString());
        label_13->setText(QApplication::translate("TransAccWidget", "Cost of Miners", nullptr));
        label_15->setText(QApplication::translate("TransAccWidget", "0.0004", nullptr));
        label_14->setText(QApplication::translate("TransAccWidget", "PWR", nullptr));
        label_17->setText(QApplication::translate("TransAccWidget", "0.0004", nullptr));
        label_16->setText(QApplication::translate("TransAccWidget", "0.006", nullptr));
        mPButtonConfirm->setText(QApplication::translate("TransAccWidget", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransAccWidget: public Ui_TransAccWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACCWIDGET_H

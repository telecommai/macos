/********************************************************************************
** Form generated from reading UI file 'PackUnitWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKUNITWIDGET_H
#define UI_PACKUNITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PackUnitWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *PackUnitWidget)
    {
        if (PackUnitWidget->objectName().isEmpty())
            PackUnitWidget->setObjectName(QStringLiteral("PackUnitWidget"));
        PackUnitWidget->resize(289, 72);
        PackUnitWidget->setCursor(QCursor(Qt::PointingHandCursor));
        PackUnitWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(PackUnitWidget);
        horizontalLayout->setSpacing(8);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(PackUnitWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(40, 40));
        label->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(PackUnitWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("color: #333333;\n"
""));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(PackUnitWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(PackUnitWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:#999999;"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(PackUnitWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(PackUnitWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:#999999;"));

        verticalLayout_2->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(PackUnitWidget);

        QMetaObject::connectSlotsByName(PackUnitWidget);
    } // setupUi

    void retranslateUi(QWidget *PackUnitWidget)
    {
        PackUnitWidget->setWindowTitle(QApplication::translate("PackUnitWidget", "PackUnitWidget", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("PackUnitWidget", "PWR", nullptr));
        label_4->setText(QApplication::translate("PackUnitWidget", "11.0000000", nullptr));
        label_3->setText(QApplication::translate("PackUnitWidget", "11.000000000", nullptr));
        label_5->setText(QApplication::translate("PackUnitWidget", "Available", nullptr));
        label_6->setText(QApplication::translate("PackUnitWidget", "Frozen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PackUnitWidget: public Ui_PackUnitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKUNITWIDGET_H

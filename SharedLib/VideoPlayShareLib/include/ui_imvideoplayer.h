/********************************************************************************
** Form generated from reading UI file 'imvideoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMVIDEOPLAYER_H
#define UI_IMVIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "videowidget.h"

QT_BEGIN_NAMESPACE

class Ui_IMVideoPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *quitButton;
    VideoWidget *videoWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *playButton;
    QSlider *slider;
    QLabel *placeLabel;

    void setupUi(QWidget *IMVideoPlayer)
    {
        if (IMVideoPlayer->objectName().isEmpty())
            IMVideoPlayer->setObjectName(QStringLiteral("IMVideoPlayer"));
        IMVideoPlayer->resize(573, 452);
        verticalLayout = new QVBoxLayout(IMVideoPlayer);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 2, -1, 2);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        quitButton = new QPushButton(IMVideoPlayer);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setMinimumSize(QSize(40, 40));
        quitButton->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(quitButton);


        verticalLayout->addLayout(horizontalLayout_2);

        videoWidget = new VideoWidget(IMVideoPlayer);
        videoWidget->setObjectName(QStringLiteral("videoWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(videoWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        playButton = new QPushButton(IMVideoPlayer);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setMinimumSize(QSize(40, 40));
        playButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(playButton);

        slider = new QSlider(IMVideoPlayer);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(slider);

        placeLabel = new QLabel(IMVideoPlayer);
        placeLabel->setObjectName(QStringLiteral("placeLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        placeLabel->setFont(font);

        horizontalLayout->addWidget(placeLabel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(IMVideoPlayer);

        QMetaObject::connectSlotsByName(IMVideoPlayer);
    } // setupUi

    void retranslateUi(QWidget *IMVideoPlayer)
    {
        IMVideoPlayer->setWindowTitle(QApplication::translate("IMVideoPlayer", "\350\247\206\351\242\221", nullptr));
        quitButton->setText(QString());
        playButton->setText(QString());
        placeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IMVideoPlayer: public Ui_IMVideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMVIDEOPLAYER_H

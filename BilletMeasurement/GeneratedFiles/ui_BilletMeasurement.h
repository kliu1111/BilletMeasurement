/********************************************************************************
** Form generated from reading UI file 'BilletMeasurement.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLETMEASUREMENT_H
#define UI_BILLETMEASUREMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BilletMeasurementClass
{
public:
    QAction *action_connect;
    QAction *action_disconnect;
    QAction *action_start;
    QAction *action_pause;
    QAction *action_setcamparam;
    QAction *action_syncing;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_cam;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_Connect;
    QToolButton *toolButton_Disconnect;
    QToolButton *toolButton_Start;
    QToolButton *toolButton_Pause;
    QToolButton *toolButton_OpenSync;
    QToolButton *toolButton_CloseSync;
    QToolButton *toolButton_SetSync;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QGridLayout *Layout_ImageShow;
    QLabel *label_RightUp;
    QLabel *label_7;
    QLabel *label_LeftUp;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_RightDown;
    QLabel *label_LeftDown;
    QWidget *tab_measure;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QMainWindow *BilletMeasurementClass)
    {
        if (BilletMeasurementClass->objectName().isEmpty())
            BilletMeasurementClass->setObjectName(QStringLiteral("BilletMeasurementClass"));
        BilletMeasurementClass->setEnabled(true);
        BilletMeasurementClass->resize(956, 810);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BilletMeasurementClass->sizePolicy().hasHeightForWidth());
        BilletMeasurementClass->setSizePolicy(sizePolicy);
        QFont font;
        font.setKerning(true);
        BilletMeasurementClass->setFont(font);
        BilletMeasurementClass->setLayoutDirection(Qt::LeftToRight);
        action_connect = new QAction(BilletMeasurementClass);
        action_connect->setObjectName(QStringLiteral("action_connect"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/ico/connect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_connect->setIcon(icon);
        action_disconnect = new QAction(BilletMeasurementClass);
        action_disconnect->setObjectName(QStringLiteral("action_disconnect"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/ico/disconnect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_disconnect->setIcon(icon1);
        action_start = new QAction(BilletMeasurementClass);
        action_start->setObjectName(QStringLiteral("action_start"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/ico/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_start->setIcon(icon2);
        action_pause = new QAction(BilletMeasurementClass);
        action_pause->setObjectName(QStringLiteral("action_pause"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/ico/pasue.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_pause->setIcon(icon3);
        action_setcamparam = new QAction(BilletMeasurementClass);
        action_setcamparam->setObjectName(QStringLiteral("action_setcamparam"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/ico/settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_setcamparam->setIcon(icon4);
        action_syncing = new QAction(BilletMeasurementClass);
        action_syncing->setObjectName(QStringLiteral("action_syncing"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/ico/syncing.ico"), QSize(), QIcon::Normal, QIcon::Off);
        action_syncing->setIcon(icon5);
        centralWidget = new QWidget(BilletMeasurementClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_cam = new QWidget();
        tab_cam->setObjectName(QStringLiteral("tab_cam"));
        verticalLayout_5 = new QVBoxLayout(tab_cam);
        verticalLayout_5->setSpacing(1);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton_Connect = new QToolButton(tab_cam);
        toolButton_Connect->setObjectName(QStringLiteral("toolButton_Connect"));
        toolButton_Connect->setMinimumSize(QSize(80, 0));
        toolButton_Connect->setMaximumSize(QSize(80, 16777215));
        toolButton_Connect->setFocusPolicy(Qt::TabFocus);
        toolButton_Connect->setIcon(icon);
        toolButton_Connect->setIconSize(QSize(24, 24));
        toolButton_Connect->setPopupMode(QToolButton::DelayedPopup);
        toolButton_Connect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_Connect->setAutoRaise(true);
        toolButton_Connect->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButton_Connect);

        toolButton_Disconnect = new QToolButton(tab_cam);
        toolButton_Disconnect->setObjectName(QStringLiteral("toolButton_Disconnect"));
        toolButton_Disconnect->setMinimumSize(QSize(80, 0));
        toolButton_Disconnect->setMaximumSize(QSize(80, 16777215));
        toolButton_Disconnect->setIcon(icon1);
        toolButton_Disconnect->setIconSize(QSize(24, 24));
        toolButton_Disconnect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_Disconnect->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Disconnect);

        toolButton_Start = new QToolButton(tab_cam);
        toolButton_Start->setObjectName(QStringLiteral("toolButton_Start"));
        toolButton_Start->setMinimumSize(QSize(80, 0));
        toolButton_Start->setMaximumSize(QSize(80, 16777215));
        toolButton_Start->setCursor(QCursor(Qt::ArrowCursor));
        toolButton_Start->setMouseTracking(false);
        toolButton_Start->setAcceptDrops(true);
        toolButton_Start->setIcon(icon2);
        toolButton_Start->setIconSize(QSize(24, 24));
        toolButton_Start->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_Start->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Start);

        toolButton_Pause = new QToolButton(tab_cam);
        toolButton_Pause->setObjectName(QStringLiteral("toolButton_Pause"));
        toolButton_Pause->setMinimumSize(QSize(80, 0));
        toolButton_Pause->setMaximumSize(QSize(80, 16777215));
        toolButton_Pause->setIcon(icon3);
        toolButton_Pause->setIconSize(QSize(24, 24));
        toolButton_Pause->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_Pause->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Pause);

        toolButton_OpenSync = new QToolButton(tab_cam);
        toolButton_OpenSync->setObjectName(QStringLiteral("toolButton_OpenSync"));
        toolButton_OpenSync->setEnabled(true);
        toolButton_OpenSync->setMinimumSize(QSize(80, 0));
        toolButton_OpenSync->setMaximumSize(QSize(80, 16777215));
        toolButton_OpenSync->setAcceptDrops(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/ico/\345\274\200\345\205\263 \345\274\200(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_OpenSync->setIcon(icon6);
        toolButton_OpenSync->setIconSize(QSize(24, 24));
        toolButton_OpenSync->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_OpenSync->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_OpenSync);

        toolButton_CloseSync = new QToolButton(tab_cam);
        toolButton_CloseSync->setObjectName(QStringLiteral("toolButton_CloseSync"));
        toolButton_CloseSync->setMinimumSize(QSize(80, 0));
        toolButton_CloseSync->setMaximumSize(QSize(80, 16777215));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/ico/\345\274\200\345\205\263 \345\205\263(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_CloseSync->setIcon(icon7);
        toolButton_CloseSync->setIconSize(QSize(24, 24));
        toolButton_CloseSync->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_CloseSync->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_CloseSync);

        toolButton_SetSync = new QToolButton(tab_cam);
        toolButton_SetSync->setObjectName(QStringLiteral("toolButton_SetSync"));
        toolButton_SetSync->setMinimumSize(QSize(80, 0));
        toolButton_SetSync->setMaximumSize(QSize(80, 16777215));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/ico/\350\256\276\347\275\256\345\217\202\346\225\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_SetSync->setIcon(icon8);
        toolButton_SetSync->setIconSize(QSize(24, 24));
        toolButton_SetSync->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_SetSync->setAutoRaise(true);
        toolButton_SetSync->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButton_SetSync);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(tab_cam);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QFont font1;
        font1.setFamily(QStringLiteral("ADMUI3Lg"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        treeWidget->setFont(font1);
        treeWidget->setStyleSheet(QStringLiteral("font: 10pt \"ADMUI3Lg\";"));
        treeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        treeWidget->setUniformRowHeights(true);
        treeWidget->header()->setCascadingSectionResizes(false);

        horizontalLayout_3->addWidget(treeWidget);


        verticalLayout_5->addLayout(horizontalLayout_3);

        Layout_ImageShow = new QGridLayout();
        Layout_ImageShow->setSpacing(6);
        Layout_ImageShow->setObjectName(QStringLiteral("Layout_ImageShow"));
        label_RightUp = new QLabel(tab_cam);
        label_RightUp->setObjectName(QStringLiteral("label_RightUp"));
        label_RightUp->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        Layout_ImageShow->addWidget(label_RightUp, 1, 1, 1, 1);

        label_7 = new QLabel(tab_cam);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        Layout_ImageShow->addWidget(label_7, 2, 0, 1, 1);

        label_LeftUp = new QLabel(tab_cam);
        label_LeftUp->setObjectName(QStringLiteral("label_LeftUp"));
        label_LeftUp->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_LeftUp->setTextFormat(Qt::AutoText);

        Layout_ImageShow->addWidget(label_LeftUp, 1, 0, 1, 1);

        label_8 = new QLabel(tab_cam);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        Layout_ImageShow->addWidget(label_8, 2, 1, 1, 1);

        label = new QLabel(tab_cam);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        Layout_ImageShow->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(tab_cam);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        Layout_ImageShow->addWidget(label_2, 0, 1, 1, 1);

        label_RightDown = new QLabel(tab_cam);
        label_RightDown->setObjectName(QStringLiteral("label_RightDown"));
        label_RightDown->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_RightDown->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        Layout_ImageShow->addWidget(label_RightDown, 3, 1, 1, 1);

        label_LeftDown = new QLabel(tab_cam);
        label_LeftDown->setObjectName(QStringLiteral("label_LeftDown"));
        label_LeftDown->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_LeftDown->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        Layout_ImageShow->addWidget(label_LeftDown, 3, 0, 1, 1);

        Layout_ImageShow->setRowStretch(0, 1);
        Layout_ImageShow->setRowStretch(1, 20);
        Layout_ImageShow->setRowStretch(2, 1);
        Layout_ImageShow->setRowStretch(3, 20);

        verticalLayout_5->addLayout(Layout_ImageShow);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 5);
        verticalLayout_5->setStretch(2, 25);
        tabWidget->addTab(tab_cam, QString());
        tab_measure = new QWidget();
        tab_measure->setObjectName(QStringLiteral("tab_measure"));
        verticalLayout = new QVBoxLayout(tab_measure);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_17 = new QLabel(tab_measure);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_5->addWidget(label_17);


        verticalLayout->addLayout(horizontalLayout_5);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_13 = new QLabel(tab_measure);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        label_11 = new QLabel(tab_measure);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(3, 3, 3);"));

        gridLayout_2->addWidget(label_11, 3, 0, 1, 1);

        label_10 = new QLabel(tab_measure);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(3, 3, 3);"));

        gridLayout_2->addWidget(label_10, 1, 1, 1, 1);

        label_14 = new QLabel(tab_measure);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 0, 1, 1, 1);

        label_12 = new QLabel(tab_measure);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(3, 3, 3);"));

        gridLayout_2->addWidget(label_12, 3, 1, 1, 1);

        label_9 = new QLabel(tab_measure);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(2, 2, 2);"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_15 = new QLabel(tab_measure);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 2, 0, 1, 1);

        label_16 = new QLabel(tab_measure);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 2, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 10);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 10);

        verticalLayout->addLayout(gridLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);
        tabWidget->addTab(tab_measure, QString());

        verticalLayout_4->addWidget(tabWidget);

        BilletMeasurementClass->setCentralWidget(centralWidget);

        retranslateUi(BilletMeasurementClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BilletMeasurementClass);
    } // setupUi

    void retranslateUi(QMainWindow *BilletMeasurementClass)
    {
        BilletMeasurementClass->setWindowTitle(QApplication::translate("BilletMeasurementClass", "BilletMeasurement", 0));
        action_connect->setText(QApplication::translate("BilletMeasurementClass", "\350\277\236\346\216\245\347\233\270\346\234\272", 0));
        action_disconnect->setText(QApplication::translate("BilletMeasurementClass", "\346\226\255\345\274\200\347\233\270\346\234\272", 0));
        action_start->setText(QApplication::translate("BilletMeasurementClass", "\345\274\200\345\247\213\351\207\207\351\233\206", 0));
        action_pause->setText(QApplication::translate("BilletMeasurementClass", "\345\201\234\346\255\242\351\207\207\351\233\206", 0));
        action_setcamparam->setText(QApplication::translate("BilletMeasurementClass", "\350\256\276\347\275\256\347\233\270\346\234\272\345\217\202\346\225\260", 0));
        action_syncing->setText(QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        toolButton_Connect->setText(QApplication::translate("BilletMeasurementClass", "\350\277\236\346\216\245\347\233\270\346\234\272", 0));
        toolButton_Disconnect->setText(QApplication::translate("BilletMeasurementClass", "\346\226\255\345\274\200\347\233\270\346\234\272", 0));
        toolButton_Start->setText(QApplication::translate("BilletMeasurementClass", "\345\274\200\345\247\213\351\207\207\351\233\206", 0));
        toolButton_Pause->setText(QApplication::translate("BilletMeasurementClass", "\345\201\234\346\255\242\351\207\207\351\233\206", 0));
        toolButton_OpenSync->setText(QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        toolButton_CloseSync->setText(QApplication::translate("BilletMeasurementClass", "\345\205\263\351\227\255\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        toolButton_SetSync->setText(QApplication::translate("BilletMeasurementClass", "\350\256\276\347\275\256\350\247\246\345\217\221\345\217\202\346\225\260", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(8, QApplication::translate("BilletMeasurementClass", "\345\233\276\345\203\217\351\253\230\345\272\246", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("BilletMeasurementClass", "\345\233\276\345\203\217\345\256\275\345\272\246", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("BilletMeasurementClass", "\346\233\235\345\205\211\346\227\266\351\227\264", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\270\247\351\242\221", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\347\212\266\346\200\201", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272IP", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272MAC", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272ID", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\236\213\345\217\267", 0));
        label_RightUp->setText(QString());
        label_7->setText(QApplication::translate("BilletMeasurementClass", "Cam3", 0));
        label_LeftUp->setText(QString());
        label_8->setText(QApplication::translate("BilletMeasurementClass", "Cam4", 0));
        label->setText(QApplication::translate("BilletMeasurementClass", "Cam1", 0));
        label_2->setText(QApplication::translate("BilletMeasurementClass", "Cam2", 0));
        label_RightDown->setText(QString());
        label_LeftDown->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_cam), QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\351\207\207\351\233\206", 0));
        label_17->setText(QApplication::translate("BilletMeasurementClass", "\347\256\227\346\263\225\347\232\204\350\277\220\350\241\214\347\212\266\346\200\201\357\274\214\346\214\211\351\222\256\347\255\211", 0));
        label_13->setText(QApplication::translate("BilletMeasurementClass", "\345\256\236\346\227\266\346\201\242\345\244\215\345\207\272\347\232\204\350\275\256\345\273\223\357\274\210pcl\345\261\225\347\244\272\357\274\211\345\271\266\344\277\235\345\255\230", 0));
        label_11->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label_10->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label_14->setText(QApplication::translate("BilletMeasurementClass", "\345\256\236\346\227\266\350\256\241\347\256\227\345\207\272\347\232\204\350\275\256\345\273\223\345\260\272\345\257\270", 0));
        label_12->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label_9->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label_15->setText(QApplication::translate("BilletMeasurementClass", "\344\271\213\345\211\215\347\232\204\350\275\256\345\273\223\347\232\204\346\225\260\346\215\256", 0));
        label_16->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_measure), QApplication::translate("BilletMeasurementClass", "\350\275\256\345\273\223\346\265\213\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class BilletMeasurementClass: public Ui_BilletMeasurementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLETMEASUREMENT_H

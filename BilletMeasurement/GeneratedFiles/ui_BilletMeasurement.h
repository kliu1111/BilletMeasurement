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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
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
    QToolButton *toolButton_8;
    QSpacerItem *horizontalSpacer_15;
    QToolButton *toolButton_9;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *toolButton_10;
    QSpacerItem *horizontalSpacer_10;
    QToolButton *toolButton_11;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *toolButton_12;
    QSpacerItem *horizontalSpacer_12;
    QToolButton *toolButton_13;
    QSpacerItem *horizontalSpacer_13;
    QToolButton *toolButton_14;
    QSpacerItem *horizontalSpacer_14;
    QToolButton *toolButton_15;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *treeWidget;
    QGridLayout *Layout_ImageShow;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *tab_measure;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BilletMeasurementClass)
    {
        if (BilletMeasurementClass->objectName().isEmpty())
            BilletMeasurementClass->setObjectName(QStringLiteral("BilletMeasurementClass"));
        BilletMeasurementClass->setEnabled(true);
        BilletMeasurementClass->resize(936, 774);
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
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_cam = new QWidget();
        tab_cam->setObjectName(QStringLiteral("tab_cam"));
        verticalLayout_5 = new QVBoxLayout(tab_cam);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton_8 = new QToolButton(tab_cam);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setFocusPolicy(Qt::TabFocus);
        toolButton_8->setIcon(icon);
        toolButton_8->setIconSize(QSize(24, 24));
        toolButton_8->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_8);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_15);

        toolButton_9 = new QToolButton(tab_cam);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setIcon(icon1);
        toolButton_9->setIconSize(QSize(24, 24));
        toolButton_9->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_9);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        toolButton_10 = new QToolButton(tab_cam);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setCursor(QCursor(Qt::ArrowCursor));
        toolButton_10->setMouseTracking(false);
        toolButton_10->setAcceptDrops(true);
        toolButton_10->setIcon(icon2);
        toolButton_10->setIconSize(QSize(24, 24));
        toolButton_10->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        toolButton_11 = new QToolButton(tab_cam);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        toolButton_11->setIcon(icon3);
        toolButton_11->setIconSize(QSize(24, 24));
        toolButton_11->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_11);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        toolButton_12 = new QToolButton(tab_cam);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/ico/Setting_32px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_12->setIcon(icon6);
        toolButton_12->setIconSize(QSize(24, 24));
        toolButton_12->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_12);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        toolButton_13 = new QToolButton(tab_cam);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        toolButton_13->setAcceptDrops(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/ico/\345\274\200\345\205\263 \345\274\200(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_13->setIcon(icon7);
        toolButton_13->setIconSize(QSize(24, 24));
        toolButton_13->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_13);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        toolButton_14 = new QToolButton(tab_cam);
        toolButton_14->setObjectName(QStringLiteral("toolButton_14"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/ico/\345\274\200\345\205\263 \345\205\263(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_14->setIcon(icon8);
        toolButton_14->setIconSize(QSize(24, 24));
        toolButton_14->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(toolButton_14);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);

        toolButton_15 = new QToolButton(tab_cam);
        toolButton_15->setObjectName(QStringLiteral("toolButton_15"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/ico/\350\256\276\347\275\256\345\217\202\346\225\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_15->setIcon(icon9);
        toolButton_15->setIconSize(QSize(24, 24));
        toolButton_15->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_15->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButton_15);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        treeWidget = new QTreeWidget(tab_cam);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
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
        treeWidget->setUniformRowHeights(true);
        treeWidget->header()->setCascadingSectionResizes(false);

        horizontalLayout_3->addWidget(treeWidget);


        verticalLayout_5->addLayout(horizontalLayout_3);

        Layout_ImageShow = new QGridLayout();
        Layout_ImageShow->setSpacing(6);
        Layout_ImageShow->setObjectName(QStringLiteral("Layout_ImageShow"));
        label_6 = new QLabel(tab_cam);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        Layout_ImageShow->addWidget(label_6, 1, 1, 1, 1);

        label_7 = new QLabel(tab_cam);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        Layout_ImageShow->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(tab_cam);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        Layout_ImageShow->addWidget(label_5, 1, 0, 1, 1);

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

        label_4 = new QLabel(tab_cam);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        Layout_ImageShow->addWidget(label_4, 3, 1, 1, 1);

        label_3 = new QLabel(tab_cam);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        Layout_ImageShow->addWidget(label_3, 3, 0, 1, 1);

        Layout_ImageShow->setRowStretch(0, 1);
        Layout_ImageShow->setRowStretch(1, 10);
        Layout_ImageShow->setRowStretch(2, 1);
        Layout_ImageShow->setRowStretch(3, 10);

        verticalLayout_5->addLayout(Layout_ImageShow);

        verticalLayout_5->setStretch(0, 2);
        verticalLayout_5->setStretch(1, 4);
        verticalLayout_5->setStretch(2, 25);
        tabWidget->addTab(tab_cam, QString());
        tab_measure = new QWidget();
        tab_measure->setObjectName(QStringLiteral("tab_measure"));
        tabWidget->addTab(tab_measure, QString());

        verticalLayout_4->addWidget(tabWidget);

        BilletMeasurementClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BilletMeasurementClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 936, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        BilletMeasurementClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(BilletMeasurementClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BilletMeasurementClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addSeparator();

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
        toolButton_8->setText(QApplication::translate("BilletMeasurementClass", "\350\277\236\346\216\245\347\233\270\346\234\272", 0));
        toolButton_9->setText(QApplication::translate("BilletMeasurementClass", "\346\226\255\345\274\200\347\233\270\346\234\272", 0));
        toolButton_10->setText(QApplication::translate("BilletMeasurementClass", "\345\274\200\345\247\213\351\207\207\351\233\206", 0));
        toolButton_11->setText(QApplication::translate("BilletMeasurementClass", "\345\201\234\346\255\242\351\207\207\351\233\206", 0));
        toolButton_12->setText(QApplication::translate("BilletMeasurementClass", "\350\256\276\347\275\256\347\233\270\346\234\272\345\217\202\346\225\260", 0));
        toolButton_13->setText(QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        toolButton_14->setText(QApplication::translate("BilletMeasurementClass", "\345\205\263\351\227\255\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        toolButton_15->setText(QApplication::translate("BilletMeasurementClass", "\350\256\276\347\275\256\350\247\246\345\217\221\345\217\202\346\225\260", 0));
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

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\236\213\345\217\267", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\236\213\345\217\267", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\236\213\345\217\267", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\345\236\213\345\217\267", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label_6->setText(QString());
        label_7->setText(QApplication::translate("BilletMeasurementClass", "Cam3", 0));
        label_5->setText(QString());
        label_8->setText(QApplication::translate("BilletMeasurementClass", "Cam4", 0));
        label->setText(QApplication::translate("BilletMeasurementClass", "Cam1", 0));
        label_2->setText(QApplication::translate("BilletMeasurementClass", "Cam2", 0));
        label_4->setText(QString());
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_cam), QApplication::translate("BilletMeasurementClass", "\347\233\270\346\234\272\351\207\207\351\233\206", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_measure), QApplication::translate("BilletMeasurementClass", "\350\275\256\345\273\223\346\265\213\351\207\217", 0));
        menu->setTitle(QApplication::translate("BilletMeasurementClass", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("BilletMeasurementClass", "\347\274\226\350\276\221", 0));
    } // retranslateUi

};

namespace Ui {
    class BilletMeasurementClass: public Ui_BilletMeasurementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLETMEASUREMENT_H

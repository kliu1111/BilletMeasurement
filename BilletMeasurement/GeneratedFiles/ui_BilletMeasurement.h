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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
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
    QVBoxLayout *Layout_CamInfo;
    QTreeWidget *treeWidget;
    QHBoxLayout *Layout_Btn;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_8;
    QGridLayout *Layout_ImageShow;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *tab_measure;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BilletMeasurementClass)
    {
        if (BilletMeasurementClass->objectName().isEmpty())
            BilletMeasurementClass->setObjectName(QStringLiteral("BilletMeasurementClass"));
        BilletMeasurementClass->setEnabled(true);
        BilletMeasurementClass->resize(946, 774);
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
        Layout_CamInfo = new QVBoxLayout();
        Layout_CamInfo->setSpacing(6);
        Layout_CamInfo->setObjectName(QStringLiteral("Layout_CamInfo"));
        treeWidget = new QTreeWidget(tab_cam);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        treeWidget->setUniformRowHeights(true);
        treeWidget->header()->setCascadingSectionResizes(false);

        Layout_CamInfo->addWidget(treeWidget);


        verticalLayout_5->addLayout(Layout_CamInfo);

        Layout_Btn = new QHBoxLayout();
        Layout_Btn->setSpacing(6);
        Layout_Btn->setObjectName(QStringLiteral("Layout_Btn"));
        pushButton = new QPushButton(tab_cam);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        Layout_Btn->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(tab_cam);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        Layout_Btn->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(tab_cam);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        Layout_Btn->addWidget(pushButton_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer_7);

        pushButton_6 = new QPushButton(tab_cam);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        Layout_Btn->addWidget(pushButton_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer_6);

        pushButton_5 = new QPushButton(tab_cam);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        Layout_Btn->addWidget(pushButton_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer_4);

        pushButton_3 = new QPushButton(tab_cam);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        Layout_Btn->addWidget(pushButton_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer_5);

        pushButton_7 = new QPushButton(tab_cam);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        Layout_Btn->addWidget(pushButton_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Layout_Btn->addItem(horizontalSpacer_3);

        pushButton_8 = new QPushButton(tab_cam);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        Layout_Btn->addWidget(pushButton_8);


        verticalLayout_5->addLayout(Layout_Btn);

        Layout_ImageShow = new QGridLayout();
        Layout_ImageShow->setSpacing(6);
        Layout_ImageShow->setObjectName(QStringLiteral("Layout_ImageShow"));
        label_2 = new QLabel(tab_cam);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        Layout_ImageShow->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(tab_cam);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        Layout_ImageShow->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(tab_cam);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        Layout_ImageShow->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(tab_cam);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        Layout_ImageShow->addWidget(label_4, 1, 1, 1, 1);


        verticalLayout_5->addLayout(Layout_ImageShow);

        verticalLayout_5->setStretch(0, 4);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 20);
        tabWidget->addTab(tab_cam, QString());
        tab_measure = new QWidget();
        tab_measure->setObjectName(QStringLiteral("tab_measure"));
        tabWidget->addTab(tab_measure, QString());

        verticalLayout_4->addWidget(tabWidget);

        BilletMeasurementClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BilletMeasurementClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 946, 17));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        BilletMeasurementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BilletMeasurementClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BilletMeasurementClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BilletMeasurementClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BilletMeasurementClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addSeparator();
        mainToolBar->addAction(action_connect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_disconnect);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_start);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_pause);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_setcamparam);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_syncing);

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
        ___qtreewidgetitem1->setText(0, QApplication::translate("BilletMeasurementClass", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("BilletMeasurementClass", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("BilletMeasurementClass", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("BilletMeasurementClass", "\346\226\260\345\273\272\351\241\271\347\233\256", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QApplication::translate("BilletMeasurementClass", "\350\277\236\346\216\245\347\233\270\346\234\272", 0));
        pushButton_2->setText(QApplication::translate("BilletMeasurementClass", "\346\226\255\345\274\200\347\233\270\346\234\272", 0));
        pushButton_4->setText(QApplication::translate("BilletMeasurementClass", "\345\274\200\345\247\213\351\207\207\351\233\206", 0));
        pushButton_6->setText(QApplication::translate("BilletMeasurementClass", "\345\201\234\346\255\242\351\207\207\351\233\206", 0));
        pushButton_5->setText(QApplication::translate("BilletMeasurementClass", "\350\256\276\347\275\256\347\233\270\346\234\272\345\217\202\346\225\260", 0));
        pushButton_3->setText(QApplication::translate("BilletMeasurementClass", "\345\274\200\345\220\257\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        pushButton_7->setText(QApplication::translate("BilletMeasurementClass", "\345\205\263\351\227\255\345\220\214\346\255\245\351\207\207\351\233\206", 0));
        pushButton_8->setText(QApplication::translate("BilletMeasurementClass", "\350\256\276\347\275\256\350\247\246\345\217\221\345\217\202\346\225\260", 0));
        label_2->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label_3->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
        label_4->setText(QApplication::translate("BilletMeasurementClass", "TextLabel", 0));
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

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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BilletMeasurementClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BilletMeasurementClass)
    {
        if (BilletMeasurementClass->objectName().isEmpty())
            BilletMeasurementClass->setObjectName(QStringLiteral("BilletMeasurementClass"));
        BilletMeasurementClass->resize(600, 400);
        menuBar = new QMenuBar(BilletMeasurementClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        BilletMeasurementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BilletMeasurementClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BilletMeasurementClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BilletMeasurementClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BilletMeasurementClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BilletMeasurementClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BilletMeasurementClass->setStatusBar(statusBar);

        retranslateUi(BilletMeasurementClass);

        QMetaObject::connectSlotsByName(BilletMeasurementClass);
    } // setupUi

    void retranslateUi(QMainWindow *BilletMeasurementClass)
    {
        BilletMeasurementClass->setWindowTitle(QApplication::translate("BilletMeasurementClass", "BilletMeasurement", 0));
    } // retranslateUi

};

namespace Ui {
    class BilletMeasurementClass: public Ui_BilletMeasurementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLETMEASUREMENT_H

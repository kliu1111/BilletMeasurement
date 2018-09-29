#ifndef BILLETMEASUREMENT_H
#define BILLETMEASUREMENT_H

#include <QtWidgets/QMainWindow>
#include "ui_BilletMeasurement.h"

class BilletMeasurement : public QMainWindow
{
	Q_OBJECT

public:
	BilletMeasurement(QWidget *parent = 0);
	~BilletMeasurement();

private:
	Ui::BilletMeasurementClass ui;
};

#endif // BILLETMEASUREMENT_H

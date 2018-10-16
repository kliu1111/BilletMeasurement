#ifndef BILLETOFFLINE_H
#define BILLETOFFLINE_H

#include <QtWidgets/QMainWindow>
#include "ui_BilletOffline.h"

class BilletOffline : public QMainWindow
{
	Q_OBJECT

public:
	BilletOffline(QWidget *parent = 0);
	~BilletOffline();

private:
	Ui::BilletOfflineClass ui;
};

#endif // BILLETOFFLINE_H

#include "BilletOffline.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BilletOffline w;
	w.show();
	return a.exec();
}

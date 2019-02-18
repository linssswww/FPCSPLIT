#include "FPCSPLIT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FPCSPLIT w;
	w.show();
	return a.exec();
}

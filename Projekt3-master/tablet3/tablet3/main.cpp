#include "tablet3.h"
#include "opcja1.h"
#include "urzadzenie_elektroniczne.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	tablet3 w;
	w.show();
	a.exec();
	for (auto urzadzenie : tablet3::urzadzenie)
		delete urzadzenie;
	 return 0;
}

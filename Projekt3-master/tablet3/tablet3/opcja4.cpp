#include "opcja4.h"
#include <qstring.h>

Opcja4::Opcja4(QWidget *parent)
	: QDialog(parent)
{
	o4.setupUi(this);

}
void Opcja4::wyswietl()
{
	if (tablet3::urzadzenie.empty())
			o4.lista->addItem(QString::fromStdString("Nie ma zadnych obiektow"));
		else
		{
			for (int i = 0; i < tablet3::urzadzenie.size(); i++)
			{
				o4.lista->addItem(QString::number(i + 1) + "." + QString::fromStdString((tablet3::urzadzenie[i])->wypisz_stan()));
			}
		}
	
}
void Opcja4::wyswietlobraz()
{
	if (tablet3::urzadzenie.size() > 0)
	{
		index = o4.lista->currentRow();
		if (tablet3::rodzaj_urzadzenia[index] == "Tablet")
		{
			o4.obrazek->setScene(&scena);
			if (zdjecie.load("zdjecia/tablet.bmp"));
			{

				scena.setSceneRect(zdjecie.rect());
				scena.clear();
				scena.addPixmap(zdjecie);

				o4.obrazek->fitInView(zdjecie.rect());
			}
		}
		else if (tablet3::rodzaj_urzadzenia[index] == "Stacjonarne")
		{
			o4.obrazek->setScene(&scena);
			if (zdjecie.load("zdjecia/stacjonarny.bmp"));
			{


				scena.setSceneRect(zdjecie.rect());
				scena.clear();
				scena.addPixmap(zdjecie);

				o4.obrazek->fitInView(zdjecie.rect());

			}
		}
		else if (tablet3::rodzaj_urzadzenia[index] == "Przenosne")
		{
			o4.obrazek->setScene(&scena);
			if (zdjecie.load("zdjecia/przenosny.bmp"));
			{


				scena.setSceneRect(zdjecie.rect());
				scena.clear();
				scena.addPixmap(zdjecie);

				o4.obrazek->fitInView(zdjecie.rect());

			}
		}
	}
	
}


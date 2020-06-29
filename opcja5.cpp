#include "opcja5.h"



Opcja5::Opcja5(QWidget *parent)
	: QDialog(parent)
{
	o5.setupUi(this);
}

void Opcja5::wyswietl()
{
	if (tablet3::urzadzenie.empty())
		o5.box->addItem(QString::fromStdString("Nie ma zadnych obiektow"));
	else
	{
		for (int i = 0; i < tablet3::urzadzenie.size(); i++)
		{
			o5.box->addItem(QString::number(i+1)+"."+QString::fromStdString((tablet3::urzadzenie[i])->wypisz_stan()));
		}
	}
}
void Opcja5::dousuniecia()
{
	indeks = o5.box->currentIndex();
}
void Opcja5::usun()
{
	if (tablet3::urzadzenie.empty())
		close();
	else
	{
		tablet3::urzadzenie.erase(tablet3::urzadzenie.begin() + indeks);
		tablet3::rodzaj_urzadzenia.erase(tablet3::rodzaj_urzadzenia.begin() + indeks);
		o5.box->clear();
		wyswietl();
		update();
	}
}
#include "opcja6.h"
#include <qstring.h>

Opcja6::Opcja6(QWidget *parent)
	: QDialog(parent)
{
	o6.setupUi(this);
	o6.ramka->setVisible(false);

}



void Opcja6::wyswietl()
{
	if (tablet3::urzadzenie.empty())
		o6.obiekty->addItem(QString::fromStdString("Nie ma zadnych obiektow"));
	else
	{
		for (int i = 0; i < tablet3::urzadzenie.size(); i++)
		{
			o6.obiekty->addItem(QString::number(i + 1) + "." + QString::fromStdString((tablet3::urzadzenie[i])->wypisz_stan()));
		}
	}
}



void Opcja6::doedycji()
{
	index = o6.obiekty->currentRow();
	for (int i = 0; i < tablet3::urzadzenie.size(); i++)
	{
		if (tablet3::rodzaj_urzadzenia[index] == "Tablet")
		{
			o6.textEdit->clear();
			o6.textEdit_2->clear();
			o6.textEdit_3->clear();
			o6.textEdit_4->clear();
			o6.label_4->setText("Ilosc portow");
			o6.textEdit->setPlaceholderText("Domyslny");
			o6.textEdit_2->setPlaceholderText("Domyslny");
			o6.textEdit_3->setPlaceholderText("0");
			o6.textEdit_4->setPlaceholderText("0");
			o6.ramka->setVisible(true);
		}
		else if (tablet3::rodzaj_urzadzenia[index] == "Przenosne")
		{
			o6.textEdit->clear();
			o6.textEdit_2->clear();
			o6.textEdit_3->clear();
			o6.textEdit_4->clear();
			o6.label_4->setText("Wytrzymalosc bateri");
			o6.textEdit->setPlaceholderText("Domyslny");
			o6.textEdit_2->setPlaceholderText("Domyslny");
			o6.textEdit_3->setPlaceholderText("0");
			o6.textEdit_4->setPlaceholderText("0");
			o6.ramka->setVisible(true);
		}
		else if (tablet3::rodzaj_urzadzenia[index] == "Stacjonarne")
		{
			o6.textEdit->clear();
			o6.textEdit_2->clear();
			o6.textEdit_3->clear();
			o6.textEdit_4->clear();
			o6.label_4->setText("Dlugosc przewodu");
			o6.textEdit->setPlaceholderText("Domyslny");
			o6.textEdit_2->setPlaceholderText("Domyslny");
			o6.textEdit_3->setPlaceholderText("0");
			o6.textEdit_4->setPlaceholderText("0");
			o6.ramka->setVisible(true);
		}
	}
}
void Opcja6::edytuj()
{
	for (int i = 0; i < tablet3::urzadzenie.size(); i++)
	{
		if (tablet3::rodzaj_urzadzenia[index] == "Tablet")
		{
			tablet3::urzadzenie[index]->edytuj(o6.textEdit->toPlainText().toStdString() == "" ? "Domyslny" : o6.textEdit->toPlainText().toStdString(),
				o6.textEdit_2->toPlainText().toStdString() == "" ? "Domyslny" : o6.textEdit_2->toPlainText().toStdString(),
				o6.textEdit_3->toPlainText().toInt());
			tablet3::urzadzenie[index]->edytujzmienna(o6.textEdit_4->toPlainText().toInt());
		}
		else if (tablet3::rodzaj_urzadzenia[index] == "Przenosne")
		{
			tablet3::urzadzenie[index]->edytuj(o6.textEdit->toPlainText().toStdString() == "" ? "Domyslny" : o6.textEdit->toPlainText().toStdString(),
				o6.textEdit_2->toPlainText().toStdString() == "" ? "Domyslny" : o6.textEdit_2->toPlainText().toStdString(),
				o6.textEdit_3->toPlainText().toInt());
			tablet3::urzadzenie[index]->edytujzmienna(o6.textEdit_4->toPlainText().toInt());
		}
		else if (tablet3::rodzaj_urzadzenia[index] == "Stacjonarne")
		{
			tablet3::urzadzenie[index]->edytuj(o6.textEdit->toPlainText().toStdString() == "" ? "Domyslny" : o6.textEdit->toPlainText().toStdString(),
				o6.textEdit_2->toPlainText().toStdString() == "" ? "Domyslny" : o6.textEdit_2->toPlainText().toStdString(),
				o6.textEdit_3->toPlainText().toInt());
			tablet3::urzadzenie[index]->edytujzmienna(o6.textEdit_4->toPlainText().toInt());
		}
	}
	o6.obiekty->clear();
	wyswietl();
}
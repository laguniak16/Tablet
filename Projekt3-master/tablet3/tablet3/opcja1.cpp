#include "opcja1.h"


Opcja1::Opcja1(QWidget *parent)
	: QDialog(parent)
{
	
	o1.setupUi(this);
	o1.ramka->setVisible(false);
}
	

void Opcja1::dodajtablet()
{
	o1.textEdit->clear();
	o1.textEdit_2->clear();
	o1.textEdit_3->clear();
	o1.textEdit_4->clear();
	o1.label_4->setText("Ilosc portow");
	
	obiekt = TABLET;

	o1.textEdit->setPlaceholderText("Domyslny");
	o1.textEdit_2->setPlaceholderText("Domyslny");
	o1.textEdit_3->setPlaceholderText("0");
	o1.textEdit_4->setPlaceholderText("0");
	o1.ramka->setVisible(true);

}
void Opcja1::dodaj()
{
	Urzadzenie_elektroniczne *nowy;
	switch (obiekt) 
	{
	case TABLET:
	{
	
		nowy = new Tablet(o1.textEdit->toPlainText().toStdString() == "" ? "Domyslny" : o1.textEdit->toPlainText().toStdString(),
			o1.textEdit_2->toPlainText().toStdString() == "" ? "Domyslny" : o1.textEdit_2->toPlainText().toStdString(),
			o1.textEdit_3->toPlainText().toInt(), o1.textEdit_4->toPlainText().toInt());
		tablet3::rodzaj_urzadzenia.push_back("Tablet");
		break;
	}
	case PRZENOSNE:
	
	
		nowy = new Przenosne(o1.textEdit->toPlainText().toStdString() == "" ? "Domyslny" : o1.textEdit->toPlainText().toStdString(),
			o1.textEdit_2->toPlainText().toStdString() == "" ? "Domyslny" : o1.textEdit_2->toPlainText().toStdString(),
			o1.textEdit_3->toPlainText().toInt(), o1.textEdit_4->toPlainText().toInt());
		tablet3::rodzaj_urzadzenia.push_back("Przenosne");
		break;
	
	case STACJONARNE:
		nowy = new Stacjonarne(o1.textEdit->toPlainText().toStdString() == "" ? "Domyslny" : o1.textEdit->toPlainText().toStdString(),
			o1.textEdit_2->toPlainText().toStdString() == "" ? "Domyslny" : o1.textEdit_2->toPlainText().toStdString(),
			o1.textEdit_3->toPlainText().toInt(), o1.textEdit_4->toPlainText().toInt());
		tablet3::rodzaj_urzadzenia.push_back("Stacjonarne");
		break;

	}
	tablet3::urzadzenie.push_back(nowy);
}
void Opcja1::dodajprzenosne()
{
	o1.textEdit->clear();
	o1.textEdit_2->clear();
	o1.textEdit_3->clear();
	o1.textEdit_4->clear();
	o1.label_4->setText("Wytrzymalosc bateri");

	obiekt = PRZENOSNE;

	o1.textEdit->setPlaceholderText("Domyslny");
	o1.textEdit_2->setPlaceholderText("Domyslny");
	o1.textEdit_3->setPlaceholderText("0");
	o1.textEdit_4->setPlaceholderText("0");
	o1.ramka->setVisible(true);
}

void Opcja1::dodajstacjonarne()
{
	o1.textEdit->clear();
	o1.textEdit_2->clear();
	o1.textEdit_3->clear();
	o1.textEdit_4->clear();
	o1.label_4->setText("Dlugosc Przewodu");

	obiekt = STACJONARNE;

	o1.textEdit->setPlaceholderText("Domyslny");
	o1.textEdit_2->setPlaceholderText("Domyslny");
	o1.textEdit_3->setPlaceholderText("0");
	o1.textEdit_4->setPlaceholderText("0");
	o1.ramka->setVisible(true);
}


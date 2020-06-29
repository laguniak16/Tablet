#include "tablet3.h"

vector<Urzadzenie_elektroniczne*> tablet3::urzadzenie;
vector<string> tablet3::rodzaj_urzadzenia;

tablet3::tablet3(QWidget *parent): QMainWindow(parent)
{
	
	ui.setupUi(this);

}

void tablet3::funkcja1()
{
	Opcja1 o1;
	o1.exec();
}

void tablet3::funkcja2()
{
	QString nazwa_pliku = QFileDialog::getSaveFileName(this, tr("Save File"), "C:// ", "All Files (*) ;; Text file(*.txt)");
	string nazwa = nazwa_pliku.toStdString();
	fstream plik(nazwa, ios::app);
	if (urzadzenie.empty())
		{
			QMessageBox mb;
			mb.setText("Nie ma czego zapisac");
			mb.exec();
		}
	else
		{
			for (int i = 0; i < urzadzenie.size(); i++)
			{
				
				urzadzenie[i]->zapis(plik);
			}
		}
	plik.close();
}

void tablet3::funkcja3()
{
	QString nazwa_pliku = QFileDialog::getOpenFileName(this, tr("Open File"), "C:// ", "All Files (*);; Text file(*.txt)");
	string nazwa = nazwa_pliku.toStdString();
	fstream plik(nazwa, ios::in);
	bool pusty = true;
	Tablet *wczytajtablet;
	Przenosne *wczytajprzenosne;
	Stacjonarne *wczytajstacjonarne;

	
	while (!plik.eof())
	{
		string linia;
		getline(plik, linia);

		if (linia == "Tablet")
		{
			wczytajtablet = new Tablet;
			wczytajtablet->wczyt(plik);
			urzadzenie.push_back(wczytajtablet);
			rodzaj_urzadzenia.push_back("Tablet");
			pusty = false;
		}
		else if (linia == "Przenosne")
		{
			wczytajprzenosne = new Przenosne;
			wczytajprzenosne->wczyt(plik);
			urzadzenie.push_back(wczytajprzenosne);
			rodzaj_urzadzenia.push_back("Przenosne");
			pusty = false;
		}
		else if (linia == "Stacjonarne")
		{
			wczytajstacjonarne = new Stacjonarne;
			wczytajstacjonarne->wczyt(plik);
			urzadzenie.push_back(wczytajstacjonarne);
			rodzaj_urzadzenia.push_back("Stacjonarne");
			pusty = false;
		}
		else if (pusty == true)
		{
			QMessageBox mb;
			mb.setText("Nic nie wczytano");
			mb.exec();
			break;
		}
	}
	plik.close();
}

void tablet3::funkcja4()
{
	Opcja4 o4;
	o4.wyswietl();
	o4.exec();
}
void tablet3::funkcja5()
{
	Opcja5 o5;
	o5.wyswietl();
	o5.exec();
}

void tablet3::funkcja6()
{
	Opcja6 o6;
	o6.wyswietl();
	o6.exec();
}

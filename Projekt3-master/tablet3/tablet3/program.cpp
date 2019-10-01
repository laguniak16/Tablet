/*#include <iostream>
#include <string>
#include "tablet.h"
#include "przenosne.h"
#include "stacjonarne.h"
#include "urzadzenie_elektroniczne.h"
#include <ctype.h>

using namespace std;

int opcja;
int obiekt = 1;
string nazwa;
int main()
{
	vector<Urzadzenie_elektroniczne*> urzadzenie;
	bool pusty = true;
	cout << "Domyslnie ustawiono obiekt tablet" << endl;
	do
	{
		switch (opcja)
		{
		case 0:
			cout << "MENU PROGRAMU" << endl;
			cout << "-------------------------------" << endl;
			cout << "Wybierz opcje:" << endl;
			cout << "1: Dodaj domyslny wybrany obiekt" << endl;
			cout << "2: Zapis obiektow do pliku" << endl;
			cout << "3: Odczyt obiektow z pliku" << endl;
			cout << "4: Wypisz zawartosc wektora" << endl;
			cout << "5: Testowanie polimorfizmu" << endl;
			cout << "6: Zamknij program" << endl;
			cout << "-------------------------------" << endl;
			cout << "Opcja: ";

			cin >> opcja;
			cin.clear();
			cin.ignore(1000, '\n');
			break;

		case 1:
			do {
				cout << "Wybierz Obiekt: " << endl;
				cout << "1-Tablet 2-Przenosne 3-Stacjonarne" << endl << "Obiekt: ";

				cin >> obiekt;
				cout << endl;

			} while (obiekt != 1 && obiekt != 2 && obiekt != 3);
			if (obiekt == 1)
			{
				Tablet *nowyt = new Tablet;
				urzadzenie.push_back(nowyt);
			}
			else if (obiekt == 2)
			{
				Przenosne *nowyp = new Przenosne;
				urzadzenie.push_back(nowyp);
			}
			else
			{
				Stacjonarne*nowys = new Stacjonarne;
				urzadzenie.push_back(nowys);
			}

			opcja = 0;
			break;
		case 2:fstream plik("pliczek.txt", ios::app);
			if (plik.good())
			{
				if (urzadzenie.empty())
					cout << "Nie ma obiektow w wektorze do zapisu" << endl;
				else
				{
					fstream plik("pliczek.txt", ios::app);
					for (int i = 0; i < urzadzenie.size(); i++)
					{
						urzadzenie[i]->zapis(plik);
					}
				}
			}
			else
			{
				cout << "plik nie istnieje";
			}
			plik.close();
		{

			
			opcja = 0;
			break;
		}
		case 3:
		{
			fstream plik("pliczek.txt", ios::in);
			string linia;
			Tablet *wczytajtablet;
			Przenosne *wczytajprzenosne;
			Stacjonarne *wczytajstacjonarne;
			if (plik.good())
			{
				while (!plik.eof())
				{
					getline(plik, linia);
					if (linia == "Tablet")
					{
						wczytajtablet = new Tablet;
						wczytajtablet->wczyt(plik);
						urzadzenie.push_back(wczytajtablet);
						pusty = false;
					}
					else if (linia == "Przenosne")
					{
						wczytajprzenosne = new Przenosne;
						wczytajprzenosne->wczyt(plik);
						urzadzenie.push_back(wczytajprzenosne);
						pusty = false;
					}
					else if (linia == "Stacjonarne")
					{
						wczytajstacjonarne = new Stacjonarne;
						wczytajstacjonarne->wczyt(plik);
						urzadzenie.push_back(wczytajstacjonarne);
						pusty = false;
					}
					else if (pusty == true)
					{
						cout << "Pusty plik" << endl;
						break;
					}

				}
			}
			else
				{
					cout << "plik nie istnieje";
				}
			plik.close();
			opcja = 0;
			break;
		}
		case 4:
		{
			system("cls");
			if (urzadzenie.empty())
				cout << "Nie ma obiektow w wektorze do wyswietlenia" << endl;
			else
			{
				cout << "Stan urzadzen: " << endl;
				for (int i = 0; i <urzadzenie.size(); i++)
				{
					urzadzenie[i]->wypisz_stan();
				}
			}
			opcja = 0;
			break;
		}
		case 5:
		{
			Stacjonarne stacjonarne;
			Przenosne przenosne;
			Tablet tablet;
			vector <Urzadzenie_elektroniczne*> urzadzenie2;
			urzadzenie2.push_back(&tablet);
			urzadzenie2.push_back(&przenosne);
			urzadzenie2.push_back(&stacjonarne);

			cout << "Polimorfizm na podstawie wektora wskaznikow" << endl;
			for (int i = 0; i < 3; i++)
			{
				urzadzenie2[i]->wypisz_stan();
			}
			cout << "Funkcja wypisz jest w kazdej z klas i w kazdej wypisuje inaczej" << endl;
			cout << "A po usunieci slowa virtual wypisuje jak funkcja klasy urzadzenie elektroniczne" << endl;

			opcja = 0;
			break;
		}
		default:
		{
			cout << "Zla opcja" <<endl;
			opcja = 0;
		}
			
		}
	} while (opcja != 6);
}*/

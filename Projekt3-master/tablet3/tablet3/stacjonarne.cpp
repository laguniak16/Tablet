#include "stacjonarne.h"


Stacjonarne::Stacjonarne()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor Stacjonarne" << endl;
#endif // _DEBUG
	nazwa = "Stacjonarny";
	typ = "Rogowy";
	numer_seryjny = 2;
	dlugosc_przewodu = 10;
	ilosc_obiektow++;
}

Stacjonarne::Stacjonarne(string nazwa1, string typ1, int numer, int dlugosc)
{
	nazwa = nazwa1;
	typ = typ1;
	numer_seryjny = numer;
	dlugosc_przewodu = dlugosc;
	ilosc_obiektow++;
}

Stacjonarne::~Stacjonarne()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Stacjonarne" << endl;
#endif // _DEBUG
	ilosc_obiektow--;
}

void Stacjonarne::inna_wartosc(int nowa_wartosc)
{
	numer_seryjny = nowa_wartosc;
}

string Stacjonarne::wypisz_stan()
{
	return " Nazwa: " + nazwa + " Typ: " + typ + " Numer Seryjny: " + to_string(numer_seryjny) + " Dlugosc przewodu: " + to_string(dlugosc_przewodu);
	
}

void Stacjonarne::edytujzmienna(int zmienna)
{
	dlugosc_przewodu = zmienna;
}

void Stacjonarne::zapis(fstream &plik)
{
#ifdef _DEBUG
	cout << "Zapisano Stacjonarne" << endl;
#endif
	plik << *this;
}

void Stacjonarne::wczyt(fstream & plik)
{
#ifdef _DEBUG
	cout << "Wczytano Stacjonarne" << endl;
#endif
	plik >> *this;
}

fstream & operator<<(fstream & wyp, Stacjonarne & stacjonarne)
{
	wyp << "Stacjonarne" << endl << stacjonarne.nazwa << endl << stacjonarne.typ << endl << stacjonarne.numer_seryjny << endl << stacjonarne.dlugosc_przewodu << endl;
	return wyp;
}

fstream & operator>>(fstream & wcz, Stacjonarne & stacjonarne)
{
	wcz >> stacjonarne.nazwa >> stacjonarne.typ >> stacjonarne.numer_seryjny >> stacjonarne.dlugosc_przewodu;
	return wcz;
}

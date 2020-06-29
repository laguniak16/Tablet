#include "przenosne.h"

Przenosne::Przenosne()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor Przenosne" << endl;
#endif // _DEBUG
	nazwa = "Przenosny";
	typ = "Podreczny";
	numer_seryjny = 1;
	wytrzymalosc_bateri = 100;
	ilosc_obiektow++;
}

Przenosne::Przenosne(string nazwa1, string typ1, int numer, int wytrzymalosc)
{
	nazwa = nazwa1;
	typ = typ1;
	numer_seryjny = numer;
	wytrzymalosc_bateri = wytrzymalosc;
	ilosc_obiektow++;
}

Przenosne::~Przenosne()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Przenosne" << endl;
#endif // _DEBUG
	ilosc_obiektow--;
}

void Przenosne::inna_wartosc(int nowa_wartosc)
{
	numer_seryjny = nowa_wartosc;
}

string Przenosne::wypisz_stan()
{
	return  " Nazwa: "  + nazwa + " Typ: " + typ + " Numer_seryjny: " + to_string(numer_seryjny) + " Wytrzymalosc bateri: " + to_string(wytrzymalosc_bateri);
}

void Przenosne::edytujzmienna(int zmienna)
{
	wytrzymalosc_bateri = zmienna;
}

void Przenosne::zapis(fstream &plik)
{
#ifdef _DEBUG
	cout << "Zapisano Przenosne" << endl;
#endif
	plik << *this;
}

void Przenosne::wczyt(fstream & plik)
{
#ifdef _DEBUG
	cout << "Wczytano Przenosne" << endl;
#endif
	plik >> *this;
}

fstream & operator<<(fstream & wyp, Przenosne& przenosne)
{
	wyp <<"Przenosne" << endl<< przenosne.nazwa << endl << przenosne.typ << endl << przenosne.numer_seryjny << endl << przenosne.wytrzymalosc_bateri << endl;
	return wyp;
}

fstream & operator>>(fstream & wcz, Przenosne& przenosne)
{
	wcz >> przenosne.nazwa >> przenosne.typ >> przenosne.numer_seryjny >> przenosne.wytrzymalosc_bateri;
	return wcz;
}

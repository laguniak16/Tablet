#include "cechy_fizyczne.h"

CechyFizyczne::CechyFizyczne()
{
#ifdef _DEBUG
	cout << "Wywolano kontruktor Cechy_fizyczne"<< endl;
#endif
	rodzaj_karty = "KingStone";
}

CechyFizyczne::~CechyFizyczne()
{
#ifdef _DEBUG
	cout << "wywolano destruktor Cechy_fizyczne"<< endl;
#endif 
}


void CechyFizyczne::wymien_karte(string nowa_karta)
{
	rodzaj_karty = nowa_karta;
}

string CechyFizyczne::wypisz_stan()
{
	return " Rodzaj karty: " + rodzaj_karty;
}

void CechyFizyczne::zapis(fstream &plik)
{
#ifdef _DEBUG
	cout << "Zapisano Fizyczne" << endl;
#endif
	plik << *this;
}

void CechyFizyczne::wczyt(fstream & plik)
{
#ifdef _DEBUG
	cout << "Wczytano Przenosne" << endl;
#endif
	plik >> *this;
}

fstream & operator<<(fstream & wyp, CechyFizyczne & fizyczne)
{
	wyp << fizyczne.rodzaj_karty << endl;
	return wyp;
	// TODO: insert return statement here
}

fstream & operator>>(fstream & wcz, CechyFizyczne & fizyczne)
{
	wcz >> fizyczne.rodzaj_karty;
	return wcz;
	// TODO: insert return statement here
}

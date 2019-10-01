#include "tablet.h"




Tablet::Tablet()
{
#ifdef _DEBUG
	cout << "Wywo³ano konstruktor Tablet" << endl;
#endif
	cechy_tabletu = NULL;
	nazwa = "Tablet";
	typ = "typowyTablet";
	numer_seryjny = 0;
	ilosc_portow = 2;
	ilosc_obiektow++;
	
}

Tablet::Tablet(string nazwa1,string typ1,int numer,int porty)
{
#ifdef _DEBUG
	cout << "Wywo³ano konstruktor Tablet 2" << endl;
#endif
	cechy_tabletu = NULL;
	nazwa = nazwa1;
	numer_seryjny = numer;
	typ = typ1;
	ilosc_portow = porty;
	ilosc_obiektow++;
	
}

Tablet::~Tablet()
{
#ifdef _DEBUG
	cout << "Wywo³ano destruktor Tabletu" << endl;
#endif
	delete cechy_tabletu;
	ilosc_obiektow--;
}

Tablet::Tablet(const Tablet &tablet)
{
	
	cechy_fizyczne = tablet.cechy_fizyczne;
	if (cechy_tabletu != NULL)
	cechy_tabletu = new CechyTabletu;

	cechy_tabletu = tablet.cechy_tabletu;
	nazwa = tablet.nazwa;
	typ = tablet.typ;
	numer_seryjny = tablet.numer_seryjny;
	ilosc_portow = tablet.ilosc_portow;

}
int Tablet::ile_obiektow()
{
	return ilosc_obiektow;
}

void Tablet::edytujzmienna(int zmienna)
{
	ilosc_portow = zmienna;
}

void Tablet::zapis(fstream &plik)
{
#ifdef _DEBUG
	cout << "Zapisano Tablet" << endl;
#endif
	plik << *this;
}

void Tablet::wczyt(fstream & plik)
{
#ifdef _DEBUG
	cout << "Wczytano Tablet" << endl;
#endif
	plik >> *this;
}

void Tablet::nowa_nazwa(string nowa_nazwa)
{
	nazwa = nowa_nazwa;
}

string Tablet::wypisz_stan()
{
	return  " Nazwa Tabletu: " + nazwa + " Typ Tabletu: " + typ + " Numer_seryjny: " + to_string(numer_seryjny) + " Ilosc portow: " + to_string(ilosc_portow);
}

void Tablet::inna_wartosc(int nowa_wartosc)
{
	numer_seryjny = nowa_wartosc;
}

// Operatory
bool Tablet::operator==(const Tablet & tablet)
{
	if(typ == tablet.typ)
	return true;
	else
	return false;
}

bool Tablet::operator > (const Tablet & tablet) 
{
	if (numer_seryjny > tablet.numer_seryjny)
		return true;
	else
	return false;
}

bool Tablet::operator<(const Tablet & tablet)
{
	if (numer_seryjny < tablet.numer_seryjny)
		return true;
	else
	return false;
}

bool Tablet::operator&&(const Tablet & tablet)
{
	if (nazwa == tablet.nazwa && typ == tablet.typ)
		return true;
	else
	return false;
}

Tablet & Tablet::operator = (const Tablet & tablet)
{
	
	nazwa = tablet.nazwa;
	typ = tablet.typ;
	numer_seryjny = tablet.numer_seryjny;
	if (tablet.cechy_tabletu == NULL)
		cechy_tabletu = tablet.cechy_tabletu;
	return *this;
}


Tablet Tablet::operator + (const Tablet &tablet)
{
	
	Tablet suma;
	suma.numer_seryjny = numer_seryjny + tablet.numer_seryjny;
	return suma;

}

Tablet & Tablet::operator+=(const Tablet & tablet)
{
	numer_seryjny = numer_seryjny + tablet.numer_seryjny;
	return *this;
}

Tablet  Tablet::operator*(const Tablet & tablet)
{
	Tablet iloczyn;
	iloczyn.numer_seryjny = numer_seryjny * tablet.numer_seryjny;
	return iloczyn;
}

Tablet & Tablet::operator++(int)
{

	numer_seryjny++;
	return *this;
}

Tablet & Tablet::operator--(int)
{
	numer_seryjny--;
	return *this;
}

int Tablet::operator[](int i)
{
	return numer_seryjny;
}

fstream & operator<<(fstream &wyp, Tablet & tablet)
{
	wyp << "Tablet" << endl << tablet.nazwa << endl << tablet.typ << endl << tablet.numer_seryjny << endl << tablet.ilosc_portow << endl;
	return wyp;
}

fstream & operator>>(fstream &wcz, Tablet & tablet)
{
	wcz >> tablet.nazwa >> tablet.typ >> tablet.numer_seryjny >> tablet.ilosc_portow;
	return wcz;
	// TODO: insert return statement here
}

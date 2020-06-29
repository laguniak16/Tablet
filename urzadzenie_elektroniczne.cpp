#include <iostream>
#include <string>
#include <fstream>
#include "urzadzenie_elektroniczne.h"

int Urzadzenie_elektroniczne::ilosc_obiektow = 0;

Urzadzenie_elektroniczne::Urzadzenie_elektroniczne()
{
#ifdef _DEBUG
	cout << "Wywo³ano konstruktor Urzadzenie elektroniczne" << endl;
#endif
	nazwa = "Nazwa";
	typ = "Typ";
	numer_seryjny = 000;
	rodzaj_urzadzenia = "Rodzaj";
}

Urzadzenie_elektroniczne::~Urzadzenie_elektroniczne()
{
#ifdef _DEBUG
	cout << "Wywo³ano destruktor Urzadzenie elektroniczne"<<endl;
#endif
}

void Urzadzenie_elektroniczne::zmien_nazwe(string nowa_nazwa)
{
	nazwa = nowa_nazwa;
}

string Urzadzenie_elektroniczne::wypisz_stan()
{
	return " Nazwa: " + nazwa + " Typ: " + typ + " Numer Seryjny: " + to_string(numer_seryjny) + " Rodzaj: " + rodzaj_urzadzenia;
}

void Urzadzenie_elektroniczne::edytuj(string nowa_nazwa, string nowy_typ, int numer)
{
	nazwa = nowa_nazwa;
	typ = nowy_typ;
	numer_seryjny = numer;
}


fstream & operator<<(fstream & wyp, Urzadzenie_elektroniczne & urzadzenie)
{
	wyp << urzadzenie.nazwa << endl << urzadzenie.typ << endl << urzadzenie.numer_seryjny << endl << urzadzenie.rodzaj_urzadzenia;
	return wyp;
	// TODO: insert return statement here
}

fstream & operator>>(fstream & wcz, Urzadzenie_elektroniczne & urzadzenie)
{
	wcz >> urzadzenie.nazwa >> urzadzenie.typ >> urzadzenie.numer_seryjny >> urzadzenie.rodzaj_urzadzenia;
	return wcz;
	// TODO: insert return statement here
}

#include "dodatki tabletu.h"

DodatkiTabletu::DodatkiTabletu()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor Dodatki" << endl;
#endif
	ram = 8;
	rodzaj_karty_graficznej = "NvidiaGTX";
	oprogramowanie = "Windows10";

}

DodatkiTabletu::~DodatkiTabletu()
{
#ifdef _DEBUG
	cout << "wywolano destruktor Dodatki" << endl;
#endif 
}

void DodatkiTabletu::dodaj_ram(int dodaj)
{
	ram += dodaj;
}

void DodatkiTabletu::zmien_karte(string karta)
{
	rodzaj_karty_graficznej = karta;
}

void DodatkiTabletu::zaktualizuj(string aktualizuj)
{
	oprogramowanie = aktualizuj;
}

string DodatkiTabletu::wypisz_stan()
{
	return " Oprogramowanie: " + oprogramowanie + "Ram: " + to_string(ram) + " Rodzaj Karty Graficznej: " + rodzaj_karty_graficznej;
}

void DodatkiTabletu::zapis(fstream & plik)
{
#ifdef _DEBUG
	cout << "Zapisano Dodatki" << endl;
#endif
	plik << *this;
}

void DodatkiTabletu::wczyt(fstream & plik)
{
#ifdef _DEBUG
	cout << "Wczytano Dodatki" << endl;
#endif
	plik >> *this;
}

fstream & operator<<(fstream & wyp, DodatkiTabletu & dodatki)
{
	wyp << dodatki.oprogramowanie << endl << dodatki.ram<< endl << dodatki.rodzaj_karty_graficznej << endl;
	return wyp;
	// TODO: insert return statement here
}

fstream & operator>>(fstream & wcz, DodatkiTabletu & dodatki)
{
	wcz >> dodatki.oprogramowanie >> dodatki.ram >> dodatki.rodzaj_karty_graficznej;
	return wcz;
	// TODO: insert return statement here
}

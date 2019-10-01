#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <qfile.h>
#include <QTextStream>

#include "cechy tabletu.h"
#include "cechy_fizyczne.h"
#include "dodatki tabletu.h"
#include "przenosne.h"

using namespace std;


/// Klasa Tablet pochodna klasy Przenosne
class Tablet : public Przenosne
{
private:
	/// Podklasa klasy Tablet
	CechyFizyczne cechy_fizyczne;
	/// Podklasa klasy Tablet
	CechyTabletu *cechy_tabletu;
	/// Podklasa klasy Tablet
	DodatkiTabletu dodatki_tabletu;
	/// Zmienna przechowujaca liczbe portow
	int ilosc_portow;


public:
	/// Konstruktor
	Tablet();
	/// Kontruktor z parametrami zmieniajca typ i numer
	Tablet(string nazwa,string typ,int numer, int porty);
	/// Destruktor
	~Tablet();
	/// Konstruktor kopiujacy
	Tablet(const Tablet &tablet);
	/// Funkcja wyswietlajaca ilosc obiektow
	int ile_obiektow();

	void edytujzmienna(int zmienna);
	/// Funkcja zapisujaca do pliku przyjmujaca jako argument plik
	void zapis(fstream &plik);
	/// Funkcja wczytujaca z pliku przyjmujaca jako argument plik
	void wczyt(fstream &plik);

	/// Funkcja zmieniajaca nazwe Tabletu
	void nowa_nazwa(string nowa_nazwa);
	/// Funkcja wypisujaca stan
	string wypisz_stan();
	/// Funkcja zmieniajaca parametr w obiekcie
	void inna_wartosc(int nowa_wartosc);

	/// Operator ==
	bool operator == (const Tablet &tablet);
	/// Operator >
	bool operator > (const Tablet &tablet);
	/// Operator <
	bool operator < (const Tablet &tablet);
	/// Operator &&
	bool operator && (const Tablet &tablet);
	/// Operator =
	Tablet& operator = (const Tablet &tablet);
	/// Operator +
	Tablet operator + (const Tablet &tablet);
	/// Operator +=
	Tablet& operator += (const Tablet &tablet);
	/// Operator *
	Tablet operator * (const Tablet &tablet);
	/// Operator ++
	Tablet& operator ++(int);
	/// Operator --
	Tablet& operator --(int);
	/// Operator []
	int operator [](int i);
	/// Operator strumieniowy <<
	friend fstream & operator << (fstream&wyp, Tablet &tablet);
	/// Operator strumieniowy >>
	friend fstream & operator >> (fstream&wcz, Tablet& tablet);


};
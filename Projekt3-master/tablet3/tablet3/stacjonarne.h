#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <QTextStream>
#include "urzadzenie_elektroniczne.h"

using namespace std;

/// Klasa Stacjonarne pochodna klasy Urzadzenie_elektroniczne
class Stacjonarne : public Urzadzenie_elektroniczne
{
private:
	/// Zmienna przechowujaca dlugosc przewodu
	int dlugosc_przewodu;
public:
	/// Konstruktor
	Stacjonarne();
	Stacjonarne(string nazwa, string typ, int numer, int dlugosc);
	/// Destruktor
	~Stacjonarne();
	/// Funkcja zmieniajaca parametr obiektu
	void inna_wartosc(int nowa_wartosc);
	/// Funkcja wypisujaca stan
	string wypisz_stan();
	void edytujzmienna(int zmienna);
	/// Funkcja zapisujaca do pliku przyjmujaca jako argument plik
	void zapis(fstream &plik);
	/// Funkcja wczytujaca z pliku przyjmujaca jako argument plik
	void wczyt(fstream &plik);
	/// Operator strumieniowy <<
	friend fstream & operator << (fstream&wyp, Stacjonarne &stacjonarne);
	/// Operator strumieniowy >>
	friend fstream & operator >> (fstream&wcz, Stacjonarne &stacjonarne);
};
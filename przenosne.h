#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <qTextStream>
#include "urzadzenie_elektroniczne.h"

using namespace std;

/// Klasa Przenosne pochodna klasy Urzadzenie_elektroniczne
class Przenosne : public Urzadzenie_elektroniczne
{
private:
	/// Zmienna przechowujaca wytrzymalosc bateri
	int wytrzymalosc_bateri;
public:
	/// Konstruktor
	Przenosne();
	Przenosne(string nazwa, string typ, int numer, int wytrzymalosc);
	/// Destruktor
	~Przenosne();

	/// Funkcja zmieniajaca parametr obiektu
	void inna_wartosc(int nowa_wartosc);
	/// Funkcja wyswietlajaca stan
	string wypisz_stan();
	void edytujzmienna(int zmienna);

	/// Funkcja zapisujaca do pliku przyjmujaca jako argument plik
	void zapis(fstream &plik);
	/// Funkcja wczytujaca z pliku przyjmujaca jako argument plik
	void wczyt(fstream &plik);

	/// Operator strumieniowy <<
	friend fstream& operator <<(fstream&wyp, Przenosne& Przenosne);
	/// Operator strumieniowy >>
	friend fstream& operator >>(fstream&wcz, Przenosne& Przenosne);
};

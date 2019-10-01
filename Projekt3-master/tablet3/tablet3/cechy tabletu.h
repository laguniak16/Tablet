#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/// Klasa Cechy_tabletu podklasa klasy Tablet
class CechyTabletu
{
private:
	/// Zmienna przechowujaca glosnosc
	int glosnosc;
	/// Zmienna przechowujaca pojemnosc pamieci
	int pojemnosc_pamieci;


public:
	///Konstrukotr
	CechyTabletu();
	/// Destruktor
	~CechyTabletu();
	/// Funkcja zmieniajaca glosnosc
	void ustawglosnosc();
	/// Funkcja wyswietlajaca stan
	string wypisz_stan();
	/// Funkcja dodajaca pojemnosc pamieci
	void doloz_pamieci(int doloz);

	/// Operator strumieniowy <<
	friend fstream& operator <<(fstream&wyp, CechyTabletu& cechy);
	/// Operator strumieniowy >>
	friend fstream& operator >>(fstream&wcz, CechyTabletu& cechy);

};
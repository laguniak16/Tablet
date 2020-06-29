#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <QTextStream>

using namespace std;

/// Glowna abstrakcyjna klasa Urzadzenie_elektroniczne
class Urzadzenie_elektroniczne
{
private:
	/// Zmienna przechowujaca rodzaj urzadzenia
	string rodzaj_urzadzenia;
protected:
	/// Zmienna przechowujaca nazwe urzadzenia
	string nazwa;
	/// Zmienna przechowujaca typ urzadzenia
	string typ;
	/// Zmienna przechowujaca numer seryjny
	int numer_seryjny;
public:
	/// Zmienna statyczna przechowujaca ilosc obiektow
	static int ilosc_obiektow;
	/// Konstruktor
	Urzadzenie_elektroniczne();
	/// Destruktor
	~Urzadzenie_elektroniczne();
	/// Funkcja zmieniajaca nazwe na podana
	void zmien_nazwe(string nazwa_nazwa);

	/// Funkcja wirtualna zapisujaca do pliku przyjmujaca jako argument plik
	virtual void zapis (fstream &plik)=0;
	/// Funkcja wirtualna wczytujaca z pliku przyjmujaca jako argument plik
	virtual void wczyt(fstream &plik) = 0;
	virtual void edytujzmienna(int zmienna) = 0;
	/// Funkcja wirtualna wypisujaca stan obiektu
	virtual string wypisz_stan() =0;
	void edytuj(string nowa_nazwa,string nowy_typ,int numer);

	
	/// Operator strumieniowy <<
	friend fstream& operator <<(fstream& wyp, Urzadzenie_elektroniczne&urzadzenie);
	/// Operator strumieniowy >>
	friend fstream& operator >>(fstream &wcz, Urzadzenie_elektroniczne&urzadzenie);

};


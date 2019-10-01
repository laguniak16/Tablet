#pragma once
#include <iostream>
#include <string>
#include <fstream>


using namespace std;
/// Klasa Cechy_fizyczne podklasa klasy Tablet
class CechyFizyczne
{
private:
	/// Zmienna przechowujaca rodzaj karty
	string rodzaj_karty;

public:
	/// Konstruktor
	CechyFizyczne();
	/// Destruktor
	~CechyFizyczne();
	/// Funkcja zmieniajaca karte
	void wymien_karte(string nowa_karta);
	/// Funkcja wyswietlajaca stan
	string wypisz_stan();

	/// Funkcja zapisuajaca do pliku przyjmujaca jako argument plik
	void zapis(fstream &plik);
	/// Funkcja wczytujaca z pliku przyjmujaca jako argument plik
	void wczyt(fstream &plik);

	/// Operator strumieniowy <<
	friend fstream& operator <<(fstream&wyp, CechyFizyczne& fizyczne);
	/// Operator strumieniowy >>
	friend fstream& operator >>(fstream&wcz, CechyFizyczne& fizyczne);
};
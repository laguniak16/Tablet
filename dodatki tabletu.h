#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
/// Klasa Dodatki_tabletu podklasa klasy Tablet
class DodatkiTabletu
{
private:
	/// Zmienna przechowujaca ilosc ram
	int ram;
	/// Zmienna przechowujaca rodzaj karty graficznej
	string rodzaj_karty_graficznej;
	/// Zmienna przechowujaca rodzaj oprogramowania
	string oprogramowanie;

public:
	/// Konstruktor
	DodatkiTabletu();
	/// Destruktor
	~DodatkiTabletu();
	/// Funkcja dokladajaca ram
	void dodaj_ram(int dodaj);
	/// Funkcja wymieniajaca karte
	void zmien_karte(string karta);
	/// Funkcja zmieniajaca oprogramowanie
	void zaktualizuj(string aktualizuj);
	/// Funkcja wyswietlajaca stan
	string wypisz_stan();
	/// Funkcja zapisujaca do pliku przyjmujaca jako argument plik
	void zapis(fstream &plik);
	/// Funkcja wczytujaca z pliku przyjmujaca jako argument plik
	void wczyt(fstream &plik);



	/// operator strumieniowy <<
	friend fstream& operator <<(fstream&wyp, DodatkiTabletu& dodatki);
	///operator strumieniowy >>
	friend fstream& operator >>(fstream&wcz, DodatkiTabletu& dodatki);
};
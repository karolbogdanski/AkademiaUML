#pragma once
#include <iostream>
#include <string>

using namespace std;

//uzytkonik i pochodne

class uzytkownik {
protected:

	string imie;
	string nazwisko;
	string email;
	bool logged;

public:
	bool is_logged()
	{
		if (logged)
			return true;
		else
			cout << "NIE ZALOGOWANO!" << endl;
			return false;
	}
};

class student:uzytkownik
{
private:
	int nr_albumu;
	int nr_pokoju;
	double saldo;
	int ilosc_wykupionych_noclegow;
	long numer_konta;

public:
	void zamawianie_room_service();
	double sprawdzanie_salda();
	bool czy_mozna_nocleg();
	void kupowanie_noclegu();
	void zaplata_naleznosci();
	void wykwaterowanie();

};

class administracja :uzytkownik 
{
private:
	string godziny_pracy;

public:
	bool zatwierdz(); //powazna zmiana, wszystkie metody typu "potwierdz" zamienione w jedn� po cos w koncu s� te abstrakcje lol
	double zmiana_salda_studenta();
	int zmiana_ilosci_dokonanych_rezerwacji();
	void wykwaterowanie_studenta();
	int zmiana_stanu_magazynu();

};

//usluga i pochodne

class usluga
{
protected:
	unsigned idUslugi;
	string nazwaUslugi;
	double cena;
	string opis;
	unsigned limit;

public:
	string sprawdzNazwe();
	string sprawdzCene();
	string sprawdzRodzaj();
	void dodajDoRachunku();
	
};

class nocleg:usluga
{
private:
	string imieGoscia;
	string nazwiskoGoscia;
	unsigned idNoclegu;
	string data;
	string czas;
	bool MieszkaniecMS;
	bool rodzina;

public:
	bool czyDarmowy();

};

class oplata_akadeik:usluga
{
	string data_kolejnej_wplaty();

};

class room_service:usluga
{
private:
	string nazwaProduktu;
	string rodzajProdktu;
	bool zawAlkoholu;
public:
	void zamow();
};

class dodatkowa_doba :usluga
{
	int ilosc;
public:
	bool isNegative();
};

//klasy niezależne

class platnosc
{
private:
	int id_platnosci;
	string sposob_platnosci;
	double kwota;
public:
	void zaplac_Karta();
	void zaplac_przelewem();
	void potwierdzenie();
	void anuluj();
	void zaplac_Blikiem();
};

class magazyn
{
private: 
	string nazwaProduktu;
	int stanMagazynu;

public:
	int zmienStan();
};
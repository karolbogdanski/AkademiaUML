#pragma once
#include <iostream>
#include <string>
#include "uzytkownik.h"

using namespace std;



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
	string sprawdzNazwe() { return nazwaUslugi; }
	double sprawdzCene() { return cena; } //zmiana typu bo byl bez sensu
	string sprawdzOpis() { return opis; } //zmiana nazwy
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
	friend void wpiszNocleg();
	nocleg();
	bool czyDarmowy()
	{
		if (MieszkaniecMS || rodzina)
		{
			cena = 0;
			return true;
		}
		else return false;
	}

};

class oplata_akademik:usluga
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
	room_service();
	void zamow();
};

class dodatkowa_doba :usluga
{
	int ilosc;
public:
	dodatkowa_doba();
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
	platnosc();
	void zaplac_Karta();
	void zaplac_przelewem();
	void potwierdzenie();
	void anuluj();
	void zaplac_Blikiem();
};

class magazyn
{
private: 
	string nazwaProduktu[4]; // zmienione na tablice no bo szanujmy sb jaka znowu nazwa produktu xD
	int stanMagazynu[4];	//jw

public:
	magazyn();
	int zmienStan();
	friend void zamowRS();
};
#pragma once
#include <iostream>
#include <string>

using namespace std;

//klasa obiekt i pochodne

class obiekt
{
protected:
	short id_obiektu;
	string nazwa;
	bool dostepnosc;

public:
	bool czy_Dostepny() 
	{
		if (dostepnosc)
			return true;
		else
			return false;
	}

};

class boisko :obiekt
{
	short nr_boiska;
};

class suszarnia : obiekt
{
	short nr_suszarki;
	short pietro;
};

class swietlica :obiekt
{
	short id_gry;
};

class rezerwacja :obiekt
{
	short id_rezerwacji;
	int dlugosc;
	string godzina_rezerwacji; //zmiana z double na string wzglêdem diagramu
};

class pralka :obiekt
{
	short nr_pralki;
	short pietro;
	friend pralka* wczytajPralki();
};
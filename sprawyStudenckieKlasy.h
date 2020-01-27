#pragma once
#include <iostream>
#include <string>
#include "uzytkownik.h"
using namespace std;

class wyborca :student
{
public:
	void zaglosuj();
	//wyrzuci³em zobacz_rezultaty() bo to powinno byæ w aktualnoœciach
};

class kandydat :wyborca
{
public:
	void zloz_nominacje();
	void anuluj_nominacje();
};

class Aktualnosci
{
public:
	string wiadomosci;
	string data;
};

class Kontakt
{
public:
	string data;
	string wiadomosc;

	void sprawdz_odpowiedz();
	void wyslij() { cout << "Wiadomosc wyslana" << endl; };
	void anuluj();
};

class rada_mieszkancow
{
	string numer_telefonu;
	string email;
	string imie_r;
	string nazwisko_r;

	string odpowiedz();
	string pisz_aktualnosc();

};
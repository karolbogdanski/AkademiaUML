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
	uzytkownik();
	bool is_logged()
	{
		if (logged)
			return true;
		else
			cout << "NIE ZALOGOWANO!" << endl;
		return false;
	}
};


class student :uzytkownik
{
private:
	int nr_albumu;
	int nr_pokoju;
	double saldo;
	int ilosc_wykupionych_noclegow;
	long numer_konta;


public:
	student();
	void zamawianie_room_service();
	double sprawdzanie_salda();
	bool czy_mozna_nocleg();
	void kupowanie_noclegu();
	void zaplata_naleznosci();
	void wykwaterowanie();
	void zgloszenie();


};

class administracja :uzytkownik
{
private:
	string godziny_pracy;

public:
	administracja();
	bool zatwierdz(); //powazna zmiana, wszystkie metody typu "potwierdz" zamienione w jedn� po cos w koncu s� te abstrakcje lol
	double zmiana_salda_studenta();
	int zmiana_ilosci_dokonanych_rezerwacji();
	void wykwaterowanie_studenta();
	int zmiana_stanu_magazynu();
	void banuj();
	void odbanuj();
	bool zmiana_statusu_zgloszenia();
	string odpowiedz_na_zgloszenie();

};



#include <iostream>
#include <string>
#include <fstream>
#include "oplatyKlasy.h"
#include "sprawyStudenckieKlasy.h"
#include "rezerwacjeKlasy.h"
#include "uzytkownik.h"
#include "czynnosciAdministracyjne.h"



void Powitanie()
{
	cout << "WITAJ W PANELU AKADEMIKA!" << endl;
}

void Menu()
{
	cout << "Wybierz interesuj�c� ci� funkcj� z poni�szych: " << endl << endl;
	cout << "1) Rezerwacje " << endl;
	cout << "2) Op�aty" << endl;
	cout << "3) Go�cie" << endl;
	cout << "4) Room Service" << endl;
	cout << "5) Wykwaterowanie" << endl;
	cout << "6) Zg�oszenia" << endl;
	cout << "7) Kontakt z Rad� Mieszka�c�w" << endl;
	cout << "8) Aktualno�ci" << endl;
	cout << "9) Wyj�cie" << endl;
}

pralka* wczytajPralki()
{
	pralka* p = new pralka;

	pralka* listaPralek[24]; //powiedzmy �e na 6 pi�trach po 4 pralki

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			pralka* p = new pralka;
			p->nr_pralki = j + 1;
			p->pietro = i + 1;

			if ((i + j) % 3 == 0)
			{
				p->dostepnosc = false;
			}

			listaPralek[i + j] = p;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "pralka nr: " << listaPralek[i + j]->nr_pralki << " pietro: " << listaPralek[i + j]->pietro;
			if (listaPralek[i + j]->czy_Dostepny() == true)
			{
				cout << " jest dostepna." << endl;
			}
			else
				cout << " jest niedostepna" << endl;
		}
	}

	return *listaPralek;
}

/*Usterka* wypelnijUsterka()
{
	ofstream f1("usterki.txt", ios::app);
	cout << "jaki typ usterki?: ";
	cin >> zgloszenieUsterka.typ;
	cout << "opisz usterke najlepiej jak potrafisz: ";
	cin >> zgloszenieUsterka.opis_usterki;
	f1 << zgloszenieUsterka.typ << endl << zgloszenieUsterka.opis_usterki;

	return 0;
}

Skarga* wypelnijSkarga()
{
	return nullptr;
}
*/

void Rezerwacje()
{
	cout << "Co chcesz zarezerwowa�?" << endl << endl;
	cout << "1) pralka" << endl;
	cout << "2) suszarka" << endl;
	cout << "3) boisko" << endl;
	cout << "4) swietlica" << endl;

	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Wybierz pralk�: " << endl;
		wczytajPralki();

		break;
	case 2:
		cout << "Wybierz suszarke: " << endl;
		break;
	case 3:
		cout << "Wybierz boisko: " << endl;
		break;
	case 4:
		cout << "Rezerwujesz swietlice." << endl;
		break;

	}


}

void Zglos() {
	cout << "Co chcesz zg�osi�?" << endl << endl;
	cout << "1) skarga" << endl;
	cout << "2) usterka" << endl;

	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1: {


		cout << "Wype�nij formularz " << endl;
		ofstream f1("usterki.txt", ios::app);
		cout << "jaki typ usterki?: ";
		cin >> zgloszenieUsterka.typ;
		cout << "opisz usterke najlepiej jak potrafisz: ";
		cin >> zgloszenieUsterka.opis_usterki;
		f1 << zgloszenieUsterka.typ << endl << zgloszenieUsterka.opis_usterki;

		break;
	}
	case 2:
		cout << "Wype�nij formularz: " << endl;
		
		break;


	}
}


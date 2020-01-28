#include <fstream>
#include "sprawyStudenckieKlasy.h"
#include "czynnosciAdministracyjne.h"



void Powitanie()
{
	cout << "WITAJ W PANELU AKADEMIKA!" << endl;
}

void Menu()
{
	cout << "Wybierz interesuj�c� ci� funkcj� z poni�szych: " << endl << endl;
	cout << "1) Rezerwacje " << endl;
	cout << "2) Oplaty" << endl;
	cout << "3) Goscie" << endl;
	cout << "4) Room Service" << endl;
	cout << "5) Wykwaterowanie" << endl;
	cout << "6) Zgloszenia" << endl;
	cout << "7) Kontakt z Rada Mieszkancow" << endl;
	cout << "8) Aktualnosci" << endl;
	cout << "9) Wyjscie" << endl;
}


Usterka* wypelnijUsterka()
{
	Usterka* wU = new Usterka;
	ofstream f1("usterki.txt", ios::app);
	cout << "jaki typ usterki?: ";
	cin >> wU->typ;
	cout << "opisz usterke najlepiej jak potrafisz: ";
	cin >> wU->opis_usterki;
	f1 << wU->typ << endl << wU->opis_usterki;

	return 0;
}

Skarga* wypelnijSkarga()
{
	return nullptr;
}

void Zglos() {
	cout << "Co chcesz zglosic?" << endl << endl;
	cout << "1) skarga" << endl;
	cout << "2) usterka" << endl;

	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1: {

		Usterka* wU = new Usterka;
		cout << "Wypelnij formularz " << endl;
		ofstream f1("usterki.txt", ios::app);
		cout << "jaki typ usterki?: ";
		cin >> wU->typ;
		cout << "opisz usterke najlepiej jak potrafisz: ";
		cin >> wU->opis_usterki;
		f1 << wU->typ << endl << wU->opis_usterki;

		break;
	}
	case 2:
		cout << "Wypelnij formularz: " << endl;
		
		break;


	}
}


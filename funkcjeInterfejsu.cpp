#include <iostream>
#include <string>
#include "oplatyKlasy.h"
#include "sprawyStudenckieKlasy.h"
#include "rezerwacjeKlasy.h"
#include "uzytkownik.h"


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
	cout << "6) Zg�o� skarg�" << endl;
	cout << "7) Kontakt z Rad� Mieszka�c�w" << endl;
	cout << "8) Aktualno�ci" << endl;
	cout << "9) Wyj�cie" << endl;
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



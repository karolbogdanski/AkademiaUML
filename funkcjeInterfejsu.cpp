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
	cout << "Wybierz interesuj¹c¹ ciê funkcjê z poni¿szych: " << endl << endl;
	cout << "1) Rezerwacje " << endl;
	cout << "2) Op³aty" << endl;
	cout << "3) Goœcie" << endl;
	cout << "4) Room Service" << endl;
	cout << "5) Wykwaterowanie" << endl;
	cout << "6) Zg³oœ skargê" << endl;
	cout << "7) Kontakt z Rad¹ Mieszkañców" << endl;
	cout << "8) Aktualnoœci" << endl;
	cout << "9) Wyjœcie" << endl;
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



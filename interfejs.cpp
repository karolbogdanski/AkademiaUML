#include <iostream>
#include <string>
#include"oplatyKlasy.h"
#include"rezerwacjeKlasy.h"
#include "uzytkownik.h"
#include "czynnosciAdministracyjne.h"


using namespace std;

void Zglos();
void Rezerwacje();
void Powitanie();
void Menu();
pralka* wczytajPralki();
Usterka* wypelnijUsterka();
void wpiszNocleg();
void zaplacAkademik();
void wybory();
void zamowRS();
void wykwateruj();

int main()
{
	setlocale(LC_ALL, "pl_PL");
	
	bool active = true;

	Powitanie();
	Menu();

	int wybor;

	while (active)
	{
		cout << "Menu Glowne: Wpisz liczbe od 1 do 9 i zatwierdz enterem." << endl;
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			Rezerwacje();
			break;

		case 2:
			zaplacAkademik();
			break;

		case 3:
			wpiszNocleg();
			break;

		case 4:
			zamowRS();
			break;

		case 5:
			wykwateruj();
			break;

		case 6:
			Zglos();
			break;

		case 7:

			break;

		case 8:

			break;

		case 9:
			wybory();
			break;
		case 10:
			active = false;
			break;

		}
	}

	system("pause");
	return 0;
}


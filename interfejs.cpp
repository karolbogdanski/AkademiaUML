#include <iostream>
#include <string>
#include"oplatyKlasy.h"
#include"rezerwacjeKlasy.h"
#include "uzytkownik.h"
#include "czynnosciAdministracyjne.h"
#include "sprawyStudenckieKlasy.h"


using namespace std;

void Aktualnoscii();
void Kontaktuj();
void Zglos();
void Rezerwacje();
void Powitanie();
void Menu();
pralka* wczytajPralki();


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
			Menu();
			break;

		case 2:

			system("cls");
			Menu();
			break;

		case 3:

			system("cls");
			Menu();
			break;

		case 4:

			system("cls");
			Menu();
			break;

		case 5:

			system("cls");
			Menu();
			break;

		case 6:

			Zglos();
			system("cls");
			Menu();
			break;

		case 7:
			cout << endl;
			Kontaktuj();
			cout << endl;

			Menu();
			break;

		case 8:

			Aktualnoscii();
			system("cls");
			Menu();
			break;

		case 9:
			active = false;
			break;

		}
	}

	system("pause");
	return 0;
}


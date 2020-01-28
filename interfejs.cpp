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

int main()
{
	bool active = true;

	Powitanie();
	Menu();

	int wybor;

	while (active)
	{
		cout << "Menu Glowne: Wpisz liczbê od 1 do 9 i zatwierdŸ enterem." << endl;
		cin >> wybor;

		switch (wybor)
		{
		case 1:
			Rezerwacje();
			break;

		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:

			//Zglos();

			break;

		case 7:

			break;

		case 8:

			break;

		case 9:
			active = false;
			break;

		}
	}

	system("pause");
	return 0;
}


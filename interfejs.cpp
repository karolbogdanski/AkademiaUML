#include <iostream>
#include <string>
#include"oplatyKlasy.h"
#include"rezerwacjeKlasy.h"

using namespace std;

void Rezerwacje();
void Powitanie();
void Menu();
pralka* wczytajPralki();
void wyswietlPralki(pralka *p);
int main()
{
	bool active = true;
	pralka *pralki = wczytajPralki();

	//wyswietlPralki(pralki);

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


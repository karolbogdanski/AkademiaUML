#include <iostream>
#include <string>
#include"oplatyKlasy.h"
#include"rezerwacjeKlasy.h"
#include "uzytkownik.h"
#include "czynnosciAdministracyjne.h"
#include "sprawyStudenckieKlasy.h"
#include <conio.h>
#pragma warning(disable:4996)


using namespace std;

void Aktualnoscii();
void Kontaktuj();
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
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 2:
			zaplacAkademik();
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 3:
			wpiszNocleg();
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 4:
			zamowRS();
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 5:
			wykwateruj();
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 6:
			Zglos();
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 7:
			cout << endl;
			Kontaktuj();
			cout << endl;
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;

		case 8:
			Aktualnoscii();
			system("cls");
			Menu();
			break;

		case 9:
			wybory();
			cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
			getch();
			system("cls");
			Menu();
			break;
		case 10:
			active = false;
			break;

		}
	}

	system("pause");
	return 0;
}


#include <iostream>
#include <string>
#include "oplatyKlasy.h"
#include "sprawyStudenckieKlasy.h"
#include "rezerwacjeKlasy.h"
#include "uzytkownik.h"

pralka* wczytajPralki()
{

	pralka* listaPralek[24]; //powiedzmy ¿e na 6 piêtrach po 4 pralki

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

boisko* wczytajBoiska()
{
	

	boisko *listaBoisk[4]; //4 boiska

	for (int i = 0; i < 4; i++)
	{
		boisko* b = new boisko;
		b->nr_boiska = i + 1;
		b->dostepnosc = true;
		listaBoisk[i] = b;

		cout << "boisko nr: " << listaBoisk[i]->nr_boiska;
		if (listaBoisk[i]->czy_Dostepny() == true)
		{
			cout << " jest dostepne." << endl;
		}
		else
			cout << " jest niedostepne" << endl;
	}

	return *listaBoisk;
}

suszarnia* wczytajSuszarnie()
{

	suszarnia* listaSuszarni[24]; //powiedzmy ¿e na 6 piêtrach po 4 pralki

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			suszarnia* s = new suszarnia;
			s->nr_suszarki = j + 1;
			s->pietro = i + 1;

			if ((i + j) % 4 == 0)
			{
				s->dostepnosc = false;
			}

			listaSuszarni[i + j] = s;

			cout << "suszarka nr: " << listaSuszarni[i + j]->nr_suszarki << " pietro: " << listaSuszarni[i + j]->pietro;
			if (listaSuszarni[i + j]->czy_Dostepny() == true)
			{
				cout << " jest dostepna." << endl;
			}
			else
				cout << " jest niedostepna" << endl;
		}
	}

	return *listaSuszarni;
}

swietlica* wczytajSwietlice()
{
	swietlica* S = new swietlica;
	if (S->czy_Dostepny())
	{
		cout << "Witaj bracie gejmerze. Wybierz se gierke: " << endl;
		cout << "1) Lula 3D" << endl;
		cout << "2) Anime Heaven" << endl;
		cout << "3) Anime Heaven 2: Electric Boogaloo" << endl;
		cout << "4)  Anime Haeven 6: Back to the Boogaloo" << endl;

		int wybor;
		cin >> wybor;

		S->dostepnosc = false;
	}
	else
	{
		cout << "Przykro mi bracie, inny gejmer teraz zajmuje swietlice :(" << endl;
	}
	return S;
}




void Rezerwacje()
{
	cout << "Co chcesz zarezerwowac?" << endl << endl;
	cout << "1) pralka" << endl;
	cout << "2) suszarka" << endl;
	cout << "3) boisko" << endl;
	cout << "4) swietlica" << endl;

	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1:
		cout << "Wybierz pralke: " << endl;
		cout << "aktualnie dostepne tylko pralki z dnia dzisiejszego" << endl;
		short numer, pietro;
		cout << "wpisz pietro(1-6): "; cin >> pietro;
		cout << "wpisz numer pralki (1-4): "; cin >> numer;
		cout << "Rezerwacja pralki " << numer << " pietro: " << pietro << "czeka na potwierdzenie administracji..." << endl;
		cout << "DOKONANO REZERWACJI Z SUKCESEM!" << endl;
		break;
	case 2:
		cout << "Wybierz suszarke: " << endl;
		wczytajSuszarnie();
		cout << "DOKONANO REZERWACJI Z SUKCESEM!" << endl;
		break;
	case 3:
		cout << "Wybierz boisko: " << endl;
		wczytajBoiska();
		cout << "DOKONANO REZERWACJI Z SUKCESEM!" << endl;
		break;
	case 4:
		cout << "Rezerwujesz swietlice." << endl;
		wczytajSwietlice();
		cout << "DOKONANO REZERWACJI Z SUKCESEM!" << endl;
		break;

	}
}
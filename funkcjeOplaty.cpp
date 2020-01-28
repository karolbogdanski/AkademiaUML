#include "oplatyKlasy.h"
#include"uzytkownik.h"
using namespace std;

void zaplacKarta()
{
	cout << "Placisz karta. Tranzakcja w toku..." << endl;
}


void zaplacPrzelewem()
{
	cout << "Placisz przelewem. Tranzakcja w toku..." << endl;
}

void wpiszNocleg()
{
	nocleg* n = new nocleg;
	cout << "Wpisz dane goscia." << endl;
	cout << "imie: ";
	cin >> n->imieGoscia;
	cout << "nazwisko: ";
	cin >> n->nazwiskoGoscia;

	cout << "Czy gosc jest czlonkiem twojej rodziny badz mieszkancem miasteczka? (T/N)" << endl;
	int odp;
	cin >> odp;

	if (odp)
		n->MieszkaniecMS = true;
	n->czyDarmowy();

	cout << "Sprawdzanie poprawnosci danych oraz ceny" << endl;
	cout << "Dane poprawne. Cena to: " << n->cena << endl;
	
	cout << "1) Karta \n 2) Gotowka \n 3) Anuluj" << endl;
	int wybor;
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		zaplacKarta();
		cout << "dryn dryn telefon do centrali..." << endl;
		cout << "Wypisano nocleg dla " << n->imieGoscia << " " << n->nazwiskoGoscia << endl;
		break;
	case 2:
		zaplacPrzelewem();
		cout << "dryn dryn telefon do centrali..." << endl;
		cout << "Wypisano nocleg dla " << n->imieGoscia << " " << n->nazwiskoGoscia << endl;
		break;
	case 3:
		cout << "transakcja anulowana" << endl;
		return;
	}
	
}

void zaplacAkademik()
{
	student* s = new student;
	cout << "Twoje saldo wynosi: " << s->sprawdzanie_salda();

	cout << "1) Karta \n 2) Gotowka \n 3) Anuluj" << endl;
	int wybor;
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		zaplacKarta();
		cout << "dryn dryn telefon do centrali..." << endl;
		cout << "Zaplacono" << endl;
		break;
	case 2:
		zaplacPrzelewem();
		cout << "dryn dryn telefon do centrali..." << endl;
		cout << "Zaplacono" << endl;
		break;
	case 3:
		cout << "transakcja anulowana" << endl;
		return;
	}
}

void zamowRS()
{
	magazyn* m = new magazyn;
	cout << "Witaj w akademikowym sklepiku!" << endl;
	cout << "Wybierz produkt: " << endl;
	cout<< "1) " << m->nazwaProduktu[0];
	cout << " dostepna ilosc: " << m->stanMagazynu[0] << endl;
	cout << "2) " << m->nazwaProduktu[1];
	cout << " dostepna ilosc: " << m->stanMagazynu[1] << endl;
	cout << "3) " << m->nazwaProduktu[2];
	cout << " dostepna ilosc: " << m->stanMagazynu[2] << endl;
	cout << "4) " << m->nazwaProduktu[3];
	cout << " dostepna ilosc: " << m->stanMagazynu[3] << endl;
	
	int wybor;
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "wybrales: " << m->nazwaProduktu[0] << endl;
		cout << "Dobry wybor!" << endl;
		break;
	case 2:
		cout << "wybrales: " << m->nazwaProduktu[0] << endl;
		cout << "Dobry wybor!" << endl;
		break;
	case 3:
		cout << "wybrales: " << m->nazwaProduktu[0] << endl;
		cout << "Dobry wybor!" << endl;
		break;
	case 4:
		cout << "wybrales: " << m->nazwaProduktu[0] << endl;
		cout << "Dobry wybor!" << endl;
		break;
	}

	cout << "1) Karta \n 2) Gotowka \n 3) Anuluj" << endl;
	int wybor1;
	cin >> wybor1;

	switch (wybor1)
	{
	case 1:
		zaplacKarta();
		cout << "dryn dryn telefon do centrali..." << endl;
		cout << "Zaplacono" << endl;
		break;
	case 2:
		zaplacPrzelewem();
		cout << "dryn dryn telefon do centrali..." << endl;
		cout << "Zaplacono" << endl;
		break;
	case 3:
		cout << "transakcja anulowana" << endl;
		return;
	}
}

void wykwateruj()
{
	cout << "Prace nad funkcja trwaja!" << endl;
}

void wybory()
{
	cout << "WYBORY JUZ SIE ODBYLY" << endl;
	cout << "Aktualny stan rady mieszkancow: " << endl;
	cout << "Karol Bengal Bogdanski" << endl;
	cout << "Aleksander Hada Hady" << endl;
	cout << "Ana Anna Grzesiak" << endl;

}
#include "czynnosciAdministracyjne.h"

void Zglos() {
	cout << "Co chcesz zglosic?" << endl << endl;
	cout << "1) skarga" << endl;
	cout << "2) usterka" << endl;

	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1: {
		Skarga* wP = new Skarga;
		cout << "Wypelnij formularz " << endl;
		ofstream f1("skargi.txt", ios::app);
		cout << "jaka tresc skargi?: ";
		cin >> wP->tresc;
		f1 << wP->tresc << endl;


		break;
	}
	case 2: {
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
	}
}

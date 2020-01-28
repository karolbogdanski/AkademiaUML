#include "sprawyStudenckieKlasy.h"
#include <ctime>
#include <conio.h>
#pragma warning(disable:4996)

void Kontaktuj() {
	cout << "Co chcesz zrobic?" << endl << endl;
	cout << "1) wyslij wiadomosc" << endl;
	cout << "2) przeczytaj odpowiedz" << endl;

	int wybor;
	cin >> wybor;
	switch (wybor)
	{
	case 1: {
		Kontakt* WEE = new Kontakt;
		cout << "Wypelnij formularz " << endl;
		ofstream f1("kontaktzrada.txt", ios::app);
		cout << "jaka tresc skargi?: ";
		cin >> WEE->wiadomosc;
		f1 << WEE->wiadomosc << endl;


		break;
	}
	case 2: {
		
		
		string line;
		ifstream myfile("odpowiedzrady.txt");
		if (myfile.is_open())
		{
			while (getline(myfile, line))
			{
				cout << line << '\n';
			}
			myfile.close();
		}
		


		break;


	}
	}
}


void Aktualnoscii() {



	time_t tt;

	struct tm* ti;
	time(&tt);
	ti = localtime(&tt);

	cout << "Dzisiejszy dzien, data oraz czas to = "
		<< asctime(ti) << endl << endl << endl;


	string line;
	ifstream myfile("aktualnosci.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	
	cout << endl << "Kliknij cokolwiek aby wyjsc." << endl;
	getch();


}

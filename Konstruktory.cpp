#include <iostream>
#include <string>
#include "oplatyKlasy.h"
#include "sprawyStudenckieKlasy.h"
#include "rezerwacjeKlasy.h"

using namespace std;

uzytkownik:: uzytkownik()
{
	imie = "example";
	nazwisko = "example";
	email = "example@example.com";
	logged = true;
}

student::student()
{
	nr_albumu = 123456;
	nr_pokoju = 1411;
	saldo = 123,34;
	ilosc_wykupionych_noclegow = 0;
	numer_konta = 1234567892137123;
}

administracja:: administracja()
{
	godziny_pracy = "8:00 - 16:00";
}

nocleg::nocleg()
{
	idUslugi = 1;
	nazwaUslugi = "Nocleg";
	cena = 10;
	opis = "Przenocuj swego goœcia!";
	limit = 6;

	imieGoscia = "Gosciu";
	nazwiskoGoscia = "Gosciowski";
	idNoclegu = 0;
	data = "28.01.2020";
	czas = "20:00";
	MieszkaniecMS = false;
	rodzina = false;
}

room_service::room_service()
{
	nazwaProduktu = "produkt przykladowy";
	rodzajProdktu = "piwsko";
	zawAlkoholu = true;
}

dodatkowa_doba::dodatkowa_doba()
{
	ilosc = 1;
}

platnosc::platnosc()
{
	id_platnosci = 1;
	sposob_platnosci = "karta";
	kwota = 23, 71;
}
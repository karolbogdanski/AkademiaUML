#pragma once
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>



using namespace std;

class zgloszenie {
protected:
	int id_zgloszenia;

public:
	bool sprawdzStatus();
	void potwierdz();
	void anuluj();
};


class Usterka :zgloszenie {
protected:
	
	
public:
	string typ;
	string opis_usterki;
	friend Usterka* wypelnijUsterka();
}zgloszenieUsterka;

class Skarga :zgloszenie {
protected:
	string tresc;
public:
	friend Skarga* wypelnijSkarga();
};
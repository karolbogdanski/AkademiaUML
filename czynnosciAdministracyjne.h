#pragma once
#include <iostream>
#include <string>



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

public:
	string typ;
	string opis_usterki;
	friend Usterka* wypelnijUsterka();
};

class Skarga :zgloszenie {
protected:
	string tresc;
public:
	friend Skarga* wypelnijSkarga();
};
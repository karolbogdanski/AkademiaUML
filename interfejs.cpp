#include <iostream>
#include <string>

using namespace std;


int main()
{
	bool active = true;

	cout << "WITAJ W PANELU AKADEMIKA!" << endl;
	cout << "Wybierz interesuj�c� ci� funkcj� z poni�szych: " << endl << endl;

	cout << "1) Rezerwacje " << endl;
	cout << "2) Op�aty" << endl;
	cout << "3) Go�cie" << endl;
	cout << "4) Room Service" << endl;
	cout << "5) Wykwaterowanie" << endl;
	cout << "6) Zg�o� skarg�" << endl;
	cout << "7) Kontakt z Rad� Mieszka�c�w" << endl;
	cout << "8) Aktualno�ci" << endl;
	cout << "9) Wyj�cie" << endl;

	int wybor;

	while (active)
	{
		cin >> wybor;

		switch (wybor)
		{
		case 1:

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
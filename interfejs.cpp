#include <iostream>
#include <string>

using namespace std;


int main()
{
	bool active = true;

	cout << "WITAJ W PANELU AKADEMIKA!" << endl;
	cout << "Wybierz interesuj¹c¹ ciê funkcjê z poni¿szych: " << endl << endl;

	cout << "1) Rezerwacje " << endl;
	cout << "2) Op³aty" << endl;
	cout << "3) Goœcie" << endl;
	cout << "4) Room Service" << endl;
	cout << "5) Wykwaterowanie" << endl;
	cout << "6) Zg³oœ skargê" << endl;
	cout << "7) Kontakt z Rad¹ Mieszkañców" << endl;
	cout << "8) Aktualnoœci" << endl;
	cout << "9) Wyjœcie" << endl;

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
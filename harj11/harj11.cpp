// Valtteri Ahonen
// Harjoitus 11
// 1.10.2013

#include <iostream>
using namespace std;

int main()
{
	int luku1, luku2;
	cout << "Anna kaksi kokonaislukua v„lily”nnill„ erotettuna." << endl;
	cin >> luku1 >> luku2;

	int valinta;
	bool lippu; // valikon toistamista varten

	cout << endl << "VALIKKO:" << endl;
	cout << "1: Summa" << endl;
	cout << "2: Erotus" << endl;
	cout << "3: Tulo" << endl;
	cout << "4: Osam„„r„" << endl;
	cout << "5: Jakoj„„nn”s" << endl;
	cout << "6: Syötä uusi luku" << endl;

	do{

		lippu = false; // jos valinta on validi, niin false-arvolla valinta ei toistu

		cout << endl;
		cin >> ws >> valinta;
		cout << endl;

		switch(valinta)
		{
		case 1: cout << luku1 + luku2;
			break;
		case 2: cout << luku1 - luku2;
			break;
		case 3: cout << luku1 * luku2;
			break;
		case 4: cout << luku1 / luku2;
			break;
		case 5: cout << luku1 % luku2;
			break;
		case 6: cout << "Anna uudet luvut." << endl;
			cin >> luku1 >> luku2;
			lippu = true; // true-arvolla valinta (eli valikko) toistetaan
			cout << endl << "VALIKKO:" << endl;
			cout << "1: Summa" << endl;
			cout << "2: Erotus" << endl;
			cout << "3: Tulo" << endl;
			cout << "4: Osam„„r„" << endl;
			cout << "5: Jakoj„„nn”s" << endl;
			cout << "6: Syötä uusi luku" << endl;
			break;
		default: cout << "Tee uusi valinta n00b."; 
			lippu = true; // true-arvolla valinta toistetaan
			break;
		}

	}while(lippu); // valintaa toistetaan, kunnes valinta on 1-6

	cout << endl << endl;
}
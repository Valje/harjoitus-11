// Valtteri Ahonen
// Harjoitus 11
// 1.10.2013
// Versio 2.0, korjattu nollalla jakaminen

#include <iostream>
using namespace std;

int main()
{
	int luku1, luku2;
	cout << "Anna kaksi kokonaislukua vÑlilyînnillÑ erotettuna." << endl;
	cin >> luku1 >> luku2;

	int valinta;
	bool lippu = true; // valikon toistamista varten (toistetaan kunnes saa arvon false)

	do{

		if(luku2 == 0)			// T‰m‰ valikko n‰ytet‰‰n, jos toiseksi luvuksi on valittu nolla
		{
			cout << endl << endl << "VALIKKO:" << endl;
			cout << "0: Lopetus" << endl;
			cout << "1: Summa" << endl;
			cout << "2: Erotus" << endl;
			cout << "3: Tulo" << endl;
			cout << "4: SyîtÑ uusi luku" << endl;
		}
		else				//T‰m‰ valikko n‰ytet‰‰n, mik‰li toinen luku EI ole nolla
		{
			cout << endl << endl << "VALIKKO:" << endl;
			cout << "0: Lopetus" << endl;
			cout << "1: Summa" << endl;
			cout << "2: Erotus" << endl;
			cout << "3: Tulo" << endl;
			cout << "4: OsamÑÑrÑ" << endl;
			cout << "5: JakojÑÑnnîs" << endl;
			cout << "6: SyîtÑ uusi luku" << endl;		
		}

		cin >> ws >> valinta; 
		cout << endl;

		if(luku2) // Alla olevat vaihtoehdot hyv‰ksyt‰‰, mik‰li toinen luku ei ole nolla
		{
			switch(valinta)
			{
			case 0: 
				lippu = false; // kun lippu on false, poistutaan loopista
				break;
			case 1: cout << luku1 + luku2;
				break;
			case 2: cout << luku1 - luku2;
				break;
			case 3: cout << luku1 * luku2;
				break;
			case 4: cout << (float)luku1 / (float)luku2;
					break;
			case 5: cout << luku1 % luku2;
					break;
			case 6: cout << "Anna uudet luvut." << endl;
				cin >> luku1 >> luku2;
				break;
			default: cout << "Tee uusi valinta."; 
				break;
			}
		}
		else // Alla olevat vaihtoehdot hyv‰ksyt‰‰n, JOS toinen luku ON nolla
		{
			switch(valinta)
			{
			case 0: 
				lippu = false; // kun lippu on false, poistutaan loopista
				break;
			case 1: cout << luku1 + luku2;
				break;
			case 2: cout << luku1 - luku2;
				break;
			case 3: cout << luku1 * luku2;
				break;
			case 4: cout << "Anna uudet luvut." << endl;
				cin >> luku1 >> luku2;
				break;
			default: cout << "Tee uusi valinta."; 
				break;
			}
		}

		}while(lippu); // valikkoa toistetaan, kunnes lippu on false, eli valinta on 0

		cout << endl;
	}
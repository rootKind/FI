#include <iostream>
using namespace std;

int main()
{
	const int lunghezza_max = 10;
	typedef int vettore[lunghezza_max];

	vettore prova;
	int i = 0, j = 0, c = 0;
	int valore = 0;
	int lunghezza = 1;

	cout << "Inserisci lunghezza vettore (MAX 10): ";
	do {
		cin >> lunghezza;
		if (lunghezza < 1 || lunghezza > 10) cout << "ERRORE. Reinserisci la lunghezza: ";
	} while (lunghezza < 1 || lunghezza > 10);

	for (i = 0; i < lunghezza; i++) {
		cout << "Inserisci valore della posizione " << i << " :";
		cin >> prova[i];
	}

	cout << "Inserisci valore da eliminare: ";
	cin >> valore;

	
	cout << endl << "PRE" << endl;
	for (i = 0; i < lunghezza; i++) {
		cout << prova[i] << " ";
	}

	
	for (i = 0; i < lunghezza; i++) {
		if (prova[i] == valore) {
			for (j = i; j < lunghezza; j++) {
				prova[j] = prova[j + 1];
			}
		c++;
		i--;
		}
	}
	

	cout << endl << "POST" << endl;
	for (i = 0; i < lunghezza - c; i++) {
		cout << prova[i] << " ";
	}
}


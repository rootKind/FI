#include <iostream>

using namespace std;

int main()
{
	//dichiarazioni

	int matrice[10][10];
	int righe = 0;
	int colonne = 0;
	int i = 0, j = 0;
	bool a = true;
	int c = 0;
	int riga_eliminabile = -1;
	int colonna_eliminabile = -1;

	// input righe
	do {
		cout << "Inserisci righe matrice: ";
		cin >> righe;
		if (righe > 10 || righe <= 0) {
			cout << "Errore, rispetta i canoni. \n";
		}
	} while (righe > 10 || righe <= 0);

	//input colonne
	do {
		cout << "Inserisci colonne matrice: ";
		cin >> colonne;
		if (colonne > 10 || colonne <= 0) {
			cout << "Errore, rispetta i canoni. \n";
		}
	} while (colonne > 10 || colonne <= 0);

	//input valori matrice
	for (i = 0; i < righe; i++) {
		for (j = 0; j < colonne; j++) {
			cout << "Inserisci valore matrice: ";
			cin >> matrice[i][j];
		}
	}
	cout << endl << "La matrice e' " << endl;
	
	//stampa matrice
	for (i = 0; i < righe; i++) {
		for (j = 0; j < colonne; j++) {
			cout << matrice[i][j];
		}
		cout << endl;
	}
	
	//scansione valori uguali (righe)
	for (i = 0; i < righe; i++) {
		for (j = 0; j < colonne - 1; j++) {
			if (matrice[i][j] == matrice[i][j + 1]) {
				c++;
			}
			else {
				c = 0;
			}
			if (c == righe - 1) {
				riga_eliminabile = i;
				c = 0;
			}
		}
	}

	c = 0;

	//scansione valori uguali (colonne)
	for (j = 0; j < colonne; j++) {
		for (i = 0; i < righe - 1; i++) {
			if (matrice[i][j] == matrice[i+1][j]) {
				c++;
			}
			else {
				c = 0;
			}
			if (c == colonne - 1) {
				colonna_eliminabile = j;
				c = 0;
			}
		}
	}
	
	//eliminazione riga e eventuale stampa
	if (riga_eliminabile != -1) {
		for (i = riga_eliminabile; i < righe; i++) {
			for (j = 0; j < colonne; j++) {
				matrice[i][j] = matrice[i + 1][j];
			}
		}
		cout << endl << "La matrice con riga eliminata e' " << endl;
		for (i = 0; i < righe-1; i++) {
			for (j = 0; j < colonne; j++) {
				cout << matrice[i][j];
			}
			cout << endl;
		}
	}
	
	//eliminazione colonna e eventuale stampa
	if (colonna_eliminabile != -1) {
		for (j = colonna_eliminabile; j < colonne; j++) {
			for (i = 0; i < righe; i++) {
				matrice[i][j] = matrice[i][j+1];
			}
		}
		cout << endl << "La matrice con colonna eliminata e' " << endl;
		for (i = 0; i < righe; i++) {
			for (j = 0; j < colonne-1; j++) {
				cout << matrice[i][j];
			}
			cout << endl;
		}
	}
}
// Matrici 12.11.2019.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

using namespace std;

int main()
{
	//dichiarazioni
	
	int matrice[10][10];
	int righe = 0, colonne = 0;
	int i = 0, j = 0;
	float media = 0.0;
	int somma = 0;
	int minimi[5];
	int minimo = 0;
	
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

	//stampa matrice
	for (i = 0; i < righe; i++) {
		for (j = 0; j < colonne; j++) {
			cout << matrice[i][j];
		}
		cout << endl;
	}

	//calcolo somma
	for (i = 0; i < righe; i++) {
		for (j = 0; j < colonne; j++) {
			somma = somma + matrice[i][j];
		}
	}

	//calcolo media
	media = float(somma) / (righe * colonne);
	cout << "La media dei valori della matrice e': " << media << endl;

	cout << "I valori minimi di ogni riga sono: ";
	for (i = 0; i < righe; i++) {
		for (j = 0; j < colonne; j++) {
			minimo = matrice[i][0];
			if (matrice[i][j] <= minimo) minimo = matrice[i][j];
		}
		minimi[i] = minimo;
		cout << minimi[i] << " ";
	}

}

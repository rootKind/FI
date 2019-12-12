#include "lib.h"

void leggi_partita(partite esercizio,int& riemp) {
	stringa nomefile;
	ifstream file;

	cout << "Inserisci nome file: ";
	cin >> nomefile;
	file.open(nomefile);

	while (!file) {
		cout << "ERRORE. Reinserisci nome file: ";
		cin >> nomefile;
		file.open(nomefile);
	}

	while (!file.eof()) {
		file >> esercizio[riemp].casa;
		file >> esercizio[riemp].ospiti;
		file >> esercizio[riemp].goal_casa;
		file >> esercizio[riemp].goal_ospiti;
		riemp++;
	}

	file.close();


}
int calcola_punti(const int goal_casa,const int goal_ospiti) {
	int punti = 0;
	if (goal_casa > goal_ospiti) {
		punti = 3;
	}
	else if (goal_casa == goal_ospiti) {
		punti = 1;
	}
	else {
		punti = 0;
	}
	return punti;
}
int calcola_punteggio(const partite esercizio,const int riemp,const stringa nomesquadra) {
	int i = 0;
	int punti = 0;
	for (i = 0; i < riemp; i++) {
		if (strcmp(esercizio[i].casa, nomesquadra)==0) {
			punti=punti + calcola_punti(esercizio[i].goal_casa, esercizio[i].goal_ospiti);
		}
		else if (strcmp(esercizio[i].ospiti, nomesquadra)==0) {
			punti=punti + calcola_punti(esercizio[i].goal_ospiti, esercizio[i].goal_casa);
		}
	}
	return punti;
}
void stampa_risultati(const partite esercizio, const int riemp, const stringa nomesquadra, const int punteggio) {
	int i=0;
	for (i = 0; i < riemp; i++) {
			cout << esercizio[i].casa << " " << esercizio[i].ospiti << " " << esercizio[i].goal_casa << "-" << esercizio[i].goal_ospiti << endl;
	 }
	cout << "Il punteggio della squadra " << nomesquadra << " e': " << punteggio;
}
#include "lib.h"

void leggi_dati(temperature prova,int &n) {
	stringa nomefile;
	int i = 0;

	cout << "Inserisci nome file: ";
	cin >> nomefile;

	ifstream file;
	file.open(nomefile);

	while (!file) {
		cout << "ERRORE. Reinserisci nome file: ";
		cin >> nomefile;
		file.open(nomefile);
	}

	while (!file.eof()) {
		file >> prova[i].citta;
		file >> prova[i].mese;
		file >> prova[i].gradi;
		i++;
	}
	n = i;
	file.close();
}
float calcola_media_temp(const temperature prova,const int lunghezza, stringa nome) {
	float temperatura = 0.0;
	int i = 0;
	int j = 0;
	for (i = 0; i < lunghezza; i++) {
		if (strcmp(prova[i].citta,nome)==0) {
			j++;
			temperatura = temperatura + prova[i].gradi;
		}
	}
	temperatura = temperatura / j;
	return temperatura;
}
void calcola_temp_maggiori(const temperature prova,const  int lunghezza, int temp, vettore temp_magg, int &j) {
	int i = 0;
	for (i = 0; i < lunghezza; i++) {
		if (prova[i].gradi > temp) {
			temp_magg[j] = prova[j].gradi;
			j++;
		}
	}
}
void stampa_vett(const vettore temp_magg,const int riemp) {
	int i = 0;
	while (i<riemp) {
		cout << temp_magg[i] << " ";
		i++;
	}
}
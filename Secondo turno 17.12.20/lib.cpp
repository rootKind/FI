#include "lib.h"
void leggi_mat(matrice mat, const stringa nomefile,const int rig,const int col) {
	int i = 0, j = 0;
	ifstream file;

	file.open(nomefile);
	if (!file) {
		cout << "ERRORE. File non esistente.";
		exit(1);
	}
    
	for (i = 0; i < rig; i++) {
		for (j = 0; j < col; j++) {
			file >> mat[i][j];
		}
	}
	file.close();
}

void stampa_mat(const matrice mat, const int rig, const int col) {
	int i = 0, j = 0;
	cout << "La matrice e': " << endl;
	for (i = 0; i < rig; i++) {
		for (j = 0; j < col; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

int somma_vet(const vettore vet,const int riemp) {
	int i = 0;
	int somma = 0;
	for (i = 0; i < riemp; i++) {
		somma = somma + vet[i];
	}
	return somma;
}

void crea_vett_bool(const int rig, const int col, const matrice mat, booleani vet_bool) {
	int i = 0, j = 0;
	int somma = 0;
	for (i = 0; i < rig; i++) {
		for (j = 0; j < col; j++) {
			somma=somma_vet(mat[i], col);
		}
		if ((somma % 2) == 0) {
			vet_bool[i] = true;
		}
		else {
			vet_bool[i] = false;
		}
	}
}

void salva_ris(const booleani vet_bool, const int rig,const stringa nomefile) {
	ofstream file;
	file.open(nomefile);
	if (!file) {
		cout << "ERRORE. File non esistente.";
		exit(1);
	}
	int i = 0;
	for (i = 0; i < rig; i++) {
		if (vet_bool[i]) {
			file << "Pari" << endl;
		}else {
			file << "Dispari" << endl;
		}
	}
}
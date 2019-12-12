#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

const int righe = 10;
const int colonne = 10;

typedef float vettore[righe];
typedef vettore matrice[colonne];
typedef char stringa[righe];

struct struttura {
	float contenuto;
	int riga;
	int colonna;
};

void leggi_mat(matrice,int&,int&);
bool med_pos_mat(const matrice, const int, const int, float&);
struttura calc_mag(const matrice,const int r, const int c, const float);


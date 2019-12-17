#include <iostream>
#include <fstream>

using namespace std;

const int max = 15;
typedef int vettore[max];
typedef vettore matrice[max];
typedef char stringa[max];
typedef bool booleani[max];


void leggi_mat(matrice,const stringa,const int,const int);
void stampa_mat(const matrice, const int, const int);
int somma_vet(const vettore, const int);
void crea_vett_bool(const int, const int, const matrice, booleani);
void salva_ris(const booleani, const int, const stringa);
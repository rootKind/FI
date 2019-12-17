//INCLUSIONE LIBRERIE UTILI + NAMESPACE
#include <iostream>
#include <fstream>
using namespace std;

//COSTANTI E TYPEDEF
const int lunghezza_max=20;
typedef char stringa[lunghezza_max];
typedef int vettore[lunghezza_max];
typedef vettore matrice[lunghezza_max];
typedef bool vett_bool[lunghezza_max];

//PROTOTIPI
void leggi_mat(matrice,const stringa,int&,int&);
void stampa_mat(const matrice,const int,const int);
float media_vet(const vettore,const int);
void crea_vet_bool(const int, const int, const matrice, vett_bool);
void stampa_ris(const vett_bool,const int);

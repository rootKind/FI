#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;
const int lunghezza_max = 30;
typedef int vettore[lunghezza_max];
typedef char stringa[lunghezza_max];

struct struttura {
	stringa citta;
	stringa mese;
	int gradi;
};

typedef struttura temperature[lunghezza_max];

void leggi_dati(temperature,int&);
float calcola_media_temp(const temperature,const int, stringa);
void calcola_temp_maggiori(const temperature,const int,int,vettore,int &);
void stampa_vett(const vettore,const int);

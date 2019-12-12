#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

const int lung_max = 30;
typedef char stringa[lung_max];

struct partita {
	stringa casa;
	stringa ospiti;
	int goal_casa;
	int goal_ospiti;
};

typedef partita partite[lung_max];

void leggi_partita(partite, int&);
int calcola_punti(const int,const int);
int calcola_punteggio(const partite, const int, const stringa);
void stampa_risultati(const partite, const int, const stringa, const int);


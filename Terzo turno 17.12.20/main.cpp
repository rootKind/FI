#include "lib.h"

int main(){
	//DICHIARAZIONI
	stringa nome;
	matrice dati;
	vett_bool check_sign;
	int righe=0,colonne=0;
	
	//INPUT NOME FILE
	cout << "Inserisci nome file di input: ";
	cin >> nome;
    
    //CHIAMATE FUNZIONI
	leggi_mat(dati,nome,righe,colonne);
    stampa_mat(dati,righe,colonne);
    crea_vet_bool(righe,colonne,dati,check_sign);
    stampa_ris(check_sign,righe);
    
}

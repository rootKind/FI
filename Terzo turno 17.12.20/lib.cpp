#include "lib.h"
void leggi_mat(matrice mat,const stringa nomefile,int& rig,int& col){
	
	//DICHIARAZIONI
	int i=0,j=0;
	
	//APERTURA FILE E CONTROLLO NOME
	ifstream file;
	file.open(nomefile);
	if(!file){
		cout << "ERRORE. File non esistente.";
		exit(1);
	}
	
	//INPUT DA FILE
	file >> col;
	file >> rig;
	for(i=0;i<rig;i++){
		for(j=0;j<col;j++){
			file >>mat[i][j];
		}
	}
	
	//CHIUSURA FILE
	file.close();
}

void stampa_mat(const matrice mat,const int rig,const int col){
	
	//DICHIARAZIONI
	int i=0,j=0;
	
	//STAMPA MATRICE
	for(i=0;i<rig;i++){
		for(j=0;j<col;j++){
			cout << mat[i][j] << " ";
		}
	    cout << endl;
	}
}

float media_vet(const vettore vet,const int riemp){
	
	//DICHIARAZIONI
	int i=0,somma=0,media=0;
	
	//CALCOLO SOMMA TOTALE E MEDIA FINALE
	for(i=0;i<riemp;i++){
		somma = somma+vet[i];
    }
	media=float(somma/riemp);
	
	return media;
}

void crea_vet_bool(const int rig,const int col, const matrice mat, vett_bool vet){
	
	//DICHIARAZIONI
	int i=0;
	
	//COSTRUZIONE VETTORE BOOLEANI IN BASE ALLA CONDIZIONE DELLA TRACCIA
	for(i=0;i<rig;i++){
		if( (media_vet(mat[i],rig)>0 && (mat[i][0]) > 0){
			vet[i]=true;
		}else{
			vet[i]=false;
		}
	}
}

void stampa_ris(const vett_bool vet,const int riemp){
	
	//DICHAIRAZIONI
	int i=0;
	
	//STAMPA FRASE IN BASE AL VETTORE BOOLEANI
	cout << endl << "Concordanza " << endl;
	for(i=0;i<riemp;i++){
		if(vet[i]){
			cout << "Stesso segno "<< endl;
		}else{
			cout << "Segno diverso"<< endl;
		}
	}
}

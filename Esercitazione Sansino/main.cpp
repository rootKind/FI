#include "lib.h"
/* 
- leggi_mat, che riceve in ingresso il nome di un file, e legge da quel file i riempimenti di riga e
colonna ed i valori di una matrice di numeri reali;

- med_pos_mat, che riceve in ingresso una matrice M di numeri reali e 
restituisce come parametro di di uscita la media dei soli elementi positivi di M.
La funzione dovr‡ anche restituire come valore di ritorno un valore booleano, 
che deve essere pari a false qualora non vi siano in M elementi strettamente maggiori di 0 (zero), e pari a true altrimenti;
- calc_mag, che riceve in ingresso una matrice M ed il valore med_pos pari alla media dei soli valori positivi di M, 
e restituisce come valore di ritorno una struttura contenente tre campi: 
un campo reale (mag) che contiene il valore del primo elemento della matrice maggiore della media degli elementi positivi della matrice stessa
e due campi di tipo intero (rig e col) che contengono l'indice di riga e di colonna di tale valore;

e si scriva un programma che, utilizzando queste funzioni, legga M da file, e, solo nel caso in cui vi siano elementi positivi in M, 
calcoli il valore del primo elemento di M maggiore della media dei soli valori positivi e lo stampi insieme agli indici di riga e di colonna.
Nel caso in cui M non contenga valori positivi si stampi un opportuno messaggio di errore.
Il programma dovra' essere suddiviso in moduli, uno contenente prototipi e dichiarazioni, uno contenente le funzioni leggi_mat,  med_pos_mat, 
calc_mag ed un terzo contenente il main.
---------------------------------------------------------------------------------------------------------------------------
Esempi
INPUT:
Mat.txt
3 4 
  2.5 -17.1 19.3 22.5  
 -3.2  20.0  7.4 -9.4  
 -2.8 -23.2 32.7 40.1  
OUTPUT: 
Valore: 22.5
Riga: 0
Colonna: 3

INPUT:
Mat.txt
3 4 
 -2.5 -17.1 -19.3 -22.5  
 -3.2 -20.0  -7.4  -9.4  
 -2.8 -23.2 -32.7 -40.1  
OUTPUT: 
La matrice M non contiene valori positivi*/

int main() {
    matrice esercizio;
    int righe = 0, colonne = 0;
    float media = 0.0;
    bool stato = false;
    struttura valori;
    
    leggi_mat(esercizio,righe,colonne);
    stato = med_pos_mat(esercizio, righe, colonne, media);
    if (stato == false) {
        cout << "ERRORE. Non ci sono valori positivi di cui calcolare la media.";
        exit(1);
    }
    valori = calc_mag(esercizio, righe, colonne, media);
  
    cout << endl << "Il valore e' " << valori.contenuto << " alla riga: " << valori.riga+1 << " e alla colonna: " << valori.colonna+1;
    
    
}
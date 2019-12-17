

#include "lib.h"
int main() {
    int righe = 0, colonne = 0;
    matrice dati;
    stringa nome, nome2;
    booleani check_odd;

    cout << "Inserisci nome file input: ";
    cin >> nome;
    
    cout << "Inserisci nome file output: ";
    cin >> nome2;

    cout << "Inserisci righe (max 5): ";
    cin >> righe;
    while (righe < 1 || righe>5) {
        cout << "Valore non valido, reinserisci: ";
        cin >> righe;
    }

    cout << "Inserisci colonne (max 4): ";
    cin >> colonne;
    while (colonne < 1 || colonne>4) {
        cout << "Valore non valido, reinserisci: ";
        cin >> colonne;
    }

    leggi_mat(dati,nome,righe, colonne);
    stampa_mat(dati, righe, colonne);
    crea_vett_bool(righe, colonne, dati, check_odd);
    salva_ris(check_odd, righe, nome2);
}
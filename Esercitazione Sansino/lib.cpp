#include "lib.h"

void leggi_mat(matrice valori,int& r, int& c) {
    int i = 0, j = 0;
    stringa nome;
    ifstream file;
    cout << "Inserisci nome file: ";
    cin >> nome;
    file.open(nome);

    while (!file) {
        cout << "ERRORE. Reinserisci nome file: ";
        cin >> nome;
        file.open(nome);
    }

    file >> r;
    file >> c;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            file >> valori[i][j];
        }
    }
}
bool med_pos_mat(const matrice valori, const int r, const int c, float& media) {
    bool positivo = false;
    int i = 0, j = 0;
    int riemp_pos = 0;
    for (i = 0; i < righe; i++) {
        for (j = 0; j < colonne; j++) {
            if (valori[i][j]> 0){
                media = (media + valori[i][j]);
                riemp_pos++;
            }
        }
    }
    media = media / riemp_pos;
    if (media != 0.0) { positivo = true; }
    return positivo;
}
struttura calc_mag(const matrice valori,const int r, const int c, const float media) {
    int i = 0, j = 0;
    struttura prova;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (valori[i][j] > media) {
                prova.contenuto = valori[i][j];
                prova.riga = i;
                prova.colonna = j;
                return prova;
            }
        }
    }
}
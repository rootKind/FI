#include <iostream>

using namespace std;

struct coordinate {
    int x1;
    int x2;
    int y1;
    int y2;
};

struct area_max {
    int area;
    int indice;
};

void leggi_rettangoli(coordinate[]);
area_max max_area(coordinate[]);
void stampa_ris(area_max);

int main()
{
    coordinate rettangoli[3];
    area_max rettangolo_max;
    rettangolo_max.area = 0;
    rettangolo_max.indice = 0;

    leggi_rettangoli(rettangoli);
    rettangolo_max = max_area(rettangoli);
    stampa_ris(rettangolo_max);

}

void leggi_rettangoli(coordinate vet[]) {
    int i = 0;
    for (i = 0; i < 3; i++) {
        cout << "Inserisci coordinata x1 del rettangolo " << i + 1 << ": ";
        cin >> vet[i].x1;
        cout << "Inserisci coordinata y1 del rettangolo " << i + 1 << ": ";
        cin >> vet[i].y1;
        cout << "Inserisci coordinata x2 del rettangolo " << i + 1 << ": ";
        cin >> vet[i].x2;
        cout << "Inserisci coordinata y2 del rettangolo " << i + 1 << ": ";
        cin >> vet[i].y2;
    }
}

area_max max_area(coordinate vet[]) {
    int i = 0;
    area_max max_area;
    max_area.area = 0;
    max_area.indice = 0;
    for (i = 0; i < 3; i++) {
        if (abs(vet[i].x2 - vet[i].x1) * abs(vet[i].y2 - vet[i].y1) > max_area.area) {
            max_area.area = (vet[i].x2 - vet[i].x1) * (vet[i].y2 - vet[i].y1);
            max_area.indice = i;
        }
    }
    return max_area;
}

void stampa_ris(area_max risultato) {
    cout << "L'area del rettangolo maggiore misura: " << risultato.area;
    cout << endl << "Il rettangolo con area maggiore e' il rettangolo numero: " << risultato.indice + 1 << endl;
}

/* Sia dato il file di testo dati.txt che contiene (come da esempio) per ogni riga due stringhe (che rappresentano il nome di una città ed un mese) 
ed un numero intero (che rappresenta la temperatura massima registrata in quella città durante quel mese).
Si progettino quattro funzioni:

- calc_temp_maggiori che riceve in ingresso un vettore di strutture (vett_temperature), 
il suo riempimento (riemp) ed una temperatura (temp) e restituisce come parametro di uscita un vettore contenente tutte le temperature maggiori di temp;
- stampa_vett che stampa a video un vettore di interi;
e si scriva un programma che, utilizzando la funzioni sopra descritte, 
legga dal file dati.txt le temperature registrate in varie città in diversi mesi dell'anno e da tastiera il nome di una città,
calcoli la media delle temperature rilevate nei vari mesi per quella città, ottenga il vettore delle temperature maggiori di tale media, 
e stampi a video con un opportuno messaggio (si veda l'esempio) la media calcolata e gli elementi del vettore che contiene i valori superiori alla media.*/

#include "lib.h"

int main() {
	temperature esercizio;
	int riemp = 0;
	stringa citta;
	float media = 0.0;
	int gradi = 0;
	vettore temp;
	int lunghezza = 0;

	leggi_dati(esercizio,riemp);
	cout << "Inserisci nome citta': ";
	cin >> citta;
	media = calcola_media_temp(esercizio, riemp, citta);
	cout << endl << "La media delle temperature della citta' di " << citta << " e': " << media << endl;
	cout << "Inserisci una temperatura: ";
	cin >> gradi;
	calcola_temp_maggiori(esercizio, riemp, gradi, temp, lunghezza);
	stampa_vett(temp,lunghezza);

}
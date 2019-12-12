/* Sia dato il file di testo partite.txt che contiene (come da esempio) per ogni riga due stringhe (che rappresentano i nomi di due squadre) e due numeri interi (che rappresentano le reti segnate dalle due squadre).

Si progettino quattro funzioni:

- leggi_risultati, che legge dal file partite.txt i nomi delle squadre e le reti segnate, 
e li memorizza in un vettore di strutture (vett_partite). Ciascuna struttura conterrà quindi quattro campi:
due stringhe, per memorizzare il nome delle due squadre (quella che gioca in casa e quella che gioca in trasferta), 
e due interi, per memorizzare le reti segnate dalla squadra di casa e da quella in trasferta;

- calcola_punti che riceve in ingresso due interi (che rappresentano le reti segnate dalle due squadre)
e restituisce come valore di ritorno un intero pari a 3, se il primo valore è maggiore del secondo,
pari ad 1 se i due valori sono uguali, e pari a 0 altrimenti;

- calcola_punteggio che riceve in ingresso un vettore di strutture (vett_partite), il suo riempimento (riemp) 
ed una stringa (squadra) che rappresenta il nome di una squadra, e, sfruttando la funzione calcola_punti,
restituisce come parametro di uscita
un intero che rappresenta il numero totale di punti conseguiti da quella squadra nelle partite memorizzate in vett_partite;

- stampa_risultati che stampa a video un vettore di strutture (vedi esempio), contenente, in questo caso,
i risultati di una serie di partite (quelle memorizzate in vett_partite); 

e si scriva un programma che, utilizzando la funzioni sopra descritte, legga, dal file partite.txt,
i risultati di un insieme di partite e da tastiera il nome di una squadra, 
calcoli il punteggio complessivo ottenuto da questa squadra in tali partite, e lo stampi a video con un opportuno messaggio,
dopo aver stampato i risultati contenuti nel file partite.txt.

Il programma dovrà essere suddiviso in moduli, uno contenente prototipi e dichiarazioni, uno contenente le funzioni leggi_risultati, 
calcola_punti, calcola_punteggio e stampa_risultati ed un terzo contenente il main.

---------------------------------------------------------------------------------------------------------------------------------

Esempio

INPUT 
(partite.txt):
Napoli Borussia 2 1
Arsenal Napoli 2 0
Borussia Arsenal 1 1
Arsenal Borussia 1 3
Borussia Napoli 2 1
Napoli Arsenal 2 0

(da tastiera)
Arsenal

OUTPUT :
Napoli Borussia 2-1
Arsenal Napoli 2-0
Borussia Arsenal 1-1
Arsenal Borussia 1-3
Borussia Napoli 3-1
Napoli Arsenal 2-0

I punti della squadra Arsenal sono:  4*/
#include "lib.h"
int main() {
    stringa nome;
    partite dati;
    int riemp = 0;
    int punti = 0;
   
    leggi_partita(dati, riemp);
    cout << "Inserisci nome squadra: ";
    cin >> nome;
    punti = calcola_punteggio(dati, riemp, nome);
    stampa_risultati(dati, riemp, nome, punti);
}
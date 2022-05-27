#include <stdio.h>
#include <string.h>
#include "nauczyciel.h"
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany) {
    Nauczyciel tmp;
    strcpy(tmp.nazwisko,nazwisko);
    strcpy(tmp.imie,imie);
    tmp.pensum = pensum;
    tmp.pensja = pensja;
    tmp.czyDyplomowany = czyDyplomowany;
    return tmp;
}

Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz) {
    Nauczyciel tmp;
    strcpy(tmp.nazwisko,naucz->nazwisko);
    strcpy(tmp.imie,naucz->imie);
    tmp.pensum = naucz->pensum;
    tmp.pensja = naucz->pensja;
    tmp.czyDyplomowany = naucz->czyDyplomowany;
    return tmp;
}

void podwyzka(Nauczyciel *naucz, float inflacja){
    double tmp=naucz->pensja;
    naucz->pensja+=(naucz->pensja*(inflacja/100));
    if(naucz->pensja<3010)
    {
        printf("Podano zla wartosc! Wartosc pozostala nie zmieniona.\n");
        naucz->pensja=tmp;
    }
}


void podwyzkaPensum(Nauczyciel *naucz, unsigned int ileGodzin) {
    unsigned int tmp=naucz->pensum;
    naucz->pensum+=ileGodzin;
    if(naucz->pensum<120 || naucz->pensum>360)
    {
        printf("Podano zla wartosc! Wartosc pozostala nie zmieniona.\n");
        naucz->pensum=tmp;
    }
}

// Wyœwietla dane Nauczyciela
void show(const Nauczyciel *naucz) {
    /* Funkcja powinna wyœwietlac:
    Nazwisko: Kowalski
    Imiê: Jan
    Pensja: 3500 z³
    Wzrost: 2,01 m
    Stanowisko: Dyplomowany

    albo

    Nazwisko: Kowalski
    Imiê: Jan
    Pensja: 3500 z³
    Wzrost: 2,01 m
    Stanowisko: Mianowany

    W zaleznosci od pola czyManager
    */
    printf("Nazwisko: %s\n",naucz->nazwisko);
    printf("Imie: %s\n",naucz->imie);
    printf("Pensja: %.2lf\n",naucz->pensja);
    printf("Pensum: %d\n", naucz->pensum);
    if(naucz->czyDyplomowany)
        printf("Stanowisko: Dyplomowany\n");
    else
        printf("Stanowisko: Mianowany\n");
}



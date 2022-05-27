#ifndef NAUCZYCIEL_H
#define NAUCZYCIEL_H
#define MAX_LEN 50

#include <stdbool.h>

/*
Zdefiniuj sta³¹ MAX_LEN równ¹ 50, a nastêpnie zdefiniuj C-strukturê Nauczyciel o polach nazwisko typu char[MAX_LEN-1], imie typu char[MAX_LEN-1], pensum typu int, pensja typu double oraz czyDyplomowany typu bool. Zdefiniuj nastêpuj¹ce funkcje:
*/
typedef struct Nauczyciel{
    char nazwisko[MAX_LEN-1];
    char imie[MAX_LEN-1];
    int pensum;
    double pensja;
    bool czyDyplomowany;
} Nauczyciel;


// Tworzy strukturê Nauczyciel
Nauczyciel makeNauczyciel(const char *nazwisko, const char *imie, int pensum, double pensja, bool czyDyplomowany);

// Tworzy kopiê Nauczyciela
Nauczyciel makeNauczycielCopy(const Nauczyciel *naucz);

// Zwiêksza pensjê danego Nauczyciela o inflacjê
void podwyzka(Nauczyciel *naucz, float inflacja);

// Zwiêksza pensum danego nauczyciela
void podwyzkaPensum(Nauczyciel *naucz, unsigned int ileGodzin);


// Wyœwietla dane Nauczyciela
void show(const Nauczyciel *naucz);

#endif

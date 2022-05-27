#include <stdio.h>
#include "nauczyciel.h"
#include <string.h>

bool czyPrawidlowaPensja (double pensja)
{
    if(pensja<3010)
        return false;
    return true;
}
bool czyPrawidlowePensum (unsigned int pensum)
{
    if(pensum<120 || pensum>360)
        return false;
    return true;
}

int main(int argc, char *argv[])
{
    // 1) Poproœ u¿ytkownika o wpisanie danych nauczyciela. Zabezpiecz dane! Zak³adamy, ¿e nauczyciel moze miec pensum z zakresu 120 do 360h, a pensja minimalna powinna byæ nie mniejsza niz 3010 zl . Napisz odpowiednie funkcje sprawdzaj¹ce poprawnoœæ danych.
    char imie[MAX_LEN-1], nazwisko[MAX_LEN-1];
    unsigned int pensum;
    double pensja;
    bool czyDyplomowany;
    printf("Podaj nazwisko:\n");
    scanf(" %49[^\n]", nazwisko);
    printf("Podaj imie:\n");
    scanf(" %49[^\n]", imie);
    printf("Podaj pensum:\n");
    scanf("%u", &pensum);
    while(czyPrawidlowePensum(pensum)==false)
    {
        if(czyPrawidlowePensum(pensum)==false)
        {
            printf("Podano zla wartosc!\nPodaj wartosc ponownie:\n");
            scanf("%u", &pensum);
        }
    }
    printf("Podaj pensje:\n");
    scanf("%lf", &pensja);
    while(czyPrawidlowaPensja(pensja)==false)
    {
        if(czyPrawidlowaPensja(pensja)==false)
        {
            printf("Podano zla wartosc!\nPodaj wartosc ponownie:\n");
            scanf("%lf", &pensja);
        }
    }
    unsigned int a;
    printf("Podaj 1 jesli dyplomowany lub 0 jesli nie:\n");
    scanf("%u", &a);
    while(a<0 || a>1)
    {
        if(a<0 || a>1)
        {
            printf("Podano zla wartosc!\nPodaj wartosc ponownie:\n");
            scanf("%u", &a);
        }
    }
    if(a==1)
        czyDyplomowany = true;
    else
        czyDyplomowany = false;

     // 2) Zainicjalizuj strukturê o nazwie prac1 wprowadzonymi danymi.
    Nauczyciel prac1 = makeNauczyciel(nazwisko,imie,pensum,pensja,czyDyplomowany);
    // 3) Stwórz strukturê o nazwie prac2 kopiuj¹c obiekt prac1.
    Nauczyciel prac2 = makeNauczycielCopy(&prac1);
    // 4) Stwórz strukturê o nazwie prac3 kopiuj¹c obiekt prac1.
    Nauczyciel prac3 = makeNauczycielCopy(&prac1);
    // 5) Zmieñ nazwisko nauczyciela prac1 na Kowalski
    strcpy(prac1.nazwisko,"Kowalski");
    // 6) Zmieñ nazwisko nauczyciela prac2 na Nowak
    strcpy(prac2.nazwisko,"Nowak");
    // 7) Zmieñ nazwisko nauczyciela prac3 na Nowakowski
    strcpy(prac3.nazwisko,"Nowakowski");
    // 8) Podwy¿sz pensum nauczyciela prac2 o 100 godzin
    podwyzkaPensum(&prac2,100);
    // 9) Zmieñ czyDyplomowany nauczyciela prac3 na true
    prac3.czyDyplomowany = true;
    // 10) Podnieœ pensjê nauczyciela prac1 o inflacjê 12,3%
    podwyzka(&prac1,12.3);
    // 11) Wypisz informacje o obiektach prac1, prac2, prac3
    show(&prac1);
    show(&prac2);
    show(&prac3);
    // 12) stwórz tablicê o nazwie tab trzech Nauczcieli

    // 13) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // PrzejdŸ tablicê i wype³nij j¹ nauczycielami uzywaj¹c odpowiedniej funkcji.


    // 14) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Nauczyciel znajduj¹cych sie w tablicy tab
    printf("=============================\n");
    Nauczyciel tab[3];
    for(Nauczyciel *i=tab;i<tab+3;i++)
    {
        *i=makeNauczycielCopy(&prac1);
        show(i);
    }
}

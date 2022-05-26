#include <stdio.h>
#include <stdlib.h>

struct student{
    char imie[100];
    char nazwisko[100];
    char adres[100];
    char pesel[12];
    char kierunek[100];
    char nrleg[7];
};
void foo(struct student*a)
{
    printf("podaj imie\n");
    scanf(" %100[^\n]", a->imie);
    printf("podaj nazwisko\n");
    scanf(" %100[^\n]", a->nazwisko);
    printf("podaj adres\n");
    scanf(" %100[^\n]", a->adres);
    printf("podaj pesel\n");
    scanf(" %11s", a->pesel);
    printf("podaj kierunek\n");
    scanf(" %100[^\n]", a->kierunek);
    printf("podaj nr legitymacji\n");
    scanf(" %6s", a->nrleg);
}
void wypisz(struct student a)
{
    printf("imie: %s\n",a.imie);
    printf("nazwisko: %s\n",a.nazwisko);
    printf("adres: %s\n",a.adres);
    printf("pesel: %s\n",a.pesel);
    printf("kierunek: %s\n",a.kierunek);
    printf("nr legitymacji: %s\n",a.nrleg);
}
int main()
{
    struct student stu;
    foo(&stu);
    wypisz(stu);
    return 0;
}

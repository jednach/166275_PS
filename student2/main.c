#include <stdio.h>
#include <stdlib.h>

struct student{
    char *imie;
    char *nazwisko;
    char *adres;
    char *pesel;
    char *kierunek;
    char *nrleg;
};
void foo(struct student*a)
{
    printf("podaj imie\n");
    a->imie=malloc(100*sizeof(char));
    scanf(" %100[^\n]", a->imie);
    printf("podaj nazwisko\n");
    a->nazwisko=malloc(100*sizeof(char));
    scanf(" %100[^\n]", a->nazwisko);
    printf("podaj adres\n");
    a->adres=malloc(100*sizeof(char));
    scanf(" %100[^\n]", a->adres);
    printf("podaj pesel\n");
    a->pesel=malloc(12*sizeof(char));
    scanf(" %11s", a->pesel);
    printf("podaj kierunek\n");
    a->kierunek=malloc(100*sizeof(char));
    scanf(" %100[^\n]", a->kierunek);
    printf("podaj nr legitymacji\n");
    a->nrleg=malloc(7*sizeof(char));
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

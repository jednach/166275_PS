#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char *imie;
    char *nazwisko;
    char *adres;
    char *pesel;
    char *kierunek;
    char *nrleg;
};
void foo(struct student*a, char *im, char *naz, char *ad, char *pes, char *kier, char *nr)
{
    a->imie=malloc(100*sizeof(char));
    a->nazwisko=malloc(100*sizeof(char));
    a->adres=malloc(100*sizeof(char));
    a->pesel=malloc(12*sizeof(char));
    a->kierunek=malloc(100*sizeof(char));
    a->nrleg=malloc(7*sizeof(char));
    strcpy(a->imie,im);
    strcpy(a->nazwisko,naz);
    strcpy(a->adres,ad);
    strcpy(a->pesel,pes);
    strcpy(a->kierunek,kier);
    strcpy(a->nrleg,nr);
}
int main()
{
    char *im,*naz,*ad,*pes,*kier,*nr;
    im=malloc(100*sizeof(char));
    naz=malloc(100*sizeof(char));
    ad=malloc(100*sizeof(char));
    pes=malloc(12*sizeof(char));
    kier=malloc(100*sizeof(char));
    nr=malloc(7*sizeof(char));
    printf("podaj imie\n");
    scanf(" %100[^\n]", im);
    printf("podaj nazwisko\n");
    scanf(" %100[^\n]", naz);
    printf("podaj adres\n");
    scanf(" %100[^\n]", ad);
    printf("podaj pesel\n");
    scanf(" %11s", pes);
    printf("podaj kierunek\n");
    scanf(" %100[^\n]", kier);
    printf("podaj nr legitymacji\n");
    scanf(" %6s", nr);
    struct student stu;
    foo(&stu,im,naz,ad,pes,kier,nr);
    printf("imie: %s\n",stu.imie);
    printf("nazwisko: %s\n",stu.nazwisko);
    printf("adres: %s\n",stu.adres);
    printf("pesel: %s\n",stu.pesel);
    printf("kierunek: %s\n",stu.kierunek);
    printf("nr legitymacji: %s\n",stu.nrleg);
    printf("podaj imie\n");
    scanf(" %100[^\n]", im);
    //strcpy(stu.imie,im);
    printf("imie: %s\n",stu.imie);
    printf("nazwisko: %s\n",stu.nazwisko);
    printf("adres: %s\n",stu.adres);
    printf("pesel: %s\n",stu.pesel);
    printf("kierunek: %s\n",stu.kierunek);
    printf("nr legitymacji: %s\n",stu.nrleg);
    return 0;
}

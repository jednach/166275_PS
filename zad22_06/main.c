#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
void generuj(short [],int,short,short);
void wypisz(short [],int);
int main()
{
    int tab[N], n , minWartosc, maxWartosc;
    srand(time(NULL));
    n=rand()%N+1;
    printf("Wylosowano liczbe: %d\n", n);
    printf("Podaj przedzial liczb z jakich ma skladac sie tablica\n");
    scanf("%d %d", &minWartosc, &maxWartosc);
    generuj(tab,n,minWartosc,maxWartosc);
    wypisz(tab,n);
    return 0;
}
void generuj(short tab[] ,int n, short minWartosc, short maxWartosc)
{
    srand(time(NULL));
    for(int *i=tab;i<tab+n;i++)
        *i=rand()%(maxWartosc-minWartosc+1)+minWartosc;
}
void wypisz(short tab[], int n)
{
    printf("===========\n");
    for(int *i=tab;i<tab+n;i++)
        printf("%d\n", *i);
}


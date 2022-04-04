#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void generuj(short [],int,short,short);
void wypisz(short [],int);
int ileDodatnich(const short [],int );
int ileUjemnych(const short [],int);
int ileZerowych(const short [],int);
short sumaDodatnich(const short [],int);
short sumaUjemnych(const short [],int);
int dlugoscMaksymalnegoCiaguDodatnich(const short [],int);
int main()
{
    int tab[N], n , minWartosc=-99, maxWartosc=99;
    srand(time(NULL));
    n=rand()%N+1;
    printf("Wylosowano liczbe: %d\n", n);
    generuj(tab,n,minWartosc,maxWartosc);
    wypisz(tab, n);
    printf("Wartosci dodatnich: %d\n", ileDodatnich(tab, n));
    printf("Wartosci ujemnych: %d\n", ileUjemnych(tab, n));
    printf("Wartosci zerowych: %d\n", ileZerowych(tab, n));
    printf("Suma dodatnich wartosci: %d\n", sumaDodatnich(tab, n));
    printf("Suma ujemnych wartosci: %d\n", sumaUjemnych(tab, n));
    printf("Dlugosc najdluzszego ciag wartosci dodatnich to: %d\n", dlugoscMaksymalnegoCiaguDodatnich(tab, n));

    return 0;
}
void generuj(short tab[] ,int n, short minWartosc, short maxWartosc)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
        tab[i]=rand()%(maxWartosc-minWartosc+1)+minWartosc;
}
void wypisz(short tab[], int n)
{
    printf("===========\n");
    for(int i=0;i<n;i++)
        printf("%d\n", tab[i]);
}
int ileDodatnich(const short tab[], int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
        if(tab[i]>0)
            ile++;
    return ile;
}
int ileUjemnych(const short tab[], int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
        if(tab[i]<0)
            ile++;
    return ile;
}
int ileZerowych(const short tab[], int n)
{
    int ile=0;
    for(int i=0;i<n;i++)
        if(tab[i]==0)
            ile++;
    return ile;
}
short sumaDodatnich(const short tab[], int n)
{
    short suma=0;
    for(int i=0;i<n;i++)
        if(tab[i]>0)
            suma+=tab[i];
    return suma;
}
short sumaUjemnych(const short tab[], int n)
{
    short suma=0;
    for(int i=0;i<n;i++)
        if(tab[i]<0)
            suma+=tab[i];
    return suma;
}
int dlugoscMaksymalnegoCiaguDodatnich(const short tab[], int n)
{
    int dl=0, maks=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]>0)
            {
                dl++;
                if(dl>maks)
                    maks=dl;
            }
        else
            dl=0;
    }
    return maks;
}









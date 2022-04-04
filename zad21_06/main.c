#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
void generuj(short [],int);
void wypisz(short [],int);
void collatz(short [],int);
void zmien(short [],int);
void signum(short [],int);
void odwroc(short [],int,int);
int ileNieparzystych(const short [],int);
int ileParzystych(const short [],int);
int ileMaksymalnych(const short [],int);
int main()
{
    short tab[N];
    int n, lewy, prawy, pom;
    srand(time(NULL));
    n=rand()%N+1;
    printf("Wylosowano liczbe: %d\n", n);
    generuj(tab, n);
    wypisz(tab, n);
    collatz(tab, n);
    wypisz(tab, n);
    zmien(tab, n);
    wypisz(tab, n);
    signum(tab, n);
    wypisz(tab, n);
    lewy=rand()%n;
    prawy=rand()%n;
    if(lewy>prawy)
    {
        pom=lewy;
        lewy=prawy;
        prawy=pom;
    }
    printf("Wylosowany przedzial to: %d %d\n", lewy, prawy);
    odwroc(tab, lewy, prawy);
    wypisz(tab, n);
    printf("Elementow parzystych: %d\n", ileParzystych(tab, n));
    printf("Elementow nieparzystych: %d\n", ileNieparzystych(tab, n));
    printf("Elementow maksymalnych w tablicy: %d", ileMaksymalnych(tab, n));
    return 0;
}
void generuj(short tab[], int n)
{
    srand(time(NULL));
    for(int *i=tab;i<tab+n;i++)
        *i=rand()%100+1;
}
void wypisz(short tab[], int n)
{
    printf("===========\n");
    for(int *i=tab;i<tab+n;i++)
        printf("%d\n", *i);
}
void collatz(short tab[], int n)
{
    int m;
    for(int *i=tab;i<tab+n;i++)
    {
        if(*i%2!=0)
            *i=*i*3+1;
        else
        {
            m=*i/2;
            while(m!=0)
            {
                if(m%2!=0 && *i%m==0)
                {
                    *i=m;
                    break;
                }
                m--;
            }
        }
    }
}
void zmien(short tab[], int n)
{
    for(int *i=tab;i<tab+n;i++)
    {
        if(*i%2!=0)
            *i*=2;
        else
            *i*=-1;
    }
}
void signum(short tab[], int n)
{
    for(int *i=tab;i<tab+n;i++)
    {
        if(*i>0)
            *i=1;
        if(*i<0)
            *i=-1;
    }
}
void odwroc(short tab[], int lewy, int prawy)
{
    int tmp;
    for(int *i=tab+lewy, *j=tab+prawy;i<j;i++,j--)
    {
        tmp = *i;
        *i = *j;
        *j = tmp;
    }
}
int ileNieparzystych(const short tab[], int n)
{
    int np=0;
    for(int *i=tab;i<tab+n;i++)
        if(*i%2!=0)
            np++;
    return np;
}
int ileParzystych(const short tab[], int n)
{
    int p=0;
    for(int *i=tab;i<tab+n;i++)
        if(*i%2==0)
            p++;
    return p;
}
int ileMaksymalnych(const short tab[],int n)
{
    int maks=0, ile=0;
    for(int *i=tab;i<tab+n;i++)
    {
        if(*i>maks)
        {
            maks=*i;
            ile=0;
        }
        if(*i==maks)
            ile++;
    }
    return ile;
}













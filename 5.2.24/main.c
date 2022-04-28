#include <stdio.h>
#include <stdlib.h>

void kopiuj1(char *, char []);
void kopiuj2(wchar_t *, wchar_t []);
int main()
{
    char napis1[]="napis123", tabznak[20];
    kopiuj1(napis1, tabznak);
    printf("%s", tabznak);
    return 0;
}
void kopiuj1(char * nap, char tab[])
{
    int i=0;
    while(*(nap+i)!=0)
    {
        tab[i]=*(nap+i);
        i++;
    }
    tab[i]=0;
}
void kopiuj2(wchar_t * nap, wchar_t tab[])
{
    int i=0;
    while(*(nap+i)!=0)
    {
        tab[i]=*(nap+i);
        i++;
    }
    tab[i]=0;
}

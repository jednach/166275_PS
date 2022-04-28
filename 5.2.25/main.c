#include <stdio.h>
#include <stdlib.h>

void kopiuj(char *, char ** );
int main()
{
    char * nap1 = "ala ma kota";
    char * nap2;
    kopiuj(nap1,&nap2);
    printf("%s\n", nap1);
    printf("%s\n", nap2);
    return 0;
}
void kopiuj(char * nap, char ** wsk)
{
    char * tab = calloc(20, sizeof(char));
    int i=0;
    while(*(nap+i))
    {
        *(tab+i)=*(nap+i);
        i++;
    }
    *(tab+i)=0;
    *wsk=tab;
}


#include <stdio.h>
#include <stdlib.h>

int dzielnik(int);

int main()
{
    unsigned int n;
    printf("Podaj nieujemna liczbe calkowita wieksza od 2\n");
    scanf("%d", &n);
    if(n<2)
    {
        printf("Podano zla wartosc");
        return 0;
    }
    printf("%d", dzielnik(n));

    return 0;
}
int dzielnik(int n)
{
    int k;
    k=n-1;
    while(k!=1)
    {
        if(n%k==0)
            return k;
        k--;
    }
}

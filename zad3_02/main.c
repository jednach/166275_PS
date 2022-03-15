#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int pierwsza_cyfra(int);
int ostatnia_cyfra(int);
int ile_cyfr(int);
int main()
{
    int n;
    printf("Podaj liczbe\n");
    scanf("%d", &n);
    printf("Pierwsza cyfra tej liczby to: %d\n", pierwsza_cyfra(n));
    printf("%d\n", n);
    printf("Ostatnia cyfra tej liczby to: %d\n", ostatnia_cyfra(n));
    printf("Ilosc cyfr tej liczby to: %d\n", ile_cyfr(n));
    return 0;
}
int pierwsza_cyfra(int n)
{
    int res;
    while(n!=0)
    {
       res=n%10;
       n/=10;
    }
    return res;
}
int ostatnia_cyfra(int n)
{
    int res;
    res=abs(n%10);
    return res;
}
int ile_cyfr(int n)
{
    int res=0;
    while(n!=0)
    {
        res++;
        n/=10;
    }
    return res;
}

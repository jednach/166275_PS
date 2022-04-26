#include <stdio.h>
#include <stdlib.h>

int ile_cyfr(int);
int main()
{
    int n;
    printf("podaj liczbe calkowita\n");
    scanf("%d", &n);
    printf("ta liczba skalda sie z %d cyfr", ile_cyfr(n));
    return 0;
}
int ile_cyfr(int n)
{
    int ile=0;
    if(n==0)
        return 1;
    while(n!=0)
    {
        n/=10;
        ile++;
    }
    return ile;
}

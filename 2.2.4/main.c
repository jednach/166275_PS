#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pdwa(int);
int main()
{
    unsigned int n;
    printf("Podaj nieujemna liczbe calkowita\n");
    scanf("%d", &n);
    printf("%d", pdwa(n));
    return 0;
}
int pdwa(int n)
{
    int res;
    res=pow(2,n);
    return res;
}

#include <stdio.h>
#include <stdlib.h>

int ciag(int);

int main()
{
    unsigned int n;
    printf("Podaj nieujemna liczbe calkowita\n");
    scanf("%d", &n);
    printf("%d", ciag(n));
    return 0;
}
int ciag(int n)
{
    int a=1;
    if(n==0)
        return 1;
    else
        return 2*ciag(n-1)+5;
}

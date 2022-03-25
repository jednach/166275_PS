#include <stdio.h>
#include <stdlib.h>

double *foo(int);
int main()
{
    int n;
    scanf("%d", &n);
    if(n<1)
    {
        printf("podano zla wartosc");
        return 0;
    }
    printf("%p", foo(n));
    return 0;
}
double *foo(int n)
{
    return malloc(n*sizeof(double));
}

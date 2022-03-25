#include <stdio.h>
#include <stdlib.h>

double *rezerwuj();

int main()
{
    double *a = rezerwuj();
    *a = -1.70;
    printf("%d", *a);
}
double *rezerwuj()
{
    return malloc(sizeof(double));
}

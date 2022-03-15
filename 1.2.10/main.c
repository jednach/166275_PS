#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, result;
    printf("Podaj liczbe wymierna:\n");
    scanf("%f", &a);
    result=fabs(a);
    printf("Wartosc bezwzgledna to: %f", result);
    return 0;
}

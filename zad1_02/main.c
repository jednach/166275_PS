#include <stdio.h>
#include <stdlib.h>
int sgn(double);

int main()
{
    double x;
    printf("Podaj liczbe zmiennoprzecinkowa\n");
    scanf("%lf", &x);
    printf("%d", sgn(x));
    return 0;
}
int sgn(double x)
{
    if(x<0)
        return -1;
    if(x>0)
        return 1;
    return 0;
}

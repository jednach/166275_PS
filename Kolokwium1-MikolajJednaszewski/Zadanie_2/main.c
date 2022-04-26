#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double srednia(double,double,double);
int main()
{
    double x, y, z;
    printf("podaj 3 liczby\n");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("srednia geometryczna tych 3 liczb to: %lf", srednia(x,y,z));
    return 0;
}
double srednia(double x, double y, double z)
{
    double res;
    res=fabs(x*y*z);
    res=pow(res,(double)1/3);
    if(x*y*z<0)
        return -1*res;
    return res;
}

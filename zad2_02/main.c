#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double najmniejsza(double,double,double);
double srednia(double,double,double);
double potega(double,int);
int main()
{
    int n;
    double x, y, z;
    printf("Podaj 3 liczby\n");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("Najmniejsza wartosc to: %lf\n", najmniejsza(x,y,z));
    printf("Srednia arytmetyczna to: %lf\n", srednia(x,y,z));
    printf("Podaj stopien potegi\n");
    scanf("%d", &n);
    printf("%lf", potega(x,n));
    return 0;
}

double najmniejsza(double x, double y, double z)
{
    double min=x;
    if(y<min)
        min=y;
    if(z<min)
        min=z;
    return min;
}
double srednia(double x, double y, double z)
{
    double sr;
    sr=(x+y+z)/3;
    return sr;
}
double potega(double x, int n)
{
    double res;
    res=pow(x,n);
    return res;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double savings(double, double, int);
int main()
{
    double cash, proc;
    int years;
    printf("Podaj jaka ilosc pieniedzy wplaciles na lokate\n");
    scanf("%lf", &cash);
    if(cash<0)
    {
        printf("Podano zla wartosc wplaty");
        return 0;
    }
    printf("Podaj jakie jest oprocentowanie lokaty\n");
    scanf("%lf", &proc);
    printf("Podaj ile lat trwa lokata\n");
    scanf("%d", &years);
    printf("Kapital koncowy to: %lf", savings(cash,proc,years));
    return 0;
}
double savings(double cash, double proc, int years)
{
    double res;
    res=cash*pow((1+proc/100),years);
    return res;
}

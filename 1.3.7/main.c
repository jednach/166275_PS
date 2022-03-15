#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, delta;
    printf("Podaj wspolczynnik a\n");
    scanf("%f", &a);
    if(a==0)
    {
        printf("To nie jest rownianie kwadratowe");
        return 0;
    }
    printf("Podaj wspolczynnik b\n");
    scanf("%f", &b);
    printf("Podaj wspolczynnik c\n");
    scanf("%f", &c);
    delta=b*b-4*a*c;
    if(delta>0)
        printf("x1 = %f x2 = %f", (-b-sqrt(delta))/2*a, (-b+sqrt(delta))/2*a);
    if(delta==0)
        printf("x = %f", -b/2*a);
    if(delta<0)
        printf("Brak rozwiazan rownania");
    return 0;
}


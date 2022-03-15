#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x=0;
    float a, b, c, d;
    //a)
    printf("Podaj 4 liczby\n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while((fabs(a)*x*x+b*x+c)<=d)
        x++;
    printf("Najminiejsza nieujemna liczba calkowita spelniajaca rownianie z pkt. a) to: %d\n", x);
    //b)
    x=0;
    while(5*(x+1)*(x+1)+a*(x+1)+b<c)
        x++;
    printf("Najwieksza nieujemna liczba calkowita spelniajaca rownianie z pkt. b) to: %d\n", x);
    //c)
    x=0;
    while(5*(x+1)*(x+1)+a*(x+1)+b<=c)
        x++;
    printf("Najwieksza nieujemna liczba calkowita spelniajaca rownianie z pkt. c) to: %d\n", x);

    return 0;
}

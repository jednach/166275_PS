#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Podaj 3 liczby calkowite\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Srednia arytmetyczna tych liczb to: %f", (a+b+c)/3);
    return 0;
}

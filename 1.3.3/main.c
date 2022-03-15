#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, maks;
    printf("Podaj 3 liczby calkowite\n");
    scanf("%d %d %d", &a, &b, &c);
    maks=a;
    if(maks<b)
        maks=b;
    if(maks<c)
        maks=c;
    printf("Najwieksza wartosc z tych liczb to: %d", maks);
    return 0;
}

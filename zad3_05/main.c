#include <stdio.h>
#include <stdlib.h>

int wskazniki(int*,int*);

int main()
{
    int x, y;
    printf("Podaj 2 liczby calkowite\n");
    scanf("%d %d", &x, &y);
    printf("%d", wskazniki(&x,&y));
    return 0;
}
int wskazniki(int *x, int *y)
{
    if(*x<*y)
        return *x;
    return *y;
}

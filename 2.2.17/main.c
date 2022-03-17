#include <stdio.h>
#include <stdlib.h>

int ile=0;
void foo();
int main()
{
    foo();
    foo();
    foo();
    return 0;
}
void foo()
{
    ile++;
    printf("Ilosc wywolan to: %d\n", ile);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p, *q;
    printf("Pkt d) jest poprawnym przypisaniem: %p\n", p =*&q);
    printf("Pkt f) jest poprawnym przypisaniem: %p\n", p = q);
    return 0;
}

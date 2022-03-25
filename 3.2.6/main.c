#include <stdio.h>
#include <stdlib.h>

void przypisz(int, int *);
int main()
{
    int a, b;
    scanf("%d", &a);
    przypisz(a, &b);
    printf("%d", b);
    return 0;
}
void przypisz(int n, int *w)
{
    *w=n;
}

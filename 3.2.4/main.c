#include <stdio.h>
#include <stdlib.h>
void zmiana(int *, int *);
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    zmiana(&a,&b);
    printf("%d %d", a, b);
    return 0;
}
void zmiana(int *n, int *m)
{
    int tmp;
    if(*n>*m)
    {
        tmp=*n;
        *n=*m;
        *m=tmp;
    }

}

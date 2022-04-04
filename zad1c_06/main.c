#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int n, tab[N], lewy, prawy, pom, tmp;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int *i=tab;i<tab + n;i++)
    {
        *i=rand()%100+1;
        printf("%d ", *i);
    }
    printf("\n");
    lewy=rand()%n;
    prawy=rand()%n;
    if(lewy>prawy)
    {
        pom=lewy;
        lewy=prawy;
        prawy=pom;
    }
    printf("%d %d\n", lewy, prawy);
    printf("===========\n");
    for(int *i=tab+lewy, *j=tab+prawy;i<j;i++,j--)
    {
        tmp = *i;
        *i = *j;
        *j = tmp;
    }
    for(int *i=tab;i<tab+n;i++)
        printf("%d ", *i);
    return 0;
}

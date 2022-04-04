#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int n, tab[N];
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int *i=tab;i<tab + n;i++)
        *i=rand()%100+1;
    for(int *i=tab;i<tab + n;i++)
    {
        printf("%d ", *i);
        if(*i%2!=0)
            *i*=2;
        else
            *i*=-1;
        printf("%d\n", *i);
    }
    printf("=================\n");
    for(int *i=tab;i<tab + n;i++)
    {
        printf("%d ", *i);
        if(*i>0)
            *i=1;
        if(*i<0)
            *i=-1;
        printf("%d\n", *i);
    }
    return 0;
}

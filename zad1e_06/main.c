#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000
int main()
{
    int n, tab[N]={0}, ile=0, maks=0;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int *i=tab;i<tab+n;i++)
    {
        *i=rand()%100+1;
        if(*i>maks)
        {
            ile=0;
            maks=*i;
        }
        if(*i==maks)
            ile++;
        printf("%d ", *i);
    }
    printf("\nelement maksymalny w tablicy to: %d wystapil on %d razy", maks, ile);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int n, tab[N]={0}, ile=0, maks=0;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%100+1;
        if(tab[i]>maks)
        {
            ile=0;
            maks=tab[i];
        }
        if(tab[i]==maks)
            ile++;
        printf("%d ", tab[i]);
    }
    printf("\nelement maksymalny w tablicy to: %d wystapil on %d razy", maks, ile);
    return 0;
}

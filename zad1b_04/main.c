#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int n, tab[N]={0};
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int i=0;i<n;i++)
        tab[i]=rand()%100+1;
    for(int i=0;i<n;i++)
    {
        printf("%d ", tab[i]);
        if(tab[i]%2!=0)
            tab[i]*=2;
        else
            tab[i]*=-1;
        printf("%d\n", tab[i]);
    }
    printf("=================\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", tab[i]);
        if(tab[i]>0)
            tab[i]=1;
        if(tab[i]<0)
            tab[i]=-1;
        printf("%d\n", tab[i]);
    }
    return 0;
}

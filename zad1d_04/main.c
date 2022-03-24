#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int n, tab[N]={0}, p=0, np=0;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%100+1;
        if(tab[i]%2==0)
            p++;
        else
            np++;
        printf("%d ", tab[i]);
    }
    printf("\nelementow parzystych: %d\n", p);
    printf("elementow nieparzystych: %d", np);
    return 0;
}

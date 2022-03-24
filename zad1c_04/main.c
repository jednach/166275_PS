#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    int n, tab[N]={0}, lewy, prawy, pom, tmp;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%100+1;
        printf("%d ", tab[i]);
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
    for(int i=lewy, j=prawy;i<j;i++,j--)
    {
        tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
    }
    for(int i=0;i<n;i++)
        printf("%d ", tab[i]);
    return 0;
}

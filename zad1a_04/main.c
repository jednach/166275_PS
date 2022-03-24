#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int main()
{
    int n, tab[N]={0}, m;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int i=0;i<n;i++)
        tab[i]=rand()%100+1;
    for(int i=0;i<n;i++)
    {
        printf("%d ", tab[i]);
        if(tab[i]%2!=0)
            tab[i]=tab[i]*3+1;
        else
        {
            m=tab[i]/2;
            while(m!=0)
            {
                if(m%2!=0 && tab[i]%m==0)
                {
                    tab[i]=m;
                    break;
                }
                m--;
            }
        }
        printf("%d\n", tab[i]);
    }
    return 0;
}

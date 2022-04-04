#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int main()
{
    int n, tab[N], m;
    srand(time(NULL));
    n=rand()%N+1;
    printf("%d\n", n);
    for(int *i=tab;i<tab + n;i++)
        *i=rand()%100+1;
    for(int *i=tab;i<tab + n;i++)
    {
        printf("%d ", *i);
        if(*i%2!=0)
            *i=*i*3+1;
        else
        {
            m=*i/2;
            while(m!=0)
            {
                if(m%2!=0 && *i%m==0)
                {
                    *i=m;
                    break;
                }
                m--;
            }
        }
        printf("%d\n", *i);
    }
    return 0;
}

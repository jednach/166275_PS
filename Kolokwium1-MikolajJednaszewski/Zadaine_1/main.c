#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int n, dod=0, pod=0;
    printf("podaj liczbe naturalna\n");
    scanf("%d", &n);
    double tab[n];
    for(int i=0;i<n;i++)
        scanf("%lf", &tab[i]);
    for(int i=0;i<n;i++)
        printf("%lf\n", tab[i]);
    for(int i=0;i<n;i++)
    {
        if(tab[i]>0)
            dod++;
        if((int)floor(tab[i])%5==0)
            pod++;
    }
    printf("liczb dodatnich: %d\n", dod);
    printf("liczb ktorych podloga jest podzielna przez 5: %d\n", pod);
    return 0;
}

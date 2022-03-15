#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void lagrange(int);

int main()
{
    unsigned int n;
    printf("Podaj liczbe naturalna\n");
    scanf("%d", &n);
    lagrange(n);
    return 0;
}
void lagrange(int n)
{
    int m;
    m=sqrt(n)+1;
    for(int i=m;i>=0;i--)
        for(int j=m;j>=0;j--)
            for(int k=m;k>=0;k--)
                for(int l=m;l>=0;l--)
                    if(i*i+j*j+k*k+l*l==n)
                    {
                        printf("%d %d %d %d\n", i, j, k, l);
                        return 0;
                    }
}

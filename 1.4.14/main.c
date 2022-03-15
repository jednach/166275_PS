#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float n;
    printf("Podaj liczbe\n");
    scanf("%f", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            a=i*i-j*j;
            b=2*i*j;
            c=i*i+j*j;
            if(a<n && b<n && c<n && a>=1 && b>=1 && c>=1)
                printf("%d %d %d\n", a, b, c);
        }
    return 0;
}

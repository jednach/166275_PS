#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, result=1;
    printf("Podaj liczbe calkowita wieksza od 2\n");
    scanf("%d", &n);
    while(n<2)
    {
        printf("Zla liczba podaj ponownie\n");
        scanf("%d", &n);
    }
    m=n;
    if(n%2==1)
        m--;
    for(int i=2;i<=m;i+=2)
        result*=i;
    printf("%d", result);
    return 0;
}

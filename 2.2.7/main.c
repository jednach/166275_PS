#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potn(int,int);

int main()
{
    int n, m;
    printf("Podaj 2 liczby calkowite, z ktorych co najmniej jedna jest rozna od zera\n");
    scanf("%d %d", &n, &m);
    printf("%lf", potn(n,m));
    return 0;
}
double potn(int n, int m)
{
    double res;
    res=pow(n,m);
    return res;
}

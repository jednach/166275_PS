#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nwd(int,int);
void perfect(int);
int pierwsza(int);
int fibonacci(int);
int czy(int);
void allthree(int);
int main()
{
    unsigned int n;
    printf("Podaj liczbe naturalna\n");
    scanf("%u", &n);
    printf("Odp a):\n");
    for(int i=1;i<n;i++)
        if(nwd(n,i)==1)
            printf("%d\n", i);
    printf("Odp b):\n");
    perfect(n);
    printf("Odp c):\n");
    for(int i=0;i<n;i++)
        if(pierwsza(i))
            printf("%d\n",i);
    printf("Odp d):\n");
    printf("%d\n", fibonacci(n));
    printf("Odp e):\n");
    if(czy(n))
    {
        printf("Tak jest to mozliwe przy pomocy:\n");
        allthree(n);
    }
    else
        printf("Nie jest to mozliwe");


    return 0;
}
int nwd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
    return a;
}
void perfect(int a)
{
    int spr=0;
    for(int i=2;i<a;i++)
    {
        for(int j=1;j<i;j++)
            if(i%j==0)
                spr+=j;
        if(spr==i)
            printf("%d\n", i);
        spr=0;
    }
}
int pierwsza(int a)
{
    if(a<2)
        return 0;
    for(int i=2;i*i<=a;i++)
        if(a%i==0)
            return 0;
    return 1;
}
int fibonacci(int a)
{
    int m=0, n=1;
    if(a==1)
        return 0;
    while(n+m<a)
    {
        n+=m;
        m=n-m;
    }
    return n;
}
int czy(int a)
{
    for(int i=0;i*i<=a;i++)
        for(int j=0;j*j<=a;j++)
            for(int k=0;k*k<=a;k++)
                if(i*i+j*j+k*k==a)
                    return 1;
    return 0;
}
void allthree(int a)
{
    int m;
    m=sqrt(a)+1;
    for(int i=m;i>=0;i--)
        for(int j=m;j>=0;j--)
            for(int k=m;k>=0;k--)
                if(i*i+j*j+k*k==a)
                    printf("%d %d %d\n", i, j, k);
}

















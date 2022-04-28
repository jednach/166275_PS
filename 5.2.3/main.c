#include <stdio.h>
#include <stdlib.h>

int porownaj1(char *,char *);
int porownaj2(wchar_t *,wchar_t *);

int main()
{
    char napis1[] = "napis", napis2[] = "napis";
    printf("%d\n", porownaj1(napis1, napis2));
    return 0;
}
int porownaj1(char *n1, char *n2)
{
    int i=0, j=0;
    while(*(n1+i)!=0)
        i++;
    while(*(n2+j)!=0)
        j++;
    if(i!=j)
        return 0;
    i=0;
    while(*(n1+i)!=0)
    {
        if(*(n1+i)!=*(n2+i))
            return 0;
        i++;
    }
    return 1;
}
int porownaj2(wchar_t *n1, wchar_t *n2)
{
    int i=0, j=0;
    while(*(n1+i)!=0)
        i++;
    while(*(n2+j)!=0)
        j++;
    if(i!=j)
        return 0;
    i=0;
    while(*(n1+i)!=0)
    {
        if(*(n1+i)!=*(n2+i))
            return 0;
        i++;
    }
    return 1;
}

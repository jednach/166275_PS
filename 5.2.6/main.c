#include <stdio.h>
#include <stdlib.h>

void kopiujn1(const char [],char [], int);
void kopiujn2(const wchar_t [],wchar_t [], int);
int main()
{
    char napis1[] = "napis", napis2[20];
    kopiujn1(napis1,napis2,7);
    printf("%s\n", napis1);
    printf("%s", napis2);
    return 0;
}
void kopiujn1(const char nap1[], char nap2[], int n)
{
    int i=0;
    while(nap1[i]!=0)
        i++;
    if(i<n)
        n=i;
    i=0;
    while(nap1[i]!=nap1[n])
    {
        nap2[i]=nap1[i];
        i++;
    }
    nap2[i]=0;
}
void kopiujn2(const wchar_t nap1[], wchar_t nap2[], int n)
{
    int i=0;
    while(nap1[i]!=0)
        i++;
    if(i<n)
        n=i;
    i=0;
    while(nap1[i]!=nap1[n])
    {
        nap2[i]=nap1[i];
        i++;
    }
    nap2[i]=0;
}

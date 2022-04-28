#include <stdio.h>
#include <stdlib.h>

void przepisz1(const char [],char []);
void przepisz2(const wchar_t [],wchar_t []);
int main()
{
    char napis1[] = "napis", napis2[20];
    przepisz1(napis1,napis2);
    printf("%s", napis2);
    return 0;
}
void przepisz1(const char n1[], char n2[])
{
    int i=0;
    while(n1[i]!=0)
    {
        n2[i]=n1[i];
        i++;
    }
    n2[i]=0;
}
void przepisz2(const wchar_t n1[], wchar_t n2[])
{
    int i=0;
    while(n1[i]!=0)
    {
        n2[i]=n1[i];
        i++;
    }
    n2[i]=0;
}

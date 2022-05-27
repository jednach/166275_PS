#include <stdio.h>

//Napisz wskaŸnikow¹ wersjê funkcji strcpyOdd. Funkcja ta ma kopiowaæ z napisu s do napisu t znaki z nieparzystych pozycji. Zadbaj o koniec napisu - NUL.
char* strcpyOdd(char *t, const char *s)
{
    char *p = t;
    int i=0, j=0;
    while(s[i])
    {
        if(i%2==1)
        {
            t[j]=s[i];
            j++;
        }
        i++;
    }
    t[j]=0;
    return p;
}

int main(void) {
    char napis1[100]="Ala ma kota";
    char napis2[100];
    printf("%s\n",napis1);
    strcpyOdd(napis2,napis1);
    printf("%s",napis2);

}

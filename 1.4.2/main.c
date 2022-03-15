#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n, m;
    printf("Podaj 2 dodatnie liczby calkowite\n");
    scanf("%u %u", &n, &m);
    for(int i=0;i<m;i++)
        printf("%u\n", n*i);
    return 0;
}

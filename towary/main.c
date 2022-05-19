#include <stdio.h>
#include <stdlib.h>
#include "Towar.h"

int main()
{
    char nazwa[MAX_LEN], nazwa2[MAX_LEN];
    scanf("%s", nazwa);
    Towar towar1 = makeTowar(nazwa,1000,5);
    show(&towar1);
    Towar towar2 = makeTowarcopy(&towar1);
    show(&towar2);
    printf("%lf\n", cenaNetto(&towar1));
    printf("%lf\n", kwotaVAT(&towar1));
    scanf("%s", nazwa2);
    Towar towar3 = makeTowar(nazwa2,0,9);
    show(&towar3);
    printf("%lf\n", cenaNetto(&towar3));
    printf("%lf\n", kwotaVAT(&towar3));
    return 0;
}

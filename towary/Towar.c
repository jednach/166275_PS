#include <stdio.h>
#include "Towar.h"

Towar makeTowar(const char *nazwa,double cenaBrutto,float stawkaVAT)
{
    int i=0;
    Towar tmp;
    while(*(nazwa+i)!=0)
    {
        *(tmp.nazwa+i)=*(nazwa+i);
        i++;
    }
    *(tmp.nazwa+i)=0;
    tmp.cenaBrutto = cenaBrutto;
    tmp.stawkaVAT = stawkaVAT;
    return tmp;
}
Towar makeTowarcopy(const Towar *towar)
{
    int i=0;
    Towar tmp;
    while(*(towar->nazwa+i)!=0)
    {
        *(tmp.nazwa+i)=*(towar -> nazwa+i);
        i++;
    }
    *(tmp.nazwa+i)=0;
    tmp.cenaBrutto = towar -> cenaBrutto;
    tmp.stawkaVAT = towar -> stawkaVAT;
    return tmp;
}
double cenaNetto(const Towar *towar)
{
    double netto;
    netto = (towar->cenaBrutto)*(towar->stawkaVAT)/100+towar->cenaBrutto;
    return netto;
}
double kwotaVAT(const Towar *towar)
{
    double kwota;
    kwota = towar->cenaBrutto*towar->stawkaVAT/100;
    return kwota;
}
void show(const Towar *towar)
{
    printf("nazwa towaru:\n%s\ncenaBrutto:\n%lf\nstawka VAT:\n%f\n", towar -> nazwa, towar -> cenaBrutto, towar -> stawkaVAT);
}

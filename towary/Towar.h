#ifndef TOWAR_H
#define TOWAR_H
#define MAX_LEN 10

typedef struct Towar{
    char nazwa[MAX_LEN];
    double cenaBrutto;
    float stawkaVAT;
} Towar;

Towar makeTowar(const char *nazwa,double cenaBrutto,float stawkaVAT);
Towar makeTowarcopy(const Towar *towar);
double cenaNetto(const Towar *towar);
double kwotaVAT(const Towar *towar);
void show(const Towar *towar);

#endif

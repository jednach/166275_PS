#include <stdio.h>
#include <stdlib.h>

union Liczba{
    double a;
    int b;
};
struct zespolone{
    int tp;
    union Liczba re;
    union Liczba im;
};
struct zespolone wczytaj()
{
    struct zespolone res;
    printf("jezeli chcesz wczytac liczby wymierne wybierz 0, a jezeli calkowite wybierz 1\n");
    scanf("%d", &res.tp);
    if(res.tp==0)
    {
        printf("podaj liczbe Re\n");
        scanf("%lf",&res.re.a);
        printf("podaj liczbe Im\n");
        scanf("%lf",&res.im.a);
    }
    else
    {
        printf("podaj liczbe Re\n");
        scanf("%d",&res.re.b);
        printf("podaj liczbe Im\n");
        scanf("%d",&res.im.b);
    }
    return res;
}
void show(struct zespolone n)
{
    if(n.tp==0)
        printf("liczba zespolona = (%lf,%lf)\n", n.re.a, n.im.a);
    else
        printf("liczba zespolona = (%d,%d)\n", n.re.b, n.im.b);
}
struct zespolone dodaj(struct zespolone n, struct zespolone m)
{
    struct zespolone res;
    if(n.tp==0 && m.tp==0)
    {
        res.tp=0;
        res.re.a = n.re.a + m.re.a;
        res.im.a = n.im.a + m.im.a;
    }
    if(n.tp==1 && m.tp==1)
    {
        res.tp=1;
        res.re.b = n.re.b + m.re.b;
        res.im.b = n.im.b + m.im.b;
    }
    if(n.tp==0 && m.tp==1)
    {
        res.tp=0;
        res.re.a = n.re.a + m.re.b;
        res.im.a = n.im.a + m.im.b;
    }
    if(n.tp==1 && m.tp==0)
    {
        res.tp=0;
        res.re.a = m.re.a + n.re.b;
        res.im.a = m.im.a + n.im.b;
    }
    return res;
}
int main()
{
    struct zespolone liczba1, liczba2, liczba3;
    liczba1 = wczytaj();
    show(liczba1);
    liczba2 = wczytaj();
    show(liczba2);
    liczba3 = dodaj(liczba1,liczba2);
    show(liczba3);
    return 0;
}

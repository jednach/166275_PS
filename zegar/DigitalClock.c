#include <stdio.h>
#include "DigitalClock.h"

DigitalClock makeDigitalClock(unsigned godzina,unsigned minuta)
{
    DigitalClock tmp;
    tmp.godzina = godzina;
    tmp.minuta = minuta;
    if(tmp.godzina>24)
        tmp.godzina%=24;
    if(tmp.godzina==24)
        tmp.godzina = 0;
    if(tmp.minuta>60)
    {
        tmp.godzina+=tmp.minuta/60;
        tmp.minuta%=60;
    }
    if(tmp.minuta==60)
    {
        tmp.godzina++;
        tmp.minuta=0;
    }
    return tmp;
}
void showtime(DigitalClock *s)
{
    printf("Podany czas to: %02u:%02u\n", s->godzina, s->minuta);
}
void incrementn(DigitalClock *d,unsigned ileMinut)
{
    d->minuta+=ileMinut;
    if(d->minuta>60)
    {
        d->godzina+=d->minuta/60;
        d->minuta%=60;
    }
    if(d->minuta==60)
    {
        d->godzina++;
        d->minuta=0;
    }
    if(d->godzina>23)
        d->godzina%=24;
}
void increment(DigitalClock *d)
{
    d->minuta++;
    if(d->minuta>60)
    {
        d->godzina+=d->minuta/60;
        d->minuta%=60;
    }
    if(d->minuta==60)
    {
        d->godzina++;
        d->minuta=0;
    }
    if(d->godzina>23)
        d->godzina%=24;
}
void decrementn(DigitalClock *d,unsigned ileMinut)
{
    unsigned a, b;
    a=ileMinut/60;
    b=ileMinut%60;
    while(a>24)
        a-=24;
    if(d->godzina<a || (d->godzina == 0 && b>0))
        d->godzina+=24;
    if(d->minuta<b)
    {
        d->godzina--;
        d->minuta+=60;
    }
    d->godzina-=a;
    d->minuta-=b;
    if(d->godzina>23)
        d->godzina%=24;
}
void decrement(DigitalClock *d)
{
    if(d->minuta == 0 && d->godzina == 0)
        d->godzina=24;
    if(d->minuta == 0)
    {
        d->godzina--;
        d->minuta=60;
    }
    d->minuta--;
    if(d->godzina>23)
        d->godzina%=24;
}

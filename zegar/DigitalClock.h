#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

typedef struct DigitalClock{
    unsigned godzina;
    unsigned minuta;
} DigitalClock;

DigitalClock makeDigitalClock(unsigned godzina,unsigned minuta);
void showtime(DigitalClock *s);
void incrementn(DigitalClock *d,unsigned ileMinut);
void increment(DigitalClock *d);
void decrementn(DigitalClock *d,unsigned ileMinut);
void decrement(DigitalClock *d);
#endif

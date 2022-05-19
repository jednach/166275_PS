#include <stdio.h>
#include <stdlib.h>
#include "DigitalClock.h"
int main()
{
    DigitalClock godzina1 = makeDigitalClock(24,0);
    showtime(&godzina1);
    incrementn(&godzina1,0);
    showtime(&godzina1);
    increment(&godzina1);
    showtime(&godzina1);
    decrementn(&godzina1, 1);
    showtime(&godzina1);
    decrement(&godzina1);
    showtime(&godzina1);
    return 0;
}

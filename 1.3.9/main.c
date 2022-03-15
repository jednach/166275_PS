#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char znak;
    printf("Podaj 2 liczby\n");
    scanf("%f %f", &a, &b);
    printf("Podaj jaka operacje chcesz wykonac\n");
    scanf("\n%c", &znak);
    switch(znak)
    {
        case '+':
            printf("Wynik dodawania to: %f", a+b);
        break;
        case '-':
            printf("Wynik odejmowania to: %f", a-b);
        break;
        case '*':
            printf("Wynik mnozenia to: %f", a*b);
        break;
        case '/':
            printf("Wynik dzielenia to: %f", a/b);
        break;
        default:
            printf("Wybrano nieprawidlowy znak");
        break;
    }
    return 0;
}

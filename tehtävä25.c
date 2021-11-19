#include <stdio.h>
#include <math.h> //a^2+b^2=c^2

double laskeHypotenuusa(double sivu1, double sivu2);

int main()
{

    double sivu1 = 0.0;
    double sivu2 = 0.0;
    double hypotenuusa = 0.0;

    printf("\nAnna ensimmäinen sivu: ");
    scanf("%lf", &sivu1);

    printf("\nAnna toinen sivu: ");
    scanf("%lf", &sivu2);

    printf("%lf", laskeHypotenuusa(sivu1, sivu2));
    return 0;
}

double laskeHypotenuusa(double sivu1, double sivu2)
{
    double n;
    n = hypot(sivu1, sivu2);
    return n;
}

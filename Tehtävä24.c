#include <stdio.h>
#include <math.h>
int pyoristyslukuja(double x);

int main()
{
    int k;

    for (k = 0; k <= 4; k++)
    {
        double z;
        double y;

        printf("Anna luku > ");
        scanf("%lf", &z);

        y = pyoristyslukuja(z);

        printf("Alkuperainen luku: %lf\nPyoristetty luku: %lf\n", z, y);
    }
    return 0;
}

int pyoristyslukuja(double x)
{
    return floor(x + 0.5);
}
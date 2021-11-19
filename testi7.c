#include <stdio.h>

double laskepm(double tunnit);

int main(void)
{
    double tunnit1 = 0.0;
    double tunnit2 = 0.0;
    double tunnit3 = 0.0;

    double veloitus1 = 0.0;
    double veloitus2 = 0.0;
    double veloitus3 = 0.0;

    double tunnit_yhteensa = 0.0;
    double veloitus_yhteensa = 0.0;

    printf("Syota tunnit > ");
    scanf("%lf", &tunnit1);
    veloitus1 = laskepm(tunnit1);

    printf("Syota tunnit > ");
    scanf("%lf", &tunnit2);
    veloitus2 = laskepm(tunnit2);

    printf("Syota tunnit > ");
    scanf("%lf", &tunnit3);
    veloitus3 = laskepm(tunnit3);

    tunnit_yhteensa = tunnit1 + tunnit2 + tunnit3;
    veloitus_yhteensa = veloitus1 + veloitus2 + veloitus3;

    printf("%9s%12s%12s", "Asiakas", "Tunnit", "Veloitus");

    printf("\n\t1%11.2lf\t%5.2lf\n\t2\t%.2lf\t%5.2lf\n\t3\t%.2lf\t%5.2lf\nYHTEENSA\t %.2lf \t %.2lf", tunnit1, veloitus1, tunnit2, veloitus2, tunnit3, veloitus3, tunnit_yhteensa, veloitus_yhteensa);

    return 0;
}

double laskepm(double tunnit)
{
    if (tunnit <= 3)
        return 2;

    if (tunnit < 24)
        return (tunnit - 3) * 0.5 + 2;

    return 10;
}
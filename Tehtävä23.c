#include <stdio.h>

double laskeParkkiMaksu(double tunnit);

int main(void)
{
    double a1 = 0.0;
    double a2 = 0.0;
    double a3 = 0.0;

    double velo1 = 0.0;
    double velo2 = 0.0;
    double velo3 = 0.0;

    double tunnit_yht = 0.0;
    double veloitus_yht = 0.0;

    printf("Syota tunnit > ");
    scanf("%lf", &a1);
    velo1 = laskeParkkiMaksu(a1);

    printf("Syota tunnit > ");
    scanf("%lf", &a2);
    velo2 = laskeParkkiMaksu(a2);

    printf("Syota tunnit > ");
    scanf("%lf", &a3);
    velo3 = laskeParkkiMaksu(a3);

    tunnit_yht = a1 + a2 + a3;
    veloitus_yht = velo1 + velo2 + velo3;

    printf("%9s%12s%12s", "Asiakas", "Tunnit", "Veloitus");

    printf("\n\t1%11.2lf\t%5.2lf\n\t2\t%.2lf\t%5.2lf\n\t3\t%.2lf\t%5.2lf\nYHTEENSA\t %.2lf \t %.2lf", a1, velo1, a2, velo2, a3, velo3, tunnit_yht, veloitus_yht);

    return 0;
}

double laskeParkkiMaksu(double tunnit)
{
    if (tunnit <= 3)
        return 2;

    if (tunnit < 24)
        return (tunnit - 3) * 0.5 + 2;

    return 10;
}
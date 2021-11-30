#include <stdio.h>
#include <math.h>

int korotaKokonaislukuPotenssiin(int luku, int potenssi);

int main()
{
    int luku, potenssi;
    int c;

    printf("\nAnna luku: ");
    scanf("%d", &luku);
    printf("\nAnna potenssi:");
    scanf("%d", &potenssi);
    c = korotaKokonaislukuPotenssiin(luku, potenssi);

    printf("Luku %d korotettuna potenssiin %d on %d", luku, potenssi, c);
    return 0;
}

int korotaKokonaislukuPotenssiin(int luku, int potenssi)
{
    if (potenssi < 0)
        return -1;

    int z = 1;
    while (potenssi)
    {
        if (potenssi & 1)
            z *= luku;
        potenssi >>= 1;
        luku *= luku;
    }

    return z;
}
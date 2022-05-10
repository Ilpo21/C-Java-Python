#include <stdio.h>
// voiko plussata?
int teeJotain(void);
int annaKokonaisluku(int monesko);

int teeJotain(void)
{
    int luku1 = 0, luku2 = 0;

    printf("\nAnna 1. kokonaisluku > ");

    luku1 = annaKokonaisluku(1);

    printf("\nAnna 2. kokonaisluku > ");

    luku2 = annaKokonaisluku(2);

    return luku1 + luku2;
}

int annaKokonaisluku(int monesko)
{

    int luku = 0;

    if (monesko <= 1)
    {
        luku = 1000;
    }

    if (monesko > 1)
    {
        luku = -2000;
    }

    return luku;
}

int main(void)
{

    int summa = 0;
    summa = teeJotain();

    printf("\nSumma on %d\n", summa);

    return 0;
}
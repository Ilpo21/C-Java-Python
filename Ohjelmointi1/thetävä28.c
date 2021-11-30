#include <stdio.h>
int onkoLukuTaydellinen(int num);

int main(void)
{
    int summa = 0, a = 0; // tsydeemit
    int numero;

    int z;
    printf("Anna luku>");
    scanf("%d", &z);

    a = onkoLukuTaydellinen(z);
    if (a == 1) // call toiminto ja tarkista tulos
    {
        printf("\nLuku %d on taydellinen luku", z);
    }
    else
    {
        printf("\nLuku %d ei ole taydellinen luku", z);
    }
    return (0);
}

int onkoLukuTaydellinen(int num) // pitäis toimia palauttaa väärän?
{
    int i = 1, sum = 0;
    while (i < num) // toimii kunnes numerot ==
    {
        if (num % i == 0)
            sum = sum + i;
        i++;
    }

    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

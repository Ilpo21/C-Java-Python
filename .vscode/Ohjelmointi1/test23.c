#include <stdio.h>

int onkoLukuTaydellinen(int luku);

int main(void)
{
    int numero = 1, z;
    while (numero <= 10000) // numeroita pirusti
    {
        z = onkoLukuTaydellinen(numero);
        if (z == numero)
        {
            printf("\nLuku %d on taydellinen luku", numero);
            ++numero;
        }
        else
            ++numero;
    }
    return (0);
}

int onkoLukuTaydellinen(int luku)
{
    int x = 0, i;
    for (i = 1; i < luku; i++) // laskuri tsydeemi
    {
        if (luku % i == 0)
            x = x + i;
    }
    return x;
}
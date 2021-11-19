#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int onkoLukuTaydellinen(int luku);

int main(void)
{
    int luku;
    int i, k;

    for (i = 1; i <= 100000; i++)
    {
        k = onkoLukuTaydellinen(i); // call toiminto ja tarkista tulos
        if (k == 1)
        {
            printf("\nLuku %d on taydellinen luku", i);
        }
        else
        {
            break;
        }
    }

    return (0);
}

int onkoLukuTaydellinen(int luku)
{
    int i, j;

    i = 0;

    for (j = 1; j < luku; j++) // tarkistaa onko annettu luku täydellinen
    {
        if (luku % j == 0)
        {
            i += j;
        }
    }

    if (i == luku) // lähettöö tiedon eteenpäi
    {
        return 1;
    }
    else
        return 0;
}

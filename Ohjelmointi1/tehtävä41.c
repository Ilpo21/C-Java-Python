#include <stdio.h>
int main(void)
{
    int x;
    double z = 0;
    int y = 1;
    int arr[10];
    double keskiarvo;
    int suurin, paikka;
    int a, b, c;
    int w = 0;
    for (int i = 0; i < 10; i++, y++)
    {
        printf("Anna %d. kokonaisluku> ", y);
        scanf("%d", &x);
        if (x <= 100 && x >= 0)
        {
            arr[i] = x;
        }
        else
        {
            printf("Anna %d. kokonaisluku>", y);
            scanf("%d", &arr[i]);
            if (x <= 100 && x >= 0)
            {
                arr[i] = x;
            }
            else
            {

                printf("Anna %d. kokonaisluku>", y);
                scanf("%d", &arr[i]);
            }
        }
    }
    for (int k = 0; k < 10; k++) // keskiarvon laskenta
    {
        z += arr[k];
    }
    keskiarvo = z / 10;
    if (keskiarvo != 0)
    {
        printf("Taulukon:\n");
        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", arr[j]);
        }
        for (int a = 1; a < 10; ++a) // oikean numeron löytämine
        {
            if (arr[0] < arr[a])
            {
                arr[0] = arr[a];
                c = arr[0];
                b = a;
            }
        }
        printf("\n\nSuurin arvo %d, ja se sijaitsee paikassa %d", c, b);
        printf("\n\nTaulukon arvojen keskiarvo on %.3lf", keskiarvo);
        return 0;
    }
    else // jos syötetyt luvut on pelkkiä nollia
    {
        printf("Taulukon:\n");
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", w);
        }
        printf("\n\nSuurin arvo %d, ja se sijaitsee paikassa %d", w, w);
        printf("\n\nTaulukon arvojen keskiarvo on %.3lf", keskiarvo);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int num(int k);

int main(void)
{
    int x = 0, y = 0, z = 0; // Numeroita
    int a = 1, k;            // Vastaus
    int n;
    srand(time(NULL));

    do
    {

        printf("\n Anna luku -1 lopettaaksesi");
        printf("\nValitse:\nKertolasku(1) vai Jakolasku(2)?");
        scanf("%d", &n);
        // KERTOLASKU
        if (n == 1)
        {
            x = num(k);
            y = num(k);
            z = x * y;
            printf("\n Paljonko on luku %d kertaa %d? >", x, y);
            scanf("%d", &a);
            if (a == -1)
            {
                return 0;
            }
            else if (a == z)
            {
                printf("\nOikein!");
            }
            else
            {

                while (a != z)
                {
                    printf("\nVäärin, yritetään uudelleen. >");
                    scanf("%d", &a);
                    break;
                }
                printf("\nOikein!");
            }
        }
        // JAKOLASKU
        else
        {
            x = num(k);
            y = num(k);
            z = x * y;
            printf("\n Paljonko on luku %d on jaettuna luvulla %d >", z, y);
            scanf("%d", &a);
            if (a == -1)
            {
                return 0;
            }
            else if (a == x)
            {
                printf("\nOikein!");
            }
            else
            {

                while (a != x)
                {
                    printf("\nVäärin, yritetään uudelleen. >");
                    scanf("%d", &a);
                    break;
                }
                printf("\nOikein!");
            }
        }

    } while (a > 0);
}

int num(int k)
{
    int a = rand() % 10 + 1;
    return a;
}
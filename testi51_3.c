#include <string.h>
#include <stdio.h>
#define PITUUS 100

int main(void)
{
    char jono[3][PITUUS];
    int merkki = 0;
    int kirjain = 0;
    int i = 0;
    int a;
    int z;
    char b = a;
    char x = z;
    int numero;
    a = b;
    z = x;

    for (int i = 0; i < 3; i++)
    {
        printf("luku\n");
        fgets(jono[i], PITUUS, stdin);
    }

    while (i <= 2)
    {
        for (int j = 0; jono[i][kirjain] != '\0'; kirjain++)
        {

            if (jono[i][kirjain] >= 97 || jono[i][kirjain] <= 122)
            {
                merkki++;
            }
        }
        i++;
        kirjain = 0;
    }

    printf("%d", merkki);

    return 0;
}
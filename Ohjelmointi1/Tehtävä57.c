#include <stdio.h>
#include <string.h>
#define PITUUS 300

void omaStrcmp(char *array1, char *array2, int x);
void luePois(void);

int main(void)
{
    char jono[PITUUS], jono1[PITUUS];
    int y = 0;
    printf("\nAnna merkkijono 1:\n");
    fgets(jono, PITUUS, stdin);

    printf("\nAnna merkkijono 2:\n");
    fgets(jono1, PITUUS, stdin);

    omaStrcmp(jono, jono1, y);

    return 0;
}

void omaStrcmp(char *array1, char *array2, int x)
{
    char jono1[PITUUS], jono2[PITUUS];
    int merkki = 0;
    for (int i = 0; i < PITUUS; i++) // kopioidaa arrayta
    {
        jono1[i] = array1[i];
        jono2[i] = array2[i];
    }

    while (*array1 != '\0' || *array2 != '\0') // aletaan vähäse tarkastelee sotkua
    {

        if (*array1 == *array2)
        {
            array1++;
            array2++;
        }

        else if ((*array1 == '\0' && *array2 != '\0') || (*array1 != '\0' && *array2 == '\0') || *array1 != *array2) // jos löytyy eripituisuus niin tällä mennään
        {
            merkki = 1;
            x = *array1 - *array2;
            printf("%d", x);
            if (x < 0)
            {
                printf("%s<%s", jono1, jono2); // kokkeillaan printata vähä vastauksia

                break;
            }
            else if (x > 0)
            {
                printf("%s>%s", jono1, jono2);

                break;
            }
            else if (x == 0)
            {
                printf("%s=%s", array1, array2);
                break;
            }

            break;
        }
        // if (merkki == 0) // muuten ollaanki tällä liikenteessä
        // {

        //     printf("%s=%s", array1, array2);
        //     break;
        // }
    }
}

void luePois(void)
{
    while (getc(stdin) != '\n')
        ;
}
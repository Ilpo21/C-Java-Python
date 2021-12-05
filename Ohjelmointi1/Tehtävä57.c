#include <stdio.h>
#include <string.h>
#define PITUUS 300

void omaStrcmp(char *array1, char *array2, int x);
void luePois(void);

int main(void)
{
    char jono[PITUUS], jono1[PITUUS];
    int y;
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
    if (jono1[strlen(jono1 - 1)] == '\n') // poistellaa merkkejä
    {
        jono1[strlen(jono1) - 1] = '\0';
    }
    else
    {
        luePois();
    }

    if (jono2[strlen(jono2 - 1)] == '\n')
    {
        jono2[strlen(jono2) - 1] = '\0';
    }
    else
    {
        luePois();
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

            break;
        }
        if (merkki == 0) // muuten ollaanki tällä liikenteessä
        {
            x = *array1 - *array2;
            printf("%s=%s", jono1, jono2);
            break;
        }
    }
}

void luepois(void)
{
    while (getc(stdin) != '\n')
        ;
}
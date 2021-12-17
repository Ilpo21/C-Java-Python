#include <stdio.h>
#include <string.h>
#define PITUUS 300

void omaStrcmp(char *array1, char *array2, int x);
void luePois(void);

int main(void)
{
    int i, j;
    char jono[PITUUS], jono1[PITUUS];
    int y = 0;
    printf("\nAnna merkkijono 1:\n");
    fgets(jono, PITUUS, stdin);

    printf("\nAnna merkkijono 2:\n");
    fgets(jono1, PITUUS, stdin);

    if ((strlen(jono) - 1) == '\n')
    {
        jono = jono[strlen(jono)] - 1 = '\0';
    }

    omaStrcmp(jono, jono1, y);

    printf("%s===%s", jono1, jono);

    return 0;
}

void omaStrcmp(char *array1, char *array2, int x)
{
    int a, b;
    for (int i = 0; i < strlen(array1); i++)
    {
        a += array1[i];
    }
    for (int i = 0; i < strlen(array1); i++)
    {
        b += array2[i];
    }

    if (a == b)
    {
        printf("%s=%s", array1, array2);
    }
    else if (a < b)
    {
        printf("%s<%s", array1, array2);
    }
    else if (a > b)
    {
        printf("%s>%s", array1, array2);
    }
}
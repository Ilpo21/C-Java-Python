#include <stdio.h>
#include <string.h>
#define PITUUS 100

char *mystrcpy(char *kohde, const char *lahde);
char *mystrcat(char *kohde, char *lahde);

int main(void)
{
    char kohde[PITUUS] = "apple", lahde[PITUUS] = "world";

    mystrcpy(kohde, lahde);
    printf("%s ja %s\n", kohde, lahde);

    mystrcat(kohde, lahde);
    printf("%s ja %s", kohde, lahde);
}

char *mystrcpy(char *kohde, const char *lahde)
{
    int x = 0;

    for (x = 0; lahde[x] != '\0'; x++)
    {
        kohde[x] = lahde[x];
    }
    kohde[x] = '\0';
}

char *mystrcat(char *kohde, char *lahde)
{
    char *vaihtoehto = kohde;
    while (*vaihtoehto)
        vaihtoehto++;
    while ((*vaihtoehto++ = *lahde++) != '\0')
        continue;
    return kohde;
}
#include <stdio.h>
#include <stdlib.h>
int StrCmp(char *array1, char *array2);

int main()
{
    int tulos = 0;
    char jono1[100], jono2[100];
    scanf("%s", jono1);
    scanf("%s", jono2);

    tulos = StrCmp(jono1, jono2);

    if (tulos == 1)
        printf("%s > %s ", jono1, jono2);
    else if (tulos == -1)
        printf("%s < %s ", jono1, jono2);
    else
        printf("%s == %s ", jono1, jono2);
}

int StrCmp(char *array1, char *array2)
{
    int i = 0;

    while (array1[i] != '\0')
    {
        if (array2[i] == '\0')
            return 1;
        else if (array1[i] < array2[i])
            return -1;
        else if (array1[i] > array2[i])
            return 1;
        i++;
    }
    if (array2[i] != '\0')
        return -1;
}
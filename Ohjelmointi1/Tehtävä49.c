#include <stdio.h>

int main(void)
{
    char jono[101];
    char jono1[101];
    char jono2[101];
    char jono3[101];
    char jono4[101];
    char merkki = 'a';

    printf("Anna merkkijono max 100 merkkia> "); // jono 1
    fgets(jono, 101, stdin);

    printf("Anna merkkijono max 100 merkkia> "); // jono 2
    fgets(jono1, 101, stdin);

    printf("Anna merkkijono max 100 merkkia> "); // jono 3
    fgets(jono2, 101, stdin);

    printf("Anna merkkijono max 100 merkkia> "); // jono 4
    fgets(jono3, 101, stdin);

    printf("Anna merkkijono max 100 merkkia> "); // jono 5
    fgets(jono4, 101, stdin);

    if (jono[0] == merkki)
    {
        printf("\na -merkilla alkava merkkijono %s", jono);
    }

    if (jono1[0] == merkki)
    {
        printf("\na -merkilla alkava merkkijono %s", jono1);
    }

    if (jono2[0] == merkki)
    {
        printf("\na -merkilla alkava merkkijono %s", jono2);
    }

    if (jono3[0] == merkki)
    {
        printf("\na -merkilla alkava merkkijono %s", jono3);
    }

    if (jono4[0] == merkki)
    {
        printf("\na -merkilla alkava merkkijono %s", jono4);
    }



    return 0;
}

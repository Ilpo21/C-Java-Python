#include <stdio.h>
#include <string.h>

int main(void)
{
    char jono[101];
    char jono1[101];
    char jono2[101];
    char jono3[101];
    char jono4[101];

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

    if (jono[strlen(jono) - 2] == 'n' && jono[strlen(jono) - 3] == 'e')
    {
        printf("\nen -merkkijonoon paattyva merkkijono %s", jono);
    }

    if (jono1[strlen(jono1) - 2] == 'n' && jono1[strlen(jono1) - 3] == 'e')
    {
        printf("\nen -merkkijonoon paattyva merkkijono %s", jono1);
    }

    if (jono2[strlen(jono2) - 2] == 'n' && jono2[strlen(jono2) - 3] == 'e')
    {
        printf("\nen -merkkijonoon paattyva merkkijono %s", jono2);
    }

    if (jono3[strlen(jono3) - 2] == 'n' && jono3[strlen(jono3) - 3] == 'e')
    {
        printf("\nen -merkkijonoon paattyva merkkijono %s", jono3);
    }

    if (jono4[strlen(jono4) - 2] == 'n' && jono4[strlen(jono4) - 3] == 'e')
    {
        printf("\nen -merkkijonoon paattyva merkkijono %s", jono4);
    }

    return 0;
}
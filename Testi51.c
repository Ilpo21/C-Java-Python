#include <stdio.h>
#include <string.h>

int main(void)
{
    char jono1[50];
    char jono2[50];
    char jono3[50];
    char jono[200];
    char jonov[200] = {};

    printf("\nAnna 1. rivi >\n");
    fgets(jono1, 50, stdin);
    printf("\nAnna 2. rivi >\n");
    fgets(jono2, 50, stdin);
    printf("\nAnna 3. rivi >\n");
    fgets(jono3, 50, stdin);

    strcat(jono, jono1);
    strcat(jono, jono2);
    strcat(jono, jono3);

    for (int i = 0; jono[i]; i++)
    {
        if (jono[i] == (65 + 1) || jono[i] == (97 + 1))
        {
            jonov[i]++;
        }
    }

    for (int i = 0; i < jono[i]; i++)
    {
        printf("%s\n", jonov[i]);
    }
}
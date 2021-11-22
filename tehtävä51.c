#include <stdio.h>
#include <string.h>

int main(void)
{
    char jono1[50];
    char jono2[50];
    char jono3[50];
    char jono[1000] = {};
    char jonov[1000] = {};

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
        if (jono[i] == 'A' || jono[i] == 'a')
        {
            jonov[i]++;
        }

        else if (jono[i] == 'B' || jono[i] == 'b')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'C' || jono[i] == 'c')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'D' || jono[i] == 'd')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'E' || jono[i] == 'e')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'F' || jono[i] == 'f')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'G' || jono[i] == 'g')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'H' || jono[i] == 'h')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'I' || jono[i] == 'i')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'J' || jono[i] == 'j')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'K' || jono[i] == 'k')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'L' || jono[i] == 'l')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'M' || jono[i] == 'm')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'N' || jono[i] == 'n')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'O' || jono[i] == 'o')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'P' || jono[i] == 'p')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'Q' || jono[i] == 'q')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'R' || jono[i] == 'r')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'S' || jono[i] == 's')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'T' || jono[i] == 't')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'U' || jono[i] == 'u')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'V' || jono[i] == 'v')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'W' || jono[i] == 'w')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'X' || jono[i] == 'x')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'Y' || jono[i] == 'y')
        {
            jonov[i]++;
        }
        else if (jono[i] == 'Z' || jono[i] == 'z')
        {
            jonov[i]++;
        }
    }

    for (int i = 0; i < jonov[i]; i++)
    {
        puts(jonov);
    }

    return 0;
}
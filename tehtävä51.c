#include <stdio.h>
#include <string.h>

int main(void)
{
    char jono1[50];
    char jono2[50];
    char jono3[50];
    char jono[1000] = {};
    char jonov[300] = {};

    printf("\nAnna 1. rivi >\n");
    fgets(jono1, 50, stdin);
    printf("\nAnna 2. rivi >\n");
    fgets(jono2, 50, stdin);
    printf("\nAnna 3. rivi >\n");
    fgets(jono3, 50, stdin);

    for (int i = 0; jono1[i]; i++)
    {
        if (jono1[i] == 'A' || jono1[i] == 'a')
        {
            jonov[i] += 1;
        }

        else if (jono1[i] == 'B' || jono1[i] == 'b')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'C' || jono1[i] == 'c')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'D' || jono1[i] == 'd')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'E' || jono1[i] == 'e')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'F' || jono1[i] == 'f')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'G' || jono1[i] == 'g')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'H' || jono1[i] == 'h')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'I' || jono1[i] == 'i')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'J' || jono1[i] == 'j')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'K' || jono1[i] == 'k')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'L' || jono1[i] == 'l')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'M' || jono1[i] == 'm')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'N' || jono1[i] == 'n')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'O' || jono1[i] == 'o')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'P' || jono1[i] == 'p')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'Q' || jono1[i] == 'q')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'R' || jono1[i] == 'r')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'S' || jono1[i] == 's')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'T' || jono1[i] == 't')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'U' || jono1[i] == 'u')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'V' || jono1[i] == 'v')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'W' || jono1[i] == 'w')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'X' || jono1[i] == 'x')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'Y' || jono1[i] == 'y')
        {
            jonov[i]++;
        }
        else if (jono1[i] == 'Z' || jono1[i] == 'z')
        {
            jonov[i]++;
        }
    }

    for (int i = 0; i < 50; i++)
    {
        printf("%s", jonov);
    }

    return 0;
}
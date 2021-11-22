#include <stdio.h>

void isot(char[]);
void pienet(char[]);

int main()
{
    char jono[101];

    printf("Anna merkkijono (max 100 merkkia) >");
    fgets(jono, 101, stdin);

    pienet(jono);

    printf("\n%s\n", jono);

    isot(jono);

    printf("%s", jono);
}

void isot(char n[])
{
    int merkki = 0;

    while (n[merkki] != '\0')
    {
        if (n[merkki] >= 'a' && n[merkki] <= 'z')
        {
            n[merkki] = n[merkki] - 32;
        }
        n++;
    }
}

void pienet(char m[])
{
    int merkki = 0;

    while (m[merkki] != '\0')
    {
        if (m[merkki] >= 'A' && m[merkki] <= 'Z')
        {
            m[merkki] = m[merkki] + 32;
        }
        m++;
    }
}
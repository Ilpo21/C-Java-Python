#include <string.h>
#include <stdio.h>
// abcdefghijklmnopqrstuvwxyz
int main()
{
    char s[1000], c;
    char aakkonen[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i, count = 0;
    int merkki, kirjain;
    char jono

        printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c = getchar();

    for (i = 0; s[i]; i++)
    {
        if (s[i] == aakkonen[i] || s[i] == 'A')
        {
            count++;
        }
    }
    for (size_t i = 0; i < count; i++)
    {
        jono[merkki][kirjain] <= 'a' || jono[merkki][kirjain] >= 'z';
    }

    printf("character '%c' occurs %d times \n ", c, count);

    return 0;
}
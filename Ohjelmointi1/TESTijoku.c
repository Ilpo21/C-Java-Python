#include <stdio.h>
#include <string.h>

int main(void)
{

    char rivi[101];
    int i, x, n;
    while (i < 5)
    {
        printf(" anna jono >");
        fgets(rivi, 100, stdin);
        i++;
        if (rivi[0] == 'a')
        {
            x++;
        }
    }
    for (i = 0; i < x; i++)
    {
        printf("%s", rivi);
    }
    return 0;
}
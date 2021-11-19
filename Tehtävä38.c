#include <stdio.h>
int onkoKarkaus(int vuosi);

int main(void)
{
    int a, b, c;
    printf("Anna vuosi:\n");
    scanf("%d", &a);
    b = onkoKarkaus(a);
    if (b == 1)
    {
        printf("Vuosi %d on karkausvuosi", a);
    }
    else
        printf("Vuosi %d ei ole karkausvuosi", a);
}

int onkoKarkaus(int vuosi)
{

    if (vuosi % 400 == 0)
    {
        return 1;
    }
    else if (vuosi % 100 == 0)
    {
        return 0;
    }
    else if (vuosi % 4 == 0)
    {
        return 1;
    }

    else
        return 0;
}

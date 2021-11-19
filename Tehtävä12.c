#include <stdio.h>

int main(void)
{
    int c;
    int f;
    printf("Celsius\tFahrenheit\n");
    for (c = -10; c <= 10; c++)
    {
        f = (c * 10 * 1.8) + 32;
        printf("\n%5.d%12.2d", c * 10, f);
    }
    return 0;
}
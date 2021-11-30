#include <stdio.h>

int main(void)
{

    int k;

    for (k = 1; k < 11; k = k + 1)
    {
        printf("%-7d\n%-7d\t%-7d\t%-7d\t", 1000 * k, k, k * 10, k * 100);
    }

    return 0;
}
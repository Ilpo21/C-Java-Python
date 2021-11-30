#include <stdio.h>
int main(void)
{
    int a;
    int luku;
    int desi;
    int x = 1;
    int z = 0;

    printf("Anna Binaari >");
    scanf("%d", &a);

    while (a > 0)
    {
        luku = a % 10;
        desi = luku * x;

        z = z + desi;
        x = x * 2;
        a = a / 10;
    }

    printf("%d", z);
    return 0;
}
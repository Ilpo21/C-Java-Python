#include <stdio.h>
int main(void)
{
    double b = 0;
    double i;
    double sum = 0;
    double c;
    double r;
    double z;

    for (r = 1; r >= 0; b++)
    {
        printf("luku> ");
        scanf("%lf", &i);
        r = i;
        sum = sum + i;
    }
    i = i * (-1);

    sum = sum + i;
    c = sum / (b - 1);
    printf("%.2lf", c);

    return 0;
}
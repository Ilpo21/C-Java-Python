#include <stdio.h>
int main(void)
{
    double b = 0;
    double i;
    double sum = 0;
    double c;
    do
    {

        printf("luku>");

        sum = sum + i;
        b = b + 1;
        scanf("%lf", &i);

    } while (i >= 0);
    {
        c = sum / (b - 1);
        printf("%.2lf", c);
    }

    return 0;
}
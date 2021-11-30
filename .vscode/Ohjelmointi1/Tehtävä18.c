//ohjelma laskee yhteen käyttäjän syöttämiä reaalilukuja kunnes negatiivinen
// laskee keskiarvon 2 desimaali.
#include <stdio.h>
int main(void)
{
    double b = 0;
    double i = 0;
    double r;
    double sum = 0;
    double c;
    while (i > -1)
    {

        printf("luku>");
        scanf("%lf", &i);

        while (i > -1)
        {

            r = i;
            sum = sum + r;
            b = b + 1;
            break;
        }
    }
    c = sum / b;
    printf("%.2lf", c);
    return 0;
}
#include <stdio.h>
int main(void)
{
    int a;
    int sum = 0;
    int r;
    int org;
    int b, c, d, e = 0;
    char z[9];

    printf("Anna 5 numeroa>");
    scanf("%d", &a);

    org = a;
    if (a > 0)
    {

        while (a > 0)
        {
            r = a % 10;
            sum = sum * 10 + r;
            a = a / 10;
        }
        printf("Luku %05d eroteltuna:", org);
        while (sum > 0)
        {
            r = sum % 10;
            b = b * 10 + r;
            printf(" %d ", b);
            sum = sum / 10;
            b = 0;
        }
    }
}
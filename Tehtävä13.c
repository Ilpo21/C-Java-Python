#include <stdio.h>
int main(void)
{

    int a;
    int b;

    for (a = 1; a <= 8; ++a) // voi myös tehä a=a+1
    {
        for (b = 1; b <= a; ++b)
        {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}

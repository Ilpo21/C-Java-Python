#include <stdio.h>
int main(void)
{

    int a;
    int b;
    int c;

    for (a = 0; a < 8; a = a + 1) // voi myös tehä ++a tai a++
    {
        for (b = 8; b > a; b = b - 1)
            printf(" ");
        {

            for (c = 1; c <= a; c = c + 1) //rehellisesti en ymmärrä miksi printtien pitää olla juurikin noin että sain toimimaan. Ihan vahingossa onnistuin.

                printf("a");
        }
        printf("\n");
    }
    return 0;
}
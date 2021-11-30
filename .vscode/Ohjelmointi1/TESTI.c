#include <stdio.h>
int main()
{
    int i = 1;
    int k = 10;
    int l = 100;
    int j = 1000;

    while (i <= 10)
    {
        i++;
        while (j <= 10)
        {
            j + 10;
            while (k <= 10)
            {
                k + 100;

                while (l <= 10)
                {
                    l + 1000;
                    printf("%d %d %d %d", i, k, l, j);
                }
            }
        }
    }

    return 0;
}
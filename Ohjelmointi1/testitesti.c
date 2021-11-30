/**
 * C program to print all Perfect numbers between 1 to n
 */

#include <stdio.h>

int main()
{
    int i, j, end, sum;

    /* Input upper limit to print perfect number */

    printf("All Perfect numbers between 1 to 100000:\n", end);

    /* Iterate from 1 to end */
    for (i = 1; i <= 100000; i++)
    {
        sum = 0;

        /* Check whether the current number i is Perfect number or not */
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        /* If the current number i is Perfect number */
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
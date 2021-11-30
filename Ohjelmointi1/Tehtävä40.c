#include <stdio.h>
int main(void)
{
    int arr[11];
    int arr1[11];
    int a, b, c, i, j;

    for (i = 1; i < 11; i++)
    {
        printf("Syota %d. luku> ", i);
        scanf("%d", &arr[i]);
    }

    for (j = 10, a = 1; j >= 0; j--, a++)
    {
        arr1[a] = arr[j];
    }

    for (c = 1; c < 11; c++)
    {
        printf("%d\t%d\n", arr[c], arr1[c]);
    }
    return 0;
}
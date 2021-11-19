
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int numero(int k);

int main(void)
{
    srand(time(NULL));
    int array[20] = {0};
    int values[20];
    int j = 1;

    for (int i = 0; i < 20; i++, j++)
    {
        values[i] = j;
    }
    int left = 20;

    for (int i = 0; i < 20; i++)
    {
        int n = numero(left);
        array[i] = values[n];
        left--;
        values[n] = values[left];
    }

    for (int j = 0; j < 20; j++)
    {
        printf("%d\n", array[j]);
    }
    return 0;
}
int numero(int k)
{
    int z = 20;
    int x;
    int i = rand() % k;
    z--;
    x = i;
    return x;
}
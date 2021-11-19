#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int numero(int k);
int main(void)
{
    srand(time(NULL));
    int arr[20] = {0};
    int arr1[20];
    int j = 1;
    for (int i = 0; i < 20; i++, j++)
    {
        arr1[i] = j;
    }
    int miinus = 20;

    for (int i = 0; i < 20; i++)
    {
        int x = numero(miinus);
        arr[i] = arr1[x];
        miinus--;
        arr1[x] = arr1[miinus];
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}

int numero(int k)
{
    int i = rand() % k;
    return i;
}
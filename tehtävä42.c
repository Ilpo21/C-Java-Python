#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int flip();
int main(void)
{
    int heitto;
    int tulos = 0;
    int arr[10];
    int arr1[10];
    int x;

    srand(time(NULL));

    for (heitto = 1; heitto <= 36000; heitto++)
    {
        int tulos;
        int i = rand() % 6;
        int j = rand() % 6;

        tulos = i + j;
        if (tulos == 2) // numero 2
        {
            arr[0]++;
        }
        else if (tulos == 3) // numero 3
        {
            arr[1]++;
        }
        else if (tulos == 4) // numero 4
        {
            arr[2]++;
        }
        else if (tulos == 5) // numero 5
        {
            arr[3]++;
        }
        else if (tulos == 6) // numero 6
        {
            arr[4]++;
        }
        else if (tulos == 7) // numero 7
        {
            arr[5]++;
        }
        else if (tulos == 8) // numero 8
        {
            arr[6]++;
        }
        else if (tulos == 9) // numero 9
        {
            arr[7]++;
        }
        else if (tulos == 10) // numero 10
        {
            arr[8]++;
        }
        else if (tulos == 11) // numero 11
        {
            arr[9]++;
        }
        else if (tulos == 12) // numero 12
        {
            arr[10]++;
        }
    }
    int z = 2;
    for (int i = 0; i < 11; i++, z++)
    {
        printf("\n%d\t%d", z, arr[i]);
    }
    printf("\nYhteensa 36000");
    return 0;
}
int flip()
{
    int x;
    int i = rand() % 6;
    int j = rand() % 6;

    x = i + j;
    return x;
}
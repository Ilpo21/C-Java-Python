#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int flip();
int main(void)
{
    int heitto;
    int tulos = 0;
    int arr[13]={};
    

    srand(time(NULL));

    for (heitto = 0; heitto <= 36000; heitto++)
    {
        
 int i = rand() % 6+1;
                     int j = rand() % 6+1;
                tulos = i + j;
    arr[tulos]++;
    }
    int z = 2;
                    for (int i = 2; i < 13; i++, z++)
    {
                    printf("\n%d\t%d", i, arr[i]);
    }
    printf("\nYhteensa 36000");
    return 0;
}

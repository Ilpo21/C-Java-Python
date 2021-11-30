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
          arr[tulos]++;
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
     int tulos;
     int i = rand() % 6;
     int j = rand() % 6;
     tulos = i + j;
     return tulos;
}


#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int flip();
int main(void)
{
    int heitto;
    int kruuna = 0;
    int klaava = 0;
    srand(time(NULL));

    for (heitto = 1; heitto <= 100; heitto++)
    {

        if (flip() == 0)
            kruuna++;
        else
            klaava++;
    }
    printf("\nHeittojen tulos: %d kruunua ja %d klaavaa\n", kruuna, klaava);

    return 0;
}
int flip()
{
    int i = rand() % 2;

    if (i == 0)
        return 0;

    else
        return 1;
}
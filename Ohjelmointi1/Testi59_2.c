#include <stdio.h>
#include <string.h>
#define Jengi 50

typedef struct
{
    char array[Jengi]; // jengi nimi
    int voitot;        // kenttä voitoille
    int tappiot;       // kenttä tappioille
    int tulos;         // kenttä tulokselle "x-y"
} Tiimit;

int main(void)
{
    Tiimit tiimi[10];
    int maara;
    int v1 = 0, v2 = 0, v3 = 0;
    int i = 0;
    printf("Syota joukkueiden maara");
    scanf("%d", &maara);

    for (int i = 0; i < maara; i++)
    {
        printf("Syota tiimin nimi >");
        scanf("%s", &tiimi[i].array);
        printf("Syota tiimin voitot >");
        scanf("%d", &tiimi[i].voitot);
        printf("Syota tiimin tappiot >");
        scanf("%d", &tiimi[i].tappiot);
    }

    printf("\n1. joukkue:%s\tTiimi1 tilanne: %d voittoa ja %d tappiota\n",
           tiimi1.array, tiimi1.voitot, tiimi1.tappiot);
    printf("2. joukkue:%s\tTiimi2 tilanne: %d voittoa ja %d tappiota\n\n",
           tiimi2.array, tiimi2.voitot, tiimi2.tappiot);
    if (maara == 3)
    {
        v1 = Tiimit[1].voitot - Tiimit[1].tappiot;
        v2 = Tiimit[2].voitot - Tiimit[2].tappiot;
        v3 = Tiimit[3].voitot - Tiimit[3].tappiot;
    }
    else
    {
        v1 = Tiimit[1].voitot - Tiimit[1].tappiot;
        v2 = Tiimit[2].voitot - Tiimit[2].tappiot;
    }
    if (v1 > v2)
    {
        if (v1 > v3) // 1 suurin 2 toinen 3 pienin
        {
            printf("\n Largest number = %d \n", v1);
        }
        else // 3 suurin 1 toinen 3 pienin
        {
            printf("\n Largest number = %d \n", v3);
        }
    }
    else if (v2 > v3) // 1 suurin 2 toinen 3 pienin
    {
        printf("\n Largest number = %d \n", v2);
    }
    else
    {
        printf("\n Largest number = %d \n", v3);
    }
    if (/* condition */) // 1 suurin 2 toinen 3 kolmas
    {
        /* code */
    }
    else if (/* condition */) // 2 suurin 3 toinen 1 pienin
    {
        /* code */
    }
    else if (/* condition */) // 3 suurin 1 toinen 2 pienin
    {
        /* code */
    }

    for (i = 0; i < maara; i++)
    {
        printf("%d. joukkue:%s\tTiimi2 tilanne: %d voittoa ja %d tappiota\n\n",
               i, tiimi[i].array, tiimi[i].voitot, tiimi[i].tappiot);
    }
}
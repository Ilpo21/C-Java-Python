#include <stdio.h>
#include <string.h>
#define Jengi 100

struct Taulukko
{
    char array[Jengi]; // jengi nimi
    int voitot;        // kenttä voitoille
    int tappiot;       // kenttä tappioille
    int tulos;         // kenttä tulokselle "x-y"
} Tiimit[50], z;

int main(void)
{
    int i = 0, j = 0;
    int luku = 0;

    printf("Paljon joukkueita");
    scanf("%d", &luku);

    for (i = 1; i <= luku; i++)
    {
        printf("Syota tiimin nimi >");
        scanf(" %149[^\n]", Tiimit[i].array);
        printf("Syota tiimin voitot >");
        scanf("%d", &Tiimit[i].voitot);
        printf("Syota tiimin tappiot >");
        scanf("%d", &Tiimit[i].tappiot);

        Tiimit[i].tulos = Tiimit[i].voitot - Tiimit[i].tappiot; // pistetilanne
    }
    for (i = 1; i <= luku; i++)
    {
        for (j = 1; j <= luku - i; j++)
        {
            if (Tiimit[i].tulos < Tiimit[j + 1].tulos)
            {
                z = Tiimit[j];
                Tiimit[j] = Tiimit[j + 1];
                Tiimit[j + 1] = z;
            }
        }
    }
    for (i = 1; i <= luku; i++)
    {
        printf("\n%d. joukkue:\t %s tilanne: %d voittoa ja %d tappiota", i, Tiimit[i].array, Tiimit[i].voitot, Tiimit[i].tappiot);
    }
    return 0;
}
// Kirjoita ohjelma, joka tallettaa tietoja jääkiekkojoukkueista. Ohjelma kysyy ensiksi käyttäjältä joukkueiden määrän.
// Sen jälkeen jokaisesta joukkueesta luetaan seuraavat tiedot:

// Joukkueen nimi, sisältäen kotipaikan nimen (esim. Oulun Kärpät)
// Voittojen määrä
// Tappioiden määrä
// Ohjelma lukee tiedot ja tallettaa ne tietueeseen. Tämän jälkeen ohjelma lajittelee listan joukkueiden voittojen
// ja häviöiden perusteella (= voittojen määrä - häviöitten määrä)
// ja tulostaa tiedot paremmuusjärjestyksessä seuraavasti muotoiltuna:

// ****************************************
//          TULOSLISTA
// ****************************************

//  1. joukkue:          Tiimi1 tilanne: # voittoa ja # tappiota
//  2. joukkue:          Tiimi2 tilanne: # voittoa ja # tappiota

// Järjestelyyn voit käyttää erillistä funktiota, josta on malli annettu tehtävän 63 yhteydessä (voit joutua hieman sitä muokkaamaan tämän tehtävän tarkoitukseen).

#include <stdio.h>
#include <string.h>
#define Jengi 50

typedef struct
{
    char array[Jengi]; // jengi nimi
    int voitot;        // kenttä voitoille
    int tappiot;       // kenttä tappioille
    int tulos;         // kentta tulokselle
} Tiimit;

int vertailu(Tiimit tulos1, Tiimit tulos2);

int main(void)
{
    Tiimit tiimi1, tiimi2;

    int x = 0, y = 0, a = 0, b = 0;
    int h = 0, j = 0;
    char jengi[Jengi];
    char jengi2[Jengi];
    int maara = 0;
    char pisteet[Jengi];
    int vastaus = 0;
    int v1 = 0, v2 = 0, v3 = 0;

    printf("Syota joukkueiden maara");
    scanf("%d", &maara);

    for (int i = 0; i < maara; i++)
    {
        printf("Syota tiimin nimi >");
        scanf("%s", Tiimit[i].array);
        printf("Syota tiimin voitot >");
        scanf("%d", &Tiimit[i].voitot);
        printf("Syota tiimin tappiot >");
        scanf("%d", &Tiimit[i].tappiot);
    }
    for (int j = 0; j < maara; j++)
    {
        for (int i = 0; i < maara; i++)
        {
            Tiimit[i].tulos = Tiimit[i].voitot - Tiimit[i].tappiot;
        }
    }

    if (vastaus == 1)
    {
        
    }

    h = x - y;
    j = a - b;

    if (h > j)
    {
        printf("\n***************************\n");
        printf("\tTULOSLISTA\n");
        printf("***************************\n");

        printf("\n1. joukkue:%s\tTiimi1 tilanne: %d voittoa ja %d tappiota\n",
               tiimi1.array, tiimi1.voitot, tiimi1.tappiot);
        printf("2. joukkue:%s\tTiimi2 tilanne: %d voittoa ja %d tappiota\n\n",
               tiimi2.array, tiimi2.voitot, tiimi2.tappiot);
    }
    else
    {
        printf("\n***************************\n");
        printf("\tTULOSLISTA\n");
        printf("***************************\n");

        printf("\n1. joukkue:%s\tTiimi1 tilanne: %d voittoa ja %d tappiota\n",
               tiimi2.array, tiimi2.voitot, tiimi2.tappiot);
        printf("2. joukkue:%s\tTiimi2 tilanne: %d voittoa ja %d tappiota\n\n",
               tiimi1.array, tiimi1.voitot, tiimi1.tappiot);
    }

    return 0;
}

int vertaa(Tiimit t1, Tiimit t2)
{
    if (strcmp(t1.array, t2.array) == 0 && t1.tulos >= t2.tulos)

        return (1);
    else
        return (0);

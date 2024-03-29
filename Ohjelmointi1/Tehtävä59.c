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
} Tiimit;

int main(void)
{
    Tiimit tiimi1, tiimi2;

    int x = 0, y = 0, a = 0, b = 0;
    int h = 0, j = 0;
    char jengi[Jengi];
    char jengi2[Jengi];
    printf("Tiimi 1");
    fgets(jengi, Jengi, stdin);
    printf("Tiimi 1 voitot");
    scanf("%d", &x);
    printf("tiimi 1 tappiot");
    scanf("%d", &y);

    strcpy(tiimi1.array, jengi);
    tiimi1.voitot = x;
    tiimi1.tappiot = y;

    printf("Tiimi 2");
    fgets(jengi2, Jengi, stdin);
    printf("Tiimi 2 voitot");
    scanf("%d", &a);
    printf("tiimi 2 tappiot");
    scanf("%d", &b);

    strcpy(tiimi2.array, jengi2);
    tiimi2.voitot = a;
    tiimi2.tappiot = b;

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
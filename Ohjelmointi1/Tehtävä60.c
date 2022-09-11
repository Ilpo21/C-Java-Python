// Tee ohjelma, jossa talletetaan tason pisteiden koordinaatteja (5 kpl) tietuetaulukkoon.
// Talletetut pisteet kuvaavat toisiinsa liittyviä suoria, ohjelma laskee ja tulostaa suorien muodostaman ketjun pituuden
// sekä kuinka pitkä matka olisi "linnuntietä" alku- ja loppupisteiden välillä.

// Kahden pisteen välinen etäisyys voidaan laskea kaavalla

// kaava kahden pisteen välisen etäisyyden laskemiseen
// etaisyys=(neliöjuuri)(piste1.x-piste2.x)^2+(piste1.y-piste2.y)^2

// Muotoile lopputulos seuraavasti:

// Etäisyys mutkitellen on #.###
// Alku ja loppupisteiden valinen etaisyys on #.###

#include <stdio.h>
#include <string.h>
#include <math.h>

struct Taulukko
{
    double pisteety;
    double pisteetx;
} Pituus[50], z, y;

int main(void)
{
    int i = 0, j = 0;
    double tulos = 0;
    double lintu = 0;
    double x1 = 0, x2 = 0, y1 = 0, y2 = 0;

    for (i = 1; i < 6; i++)
    {
        printf("anna koordinaatti X>\n ");
        scanf("%lf", &Pituus[i].pisteetx);
        printf("anna koordinaatti Y>\n ");
        scanf("%lf", &Pituus[i].pisteety);
    }

    for (i = 1; i < 5; i++)
    {
        x1 = Pituus[i].pisteetx;
        x2 = Pituus[i + 1].pisteetx;
        y1 = Pituus[i].pisteety;
        y2 = Pituus[i + 1].pisteety;
        tulos += sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); // piste kerrallaan
    }
    x1 = 0;
    x2 = 0;
    y1 = 0;
    y2 = 0;

    x1 = Pituus[1].pisteetx;
    x2 = Pituus[5].pisteetx;
    y1 = Pituus[1].pisteety;
    y2 = Pituus[5].pisteety;
    lintu = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); // linnuntie

    printf("Etaisyys mutkitellen on %.3lf\n", tulos);
    printf("Alku ja loppupisteiden valinen etaisyys on %.3lf", lintu);
    return 0;
}
// Tee ohjelma, joka lukee standard inputista (stdin) kaksi merkkijonoa tekstitiedoston nimiksi,
// avaa ko. tiedostot ja  vertaa tiedostojen sisältöjä. Ohjelma ilmoittaa onko tiedostojen sisällöt identtisiä.
// Ohjelman onnistuneen ajon ainoana tulostuksena on lause joka on sisällöltään joko:

// "Tiedostot ovat sisällöltään identtiset."

// tai

// "Tiedostot eivät ole sisällöltään identtiset."

// Voit käyttää virhetilanteiden tarkastuksessa ja jäljittämisessä muitakin tulostuksia,
// mutta niitä ei verrata tehtävän testauksessa ja arvioinnissa.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 100 // pituus 100s

int compareFile(FILE *pfile1, FILE *pfile2, int *rivi, int *pysty);

int main(void)
{
    char file1[LEN];
    char file2[LEN];
    FILE *pfile1;
    FILE *pfile2;
    int num[LEN];

    int diff;
    int rivi, pysty;

    printf("Tiedosto 1>\n");
    scanf("%s", &file1);
    printf("Tiedosto 2>\n");
    scanf("%s", &file2);

    pfile1 = fopen(file1, "r");
    pfile2 = fopen(file2, "r");

    if (pfile1 == NULL || pfile2 == NULL)
    {
        printf("Virhe\n");
        return 0;
    }

    diff = compareFile(pfile1, pfile2, &rivi, &pysty); // funktio kutsu ja tulos

    if (diff == 0)
    {
        printf("\nTiedostot ovat sisällöltään identtiset.\n");
    }
    else
    {
        printf("\nTiedostot eivät ole sisällöltään identtiset.\n");
    }

    fclose(pfile1);
    fclose(pfile2);

    return 0;
}

int compareFile(FILE *pfile1, FILE *pfile2, int *rivi, int *pysty)
{
    char ch1, ch2;

    *rivi = 1;
    *pysty = 0;
    printf("\nfunktiossa\n");

    do
    {
        // molemmista tiedostoista yks kirjain
        ch1 = fgetc(pfile1);
        ch2 = fgetc(pfile2);

        if (ch1 == '\n')
        {
            *rivi += 1;
            *pysty = 0;
        }

        // jos merkki ei oo sama niin -1
        if (ch1 != ch2)
            return -1;

        *pysty += 1;

    } while (ch1 != EOF && ch2 != EOF);

    // jos molemmat on loppu
    if (ch1 == EOF && ch2 == EOF)
        return 0;
    else
        return -1;
}
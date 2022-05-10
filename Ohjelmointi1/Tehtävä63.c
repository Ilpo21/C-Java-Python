// Tee ohjelma, joka laskee tekstitiedoston (teksti.txt) rivien ja merkkien lukumäärät ja
// tulostaa tiedot (alla esimerkkinumerot - ohjelmasi tulee laskea toki varsinaiset arvot ja näyttää ne
// alla olevien numeroiden sijasta) kuvaruudulle muodossa...

// Rivit: 234
// Merkit: 2334

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *pFile;
    int num[300];
    char c = 0, z = 0;
    int laskuri1 = 0;
    int laskuri2 = 0;
    char line[5000];
    int pt, pt2;

    pFile = fopen("TESTI.txt", "r");
    if (pFile == NULL)
    {
        printf("File empty");
        return 0;
    }

    for (c = getc(pFile); c != EOF; c = getc(pFile))
    {
        if (c == '\n')
        {
            laskuri1++;
        }
        else
            laskuri2++;
    }

    FILE *fptr = fopen("Testi.txt", "r");
    char line1[80];
    char *dam = calloc(1000, sizeof(char));
    while (fscanf(fptr, "%79[^\n]\n", line1) == 1)
    {
        strcat(dam, line1);
        strcat(dam, "\n");
    }
    fclose(fptr);
    int asd;
    asd = strlen(dam);

    printf("toimisko%d", asd);

    // fclose(pFile);
    // pFile = fopen("TESTI.txt", "r");
    // for (z = getc(pFile); z == EOF; z = getc(pFile))
    // {
    //     if (z != '\0' && z != '\n')
    //     {
    //         laskuri2++;
    //     }
    // }
    // while (z != EOF && fscanf(pFile, "%d", &num[z]) == 1)
    // {
    //     z++;
    // }
    fclose(pFile);
    printf("Rivit: %d\n", laskuri1);
    printf("Merkit: %d", laskuri2);

    // fscanf(pFile, "%s", num);
    // while (fscanf(pFile, "%s", num) == 1)
    // {
    //     printf("%s\n", num);
    // }

    return 0;
}
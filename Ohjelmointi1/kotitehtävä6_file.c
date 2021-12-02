#include <stdio.h>
#include <string.h>

int lueluku(void);
double luenumero(void);
void kirjainString(char array[], int pituus);
void bufferi(void);

int main(void)
{
    char tilinumero[256];
    char pinnumero[256];
    char tarkistus[256];
    int tulos = 0;
    FILE *pFile;
    int saldo;

    do
    {
        printf("\nAnna tilinumero:");
        fgets(tilinumero, 256, stdin);

        if (tilinumero[strlen(tilinumero) - 1] == '\n')

            tilinumero[strlen(tilinumero) - 1] = '\0';

        else
        {
            bufferi();
        }

        strcat(tilinumero, ".acc");

        if ((pFile = fopen(tilinumero, "r")) != NULL)
        {
            printf("\nAnna pin-koodi:");
            fgets(pinnumero, 256, stdin);
            if (pinnumero[strlen(pinnumero - 1)] == '\n')
                pinnumero[strlen(pinnumero) - 1] = '\0';

            else
            {
                bufferi();
            }
            fgets(tarkistus, 256, pFile);

            do
            {
                if (tarkistus[strlen(tarkistus) - 1] == '\n')
                    tarkistus[strlen(tarkistus) - 1] = '\0';

                if (tarkistus[strlen(tarkistus) - 1] == '\r')
                    tarkistus[strlen(tarkistus) - 1] = '\0';

                if ((tulos = strcmp(pinnumero, tarkistus)) == 0)
                {
                    fscanf(pFile, "%d", &saldo);
                    printf("\nSaldosi on:%d", saldo);
                }
                else
                    printf("Väärä pinkoodi, kokeile uudelleen");

            } while (tulos);
        }
        else
        {
            printf("Tilisi on suljettu.\n");
        }
    } while (1);
    return 0;
}

void bufferi(void)
{
    while (fgetc(stdin) != '\n')
        ;
}

int lueluku(void)
{
    int numero, status;
    char kirjain;

    while ((status = scanf("%d%c", &numero, &kirjain)) == 0 || (2 == status && kirjain != '\n'))
    {
        bufferi();
        printf("\nEt antanut numeroa, yritä uudelleen:");
    }
    return numero;
}
double luenumero(void)
{
    double numero;
    char kirjain;
    int status;

    while ((status = scanf("%lf%c", &numero, &kirjain)) == 0 || 2 == status && kirjain != '\n')
    {
        bufferi();
        printf("\nEt antanut numeroa, yritä uudelleen:");
    }
    return numero;
}

void kirjainString(char array[], int pituus)
{
    fgets(array, pituus, stdin);
    if (array[strlen(array) - 1] == '\n')
    {
        array[strlen(array) - 1] = '\0';
    }
    else
        bufferi();
}
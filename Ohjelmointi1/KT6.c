#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int lueluku(void);
double luenumero(void);
void kirjainString(char array[], int pituus);
void bufferi(void);
int pankkilaskuri(int raha);
int seteli(int seteli, int *viisi, int *kaksi);

int main(void)
{

    int a, b, c;
    int valinta;
    int tili = 1000;
    int nosto;
    int laitto;

    char tilinumero[256];
    char pinnumero[256];
    char tarkistus[256];
    int tulos = 0;
    FILE *pFile;
    int saldo;

    do
    {
        printf("\nAnna tilinumero:");        //Annetaan tiedoston nimi
        fgets(tilinumero, 256, stdin);

        if (tilinumero[strlen(tilinumero) - 1] == '\n')

            tilinumero[strlen(tilinumero) - 1] = '\0';

        else //tyhjennys jos tarvetta
        {
            bufferi();
        }

        strcat(tilinumero, ".acc");

        if ((pFile = fopen(tilinumero, "r")) != NULL) //avaa tiedosto
        {
            printf("\nAnna pin-koodi:"); //Annetaan pinkoodi ja luetaan teidosto
            scanf("%s", pinnumero);
            if (pinnumero[strlen(pinnumero - 1)] == '\n')
                pinnumero[strlen(pinnumero) - 1] = '\0';

            else
            {
                bufferi();
            }
            fgets(tarkistus, 256, pFile);

            do //tarkastetaan onko oikea pinkoodi
            {
                if (tarkistus[strlen(tarkistus) - 1] == '\n')
                    tarkistus[strlen(tarkistus) - 1] = '\0';

                if (tarkistus[strlen(tarkistus) - 1] == '\r')
                    tarkistus[strlen(tarkistus) - 1] = '\0';

                if ((tulos = strcmp(pinnumero, tarkistus)) == 0)
                {
                    tulos = 0;
                    break;
                }
                else
                    printf("Väärä pinkoodi, kokeile uudelleen"); //jos väärä pinkoodi

            } while (tulos);

//jatketaan miten aikasemmassa tehtävässä oltiin tehty.
        loop:
            printf("\nValitse haluamasi palvelu\n1\tSaldo\n2\tNosto\n3\tTapahtumat\n4\tLopeta\n:"); // mitä ne haluaa tehä
            scanf("%d", &valinta);

            switch (valinta)
            {
            case 1: // SALDO
                c = pankkilaskuri(c);
                printf("\n Sinun Balanssi on: %d ", c);
                break;
            case 2:

                // NOSTO
                printf("\nValitse haluamasi summa:\n20\t100\n40\t120\n60\t140\n80\t240\n:"); // Noston summa
                scanf("%d", &nosto);
                if (nosto > tili || nosto == 10 || nosto == 30)
                {
                    printf("\n Ei mahdollista");
                }
                // Tässä kohtaa KOTITEHTÄVÄ 5
                // Elikkä kertoo kuink paljon 20 ja 50 euron seteleitä saa rahaa nostaessa.
                else
                {
                    int viisi, kaksi;
                    seteli(nosto, &viisi, &kaksi);
                    c = pankkilaskuri(nosto);
                    printf("\nOle hyva ja poista kortti.\nOta rahasi.\n%d kpl 20 euroa ja %d kpl 50 euroa", kaksi, viisi);
                    printf("\n Nykyinen balanssi on:%d", c);
                }
                break;
            case 3: // Tapahtumat
                printf("\nNosto\t240 euroa\nK-market\t44.36 euroa\nS-market\t39.79 euroa");
                break;
            case 4:
                printf("");
                break;
            default: // Antaa väärän luvun
                printf("\nEi mahdollista");
            }

            printf("\nKiitos automaatin kaytosta"); // Lopetus
            return 0;
        }
    } while (tulos);
}

int seteli(int seteli, int *viisi, int *kaksi) // funktio kotitehtävä 5. laskee halutut määrät 20 ja 50 seteleitä.
{
    int viis;
    *viisi = seteli / 50 - (seteli > 50 && seteli % 50 % 20);
    viis = *viisi;
    *kaksi = (seteli - viis * 50) / 20;
}
int pankkilaskuri(int raha) // laskuri nostoa varten
{

    int tili = 1000;
    tili = tili - raha;
    return tili;
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
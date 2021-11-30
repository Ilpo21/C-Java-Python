// Automatian Otto-automaatista voi nostaa vain 20 ja 50 euron seteleitä. Suurin kertanosto voi olla enintään 1000 euroa.

// Suunnittele aiempien kotitehtävien pankkiautomaattiohjelmaasi rahojen jakamisalgoritmi siten, että käyttäjä voi nostaa joko 20 euroa, 40 euroa tai enemmän,
// kymmenen euron välein(esim.50, 60, 70, 80, 90, 100, 110, 120, 130 jne.).Automaatti antaa rahat mahdollisimman suurina seteleinä.

// Esimerkiksi : 120 euron nostossa automaatti antaa 2 kpl 50 euron ja 1 kpl 20 euron seteliä.

// Esimerkiksi : 130 euron nostossa automaatti antaa 1 kpl 50 euron ja 4 kpl 20 euron seteliä.
// MUISTA MAHDOLLISIMMAN SUURET SETELIT
#include <stdio.h>

int main()
{
    int balanssi = 1000;
    int nosto;
    int seteli1, seteli2;

    printf("Anna noston suuruus. Max 1000 euroa:");
    scanf("%d", &nosto);

    // tarkista onko se syöte liia iso tai pieni
    if ((nosto >= 20) && (nosto <= balanssi) && (nosto % 10 == 0) && (nosto != 30))
    {

        while (nosto > 50)
        {

            seteli1++; // lisää 20 euroa aina kun syöte on isompi kui 50

            nosto -= 20;
        }

        if (nosto == 50) // lisää 50 kun syöte on ==
        {
            seteli2++;
        }

        else
        {
            seteli1 += 2; // jos syöte skippaa 50 ja menee pienemmäksi lisää 2x 20
        }

        printf("Sina saat %d kpl 20 euron ja %d kpl 50 euron seteleita\n", seteli1, seteli2);
    } // ei anna mahdollisimman suurina seteleinä.

    else
    {
        printf("Ei mahdollista.");
    }

    return 0;

    int seteli2 = nosto / 50 - (nosto > 50 && nosto % 50 % 20);
    int seteli1 = (nosto - seteli2 * 50) / 20;
    if (nosto != seteli2 * 50 + seteli1 * 20)
        printf("Cannot put it together.\n");
}
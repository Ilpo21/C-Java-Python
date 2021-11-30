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
    int seteli20, seteli50;
    printf("Anna noston suuruus. Max 1000 euroa:");
    scanf("%d", &nosto);

    // tarkista onko se syöte liia iso tai pieni
    if (nosto < 20 && nosto > 1000)
    {
        printf("Ei mahdollista.");
        return 0;
    }
    else
    {

        seteli50 = nosto / 50 - (nosto > 50 && nosto % 50 % 20);
        seteli20 = (nosto - seteli50 * 50) / 20;

        printf("Sina saat %d kpl 20 euron ja %d kpl 50 euron seteleita\n", seteli20, seteli50);

        return 0;
    }
}
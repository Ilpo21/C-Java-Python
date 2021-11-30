#include <stdio.h>
#include <string.h>
#define PITUUS 101

int main(void)
{
    char jono[101];
    char jono1[101];

    printf("Anna merkkijono max 100 merkkia> ");
    fgets(jono, PITUUS, stdin);

    strcpy(jono1, jono);
    for (int i = 0; jono[i]; i++) // tarkistaa kirjaimet jaa muuntaa ne pieniksi jos tarvetta
    {
        if (jono[i] >= 'A' && jono[i] <= 'Z')
            jono[i] += 32;
    }

    for (int i = 0; jono1[i]; i++) // tarkistaa kirjaimet ja muuntaa ne isoiksi jos tarvetta
    {
        if (jono1[i] >= 'a' && jono1[i] <= 'z')
            jono1[i] -= 32;
    }
    printf("%s\n", jono);
    printf("%s", jono1);

    return 0;
    // <65-90> <97-122> ASCII aakkosten rajat
    // jono[i]<65 && 122<jono[i]
    // jono[i] >= 65 && jono[i] <= 90 && jono[i] >= 97 && jono[i] <= 122
}
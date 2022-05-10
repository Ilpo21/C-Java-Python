// Kirjoita suomi - englanti atk-sanakirjaohjelma, joka käyttää tiedostoksi tallennettua sanakirjaa.
// Ohjelma pyytää sanan, joka voi olla suomeksi tai englanniksi. Ohjelma tulostaa sanan vastineen toisella kielellä muodossa

// Sana sana1 englanniksi on word1
// tai

// Sana word2 suomeksi on sana2
// Mikäli sanaa ei löydy sanakirjasta, tulostetaan virheilmoitus:

//  Sanaa haettava sana ei loytynyt sanakirjasta
// Sanat sijaitsevat tiedostossa sanakirja.txt jonka rakenne on seuraavanlainen:

// sana1suomeksi;sana1englanniksi
// sana2suomeksi;sana2englanniksi
// ...
// sanaNsuomeksi;sanaNenglanniksi
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    FILE *file;
    char word[100]; // input
    int i = 0;
    int k = 200;
    char line[100];
    char *key; // loppusana
    char *found;

    file = fopen("sanakirja.txt", "r");

    printf("Anna etsittava sana>\n");
    scanf("%s", &word);

    if (file == NULL) // jos tiedosto tyhjä jne..
    {
        printf("error");
        return 0;
    }

    // onko sanaa kirjastossa
    while (fgets(line, k, file))
    {
        char *found = strstr(line, word); // sana tallennus
        if (found != NULL)
        {
            i = 1;
            break;
        }
    }
    fclose(file);

    key = strtok(line, ";");
    key = strtok(NULL, ";");

    if (i == 1)
    {
        if (strcmp(word, line) == 0)
        {
            printf("%s", key); // sana englanniksi
        }
        else
        {
            printf("%s", line); // sana suomeksi
        }
    }
    if (i == 0)
    {
        printf("Sanaa %s ei loytynyt sanakirjasta", word);
    }
    return 0;
}

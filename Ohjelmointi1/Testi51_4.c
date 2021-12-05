#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int i,j;
    int numerot[26]={0};

    char jono[1000];
    char jono1[1000];
    char jono2[1000];

    printf("Anna merkkijono "); // jono 1
    fgets(jono, 1000, stdin);
    printf("Anna merkkijono "); // jono 2
    fgets(jono1, 1000, stdin);
    printf("Anna merkkijono "); // jono 3
    fgets(jono2, 1000, stdin);

    strcat(jono,jono1); //jonojen yhdistys
    strcat(jono,jono2);
    printf("Aakkonen\tKpl\n");
    while(jono[i]!='\0')
    {
        if (jono[i] >= 'a' || jono[i] <='z')
        {
            j=jono[i]-'a';
            numerot[j]++;
        }
        i++;
    }
    for ( i = 0; i < 26; i++) //printtausta
    {
        printf("%c\t\t%d\n",i+'a',numerot[i]);
    }
    return 0;
}
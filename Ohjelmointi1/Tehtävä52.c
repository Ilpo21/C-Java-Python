#include <stdio.h>
#include <string.h>
#define PITUUS 300
//isspace()

void valilyonti(char *array, char *array2);

int main(void)
{
char jono1[PITUUS],jono2[PITUUS], jono3[PITUUS];
char vali1[PITUUS],vali2[PITUUS],vali3[PITUUS];

printf("Anna merkkijono\n");
fgets(jono1, PITUUS,stdin);

printf("Anna merkkijono\n");
fgets(jono2, PITUUS,stdin);

printf("Anna merkkijono\n");
fgets(jono3, PITUUS,stdin);

valilyonti(jono1, vali1); //Jono 1 tulostus
printf("%s",vali1);

valilyonti(jono2,vali2); //Jono 2 tulostus
printf("%s",vali2);

valilyonti(jono3,vali3); //Jono 3 tulostus
printf("%s",vali3);

// asd asd\n\0

return 0;

}

void valilyonti(char *array, char *array2) //Funktion valilyönnin poistoon.
{
    
for (int i = 0, j=0; i < strlen(array); i++,j++) {
    printf("%s\n", "ping");
    if (array[i] != ' ') {
        array2[j] = array[i];
    printf("%s\t%s\n\n",array,array2);
    }
    else
    j--;
    
}

// for (int i = 0; i < PITUUS; i++) {
   // if (array[i] != ' ') {
  //      array2[i] = array[i];

  //print_r(array_map('trim',array_filter(jono1)));
    }
#include <stdio.h>
#include<string.h>
void etsiMerkkijonoAlusta(char *array, char *array1 , char *array2);

//strcmp()
int main(void) {
    
    char mjono1[100];
    char mjono2[100];
    char loydetty[10];
    
printf("Anna merkkijono1>\n");
scanf("%s",mjono1);
printf("Anna merkkijono2>\n");
scanf("%s",mjono2);


    etsiMerkkijonoAlusta(mjono1, mjono2, loydetty); 
    printf("%s", loydetty);
    
    return 0;
}



void etsiMerkkijonoAlusta(char *array, char *array1 , char *array2) {
    
    for (int i = 0; i < strlen(array); i++)
    {
        if(strcmp(&array[i],&array1[i])==0);
        array2[i]=array[i];

    }
    

}
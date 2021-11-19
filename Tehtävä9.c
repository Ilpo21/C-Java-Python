#include <stdio.h>
int main(void)
{
    // ilmoita 10 lukua ja kerro niistä suurin muodossa "suurin syottamasi luku oli"
    int luku[10];
    int i;
    int suurin;
    printf("Anna 10 lukua >");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &luku[i]);
    }
    suurin = luku[0];
    for (i = 0; i < 10; i++)
    {
        if (luku[i] > suurin)
        {
            suurin = luku[i];
        }
    }
    printf("Suurin syottamasi luku oli %d", suurin);
    return 0;
}

#include <stdio.h>
void seteli(int seteli, int *viisi, int *kaksi) // funktio kotitehtävä 5. laskee halutut määrät 20 ja 50 seteleitä.
{
    int viis;
    *viisi = seteli / 50 - (seteli > 50 && seteli % 50 % 20);
    viis = *viisi;
    *kaksi = (seteli - viis * 50) / 20;
    // ei tarvi return koksa & on scanf
}
int main(void)
{
    int c, nosto;
    printf("nosto");
    scanf("%d", &nosto); //130

    int viisi, kaksi;
    seteli(nosto, &viisi, &kaksi); //funktio kutsu  & toimii scanf tyylillä.
    printf("\nOle hyva ja poista kortti.\nOta rahasi.\n%d kpl 20 euroa ja %d kpl 50 euroa", kaksi, viisi);
    for (int i = 0; i < 10; i++)
    {
        //koodia perkele
        if (i < 10)
        {
            //koodia perkele
        }
    }

    return 0;
}

#include <stdio.h>

void seteli(int seteli, int *viisi, int *kaksi)
{
    int viis;
    *viisi = seteli / 50;
    viis = *viisi;
    viis = viis - (seteli > 50 && seteli % 50 % 20);
    *kaksi = (seteli - viis * 50) / 20;
}
int main(void)
{
    int nosto, viisi, kaksi;
    printf("nosto");
    scanf("%d", &nosto);

    seteli(nosto, &viisi, &kaksi);
    printf("%d kaksi ja %d viisi", kaksi, viisi);

    return 0;
}
void seteli(int seteli, int *viisi, int *kaksi)
{
    int viiskymmpi;
    int kakskymppi;
    int summa;
    viiskymmpi = summa / 50;
    viiskymmpi = viiskymmpi - (summa > 50 && summa % 50 % 20);
}

#include <stdio.h>

int paivienLukumaaraKuukaudessa(int kk);

int main(void)
{
    int KK;
    int a, b;
    int z;
    printf("Anna kuukausi:\n");
    scanf("%d", &a);
    b = paivienLukumaaraKuukaudessa(a);

    if (b > 0)
    {
        printf("Kuukaudessa %d on %d paivaa", a, b);
    }
    else
        printf("Kuukautta %d ei ole olemassa", a);
}

int paivienLukumaaraKuukaudessa(int KK)
{

    if (KK == 1 || KK == 3 || KK == 5 || KK == 7 || KK == 8 || KK == 10 || KK == 12)
    {
        return 31; // ne misä 31
    }

    else if (KK == 4 || KK == 6 || KK == 9 || KK == 11)
    {
        return 30; // loput
    }

    else if (KK == 2)
    {
        return 28; // helmikuu
    }

    else
    {
        return 0; // Jos luku o väärä
    }
}
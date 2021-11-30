#include <stdio.h>
int main(void)
{
    int a;
    int sum = 0;
    int r;
    int org;
    // 1221->1->2->2->1          0*10+1=1->1*10+2=12->12*10+2=122->122*10+1=1221
    printf("Anna 5 numeroa>"); //                                               0*10+1->0+1=1->1*10+2->10+2
    scanf("%d", &a);

    org = a; //tallennetaan originaali
    while (a > 0)
    {
        r = a % 10;         //otetaan jakojäännöst siirretään se seuraavaan lausekkeeseen
        sum = sum * 10 + r; // summassa tallennettuna 0 jolloin tilalle tulee jakojäännös.  -------> toisella kerralla sum on tallessa ei 0 vaan jakojäännös.
        a = a / 10;         //tallennetaan jäljelle jääneet luvut tänne ja loop alkaa alusta.        1221/10=122.1
    }
    a = org;
    if (a < 10000)
    {
        printf("Syote ei ole viisinumeroinen positiivinen");
    }
    else if (a == sum)
    {
        printf("Luku %d on palindromi", a);
    }

    else
        printf("Luku %d ei ole palindromi", a);

    return 0;
}
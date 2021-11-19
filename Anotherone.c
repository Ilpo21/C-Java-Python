#include <stdio.h>
int main(void)
{
    int a;
    int sum = 1;
    int r;
    int org;
    int z = 1;
    // 1221->1->2->2->1          0*10+1=1->1*10+2=12->12*10+2=122->122*10+1=1221
    printf("Anna 5 numeroa"); //                                               0*10+1->0+1=1->1*10+2->10+2
    scanf("%d", &a);

    org = a; //tallennetaan originaali
    while (a > 0)
    {
        r = a % 10;
        sum = z * r;
        a = a / 10;
        z = z * 2;
    }
    a = org;
    if (a == sum)
    {

        printf("Luku %d on palindromi", sum);
    }
    else
        printf("Luku %d ei ole palindromi", sum);
    return 0;
}

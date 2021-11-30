#include <stdio.h>
int main()
{

    int a, b, c;

    printf("\nAnna pinkoodi: "); //pin koodi tsydeemi
    scanf("%d", &a);
    if (a < 1000)
    {
        printf("\nPin koodi väärin");
        return 0;
    }
    else if (a > 10000)
    {
        printf("\nPin koodi väärin");
        return 0;
    }

    else
    {
        printf("\nPin koodi oikein");
    }
    printf("\nValitse haluamasi palvelu\n1\tNosto\n2\tSaldo\n3\tTapahtumat\n:"); //mitä ne haluaa tehä
    scanf("%d", &b);

    if (b == 1) //NOSTO
    {
        printf("\nValitse haluamasi summa:\n20\t100\n40\t120\n60\t140\n80\t240\n:");
        scanf("%d", &c);
        if (c <= 240)
        {
            printf("\nOle hyva ja poista kortti.\nOta rahasi.");
            return 0;
        }
    }
    else if (b == 2) //SALDO
    {
        printf("Saldosi on XXXX.XX euroa\n Nostettavissa XXX.XX euroa");
        return 0;
    }
    else if (b == 3) //TAPAHTUMAT
    {
        printf("\nNosto\t240 euroa\nK-market\t44.36 euroa\nS-market\t39.79 euroa");
        return 0;
    }
}
#include <stdio.h>

int pankkilaskuri(int raha);
int main(void)
{

    int a, b, c;
    int valinta;
    int tili = 3000;
    int nosto;
    int laitto;
    printf("\nAnna pinkoodi: "); // pin koodi tsydeemi
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

loop:
    printf("\nValitse haluamasi palvelu\n1\tSaldo\n2\tNosto\n3\tTapahtumat\n4\tLopeta\n:"); // mitä ne haluaa tehä
    scanf("%d", &valinta);

    switch (valinta)
    {
    case 1: // SALDO
        c = pankkilaskuri(c);
        printf("\n Sinun Balanssi on: %d ", c);
        break;
    case 2:                                                                          // NOSTO
        printf("\nValitse haluamasi summa:\n20\t100\n40\t120\n60\t140\n80\t240\n:"); // Noston summa
        scanf("%d", &nosto);
        if (nosto > tili)
        {
            printf("\n Tililla epapateva summa");
        }
        else
        {
            c = pankkilaskuri(nosto);
            printf("\nOle hyva ja poista kortti.\nOta rahasi.");
            printf("\n Nykyinen balanssi on:%d", c);
        }
        break;
    case 3: // Tapahtumat
        printf("\nNosto\t240 euroa\nK-market\t44.36 euroa\nS-market\t39.79 euroa");
        break;
    case 4:
        printf("");
        break;
    default: // Antaa väärän luvun
        printf("\nEi mahdollista");
    }

    printf("\nKiitos automaatin kaytosta"); // Lopetus
    return 0;
}

int pankkilaskuri(int raha) // laskuri nostoa varten
{
    int tili = 3000;
    tili = tili - raha;
    return tili;
}
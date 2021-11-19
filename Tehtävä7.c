#include <stdio.h>

int main(void)

{
    int arvosana;
    printf("Anna pisteet>\n");
    scanf("%d", &arvosana);

    if (arvosana == 0)
    {
        printf("hylatty");
    }
    else if (arvosana == 1)
        printf("Hylatty");

    else if (arvosana == 2)
        printf("Hylatty");

    else if (arvosana == 3)
        printf("Hylatty");

    else if (arvosana == 4)
        printf("Hylatty");

    else if (arvosana == 5)
        printf("Hylatty");

    else if (arvosana == 6)
        printf("Hylatty");

    else if (arvosana == 7)
        printf("Hylatty");

    else if (arvosana == 8)
        printf("Hylatty");

    else if (arvosana == 9)
        printf("Hylatty");

    else if (arvosana == 10)
        printf("Hylatty");

    else if (arvosana == 11)
        printf("Hylatty");

    else if (arvosana == 12)
        printf("1");

    else if (arvosana == 13)
        printf("1");

    else if (arvosana == 14)
        printf("2");

    else if (arvosana == 15)
        printf("2");

    else if (arvosana == 16)
        printf("2");

    else if (arvosana == 17)
        printf("3");

    else if (arvosana == 18)
        printf("3");

    else if (arvosana == 19)
        printf("3");

    else if (arvosana == 20)
        printf("4");

    else if (arvosana == 21)
        printf("4");

    else if (arvosana == 22)
        printf("4");

    else if (arvosana == 23)
        printf("5");

    else if (arvosana == 24)
        printf("5");

    else if (arvosana > 24)
        printf("Virheellinen pistemaara");

    else if (arvosana < 0)
        printf("Virheellinen pistemaara");

    return 0;
}
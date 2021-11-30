#include <stdio.h>
int main(void)

{
    int pisteet;
    int arvosana;

    printf("Syötä saadut pisteet >");
    scanf("%d", &pisteet);

    switch (pisteet)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        printf("Hylatty");
        break;

    case 60:
    case 80:
        printf("Hylatty");
        break;

    case 100:
        printf("Hylatty");
        break;

    default:
        printf("Hylatty");
        break;
    }
    printf("\n", pisteet);
    return 0;
}
for (i = 0; i < count; i++)
{
    /* code */
}

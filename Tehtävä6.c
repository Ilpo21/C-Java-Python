#include <stdio.h>
int main(void)

{
    int luku1;
    int luku2;
    int tulos;

    printf("Anna luku 1 >");
    scanf("%d", &luku1);
    printf("Anna luku 2 >");
    scanf("%d", &luku2);

    tulos = luku1 % luku2;

    if (tulos > 0)
    {
        printf("Luku %d ei ole luvun %d monikerta.", luku1, luku2);
    }
    else
        printf("Luku %d on luvun %d monikerta.", luku1, luku2);

    return 0;
}
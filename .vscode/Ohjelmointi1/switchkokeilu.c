#include <stdio.h>

int main()
{
    char c;
    char z;
xx:
    c = getch();
    switch (c)
    {
    case 17:
        printf("1");
        break;

    case 19:
        printf("2");
        break;

    default: // loop to get the right "case"
        printf("jatkaa y/n");
        scanf("%c", z);
        if (z == "y")
        {
            goto xx;
        }
        else
        {
            break;
        }
    }

    return 0;
}
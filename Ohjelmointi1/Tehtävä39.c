#include <stdio.h>
void main()
{
    int arr[20];
    int i;
    int a, b, c;
    int lasku;

    for (i = 1; i < 21; i++)
    {
        printf("Syota %d. luku> ", i);
        scanf("%d", &a);
        if (a > 10 && a < 100)
        {
            arr[i] = a;
        }
        else
        {
            printf("Ei kelpaa!");
            printf("Yrita uudelleen:");
            scanf("%d", &arr[i]);
        }
    }
    for (i = 1; i < 21; i++)
    {
        lasku = 0;
        for (a = 1; a < 21; a++)
        {
            if (arr[i] == arr[a])
            {
                lasku++;
            }
        }
        if (lasku == 1)
        {
            printf("\n%d ", arr[i]);
        }
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    int numerot;
    printf("N\t10*N\t100*N\t1000*N\n\n"); //onko hyväksyttyä käyttää näin printtejä? ei oman ymmärryksen mukaan ole kovakoodaamista.
    for (numerot = 1; numerot <= 10; numerot++)
    {
        printf("%d\t%d\t%d\t%d\n", numerot, numerot * 10, numerot * 100, numerot * 1000);
    }
    return 0;
}
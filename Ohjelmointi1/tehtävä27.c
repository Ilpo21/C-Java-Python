#include <stdio.h>
#include <time.h>
#include <math.h>
int sekuntimuunnos(int t, int m, int s);

int main(void)
{
    int aika1, aika2, aika3, aika4, aika5, aika6;

    int kello1, kello2, kello3, kello4, kello5, kello6;

    int t, m, s;

    int a;

    int x, y, z;

    int sekuntit1, sekuntit5 = 0, sekuntit2, sekuntit3, sekuntit4;

    printf("\nAnna tunnit: ");
    scanf("%d", &t);

    printf("\nAnna minuutit: ");
    scanf("%d", &m);

    printf("\nAnna sekunnit: ");
    scanf("%d", &s);
    sekuntit1 = sekuntimuunnos(t, m, s);

    printf("\nAnna tunnit: ");
    scanf("%d", &t);

    printf("\nAnna minuutit: ");
    scanf("%d", &m);

    printf("\nAnna sekunnit: ");
    scanf("%d", &s);
    sekuntit2 = sekuntimuunnos(t, m, s);

    sekuntit3 = abs(sekuntit1 - sekuntit2);

    printf("Aikaero on: %d sekuntia\n", sekuntit3);

    x = (sekuntit3 / 3600);

    y = (sekuntit3 - (3600 * x)) / 60;

    z = (sekuntit3 - (3600 * x) - (y * 60));

    printf("\nAika on %d tuntia %d minuuttia %d sekuntia", x, y, z);

    return 0;
}
int sekuntimuunnos(int t, int m, int s)
{
    int x;

    int aika1, aika2, aika3, aika4, aika5, aika6;

    aika1 = t * 60 * 60;
    aika2 = m * 60;
    aika3 = s;

    return (aika1 + aika2 + aika3);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char jono1[50];
    char jono2[50];
    char jono3[50];
    char jono[200];
    char jonov[200] = {};
    int counta, countb, countc, countd, counte, countf, countg, counth, counti, countj, countk, countl, countm, countn, counto, countp, countq, countr, counts, countt, countu, countv, countw, countx, county, countz;
    int i;

    printf("\nAnna 1. rivi >\n");
    fgets(jono1, 50, stdin);
    printf("\nAnna 2. rivi >\n");
    fgets(jono2, 50, stdin);
    printf("\nAnna 3. rivi >\n");
    fgets(jono3, 50, stdin);

    for (i = 0; jono1[i]; i++)
    {
        if (jono1[i] == 'a' || jono1[i] == 'A')
        {
            counta++;
        }
        else if (jono1[i] == 'b' || jono1[i] == 'A')
        {
            countb++;
        }
        else if (jono1[i] == 'c' || jono1[i] == 'A')
        {
            countc++;
        }
        else if (jono1[i] == 'd' || jono1[i] == 'A')
        {
            countd++;
        }
        else if (jono1[i] == 'e' || jono1[i] == 'A')
        {
            counte++;
        }
        else if (jono1[i] == 'f' || jono1[i] == 'A')
        {
            countf++;
        }
        else if (jono1[i] == 'g' || jono1[i] == 'A')
        {
            countg++;
        }
        else if (jono1[i] == 'h' || jono1[i] == 'A')
        {
            counth++;
        }
        else if (jono1[i] == 'i' || jono1[i] == 'A')
        {
            counti++;
        }
        else if (jono1[i] == 'j' || jono1[i] == 'A')
        {
            countj++;
        }
        else if (jono1[i] == 'k' || jono1[i] == 'A')
        {
            countk++;
        }
        else if (jono1[i] == 'l' || jono1[i] == 'A')
        {
            countl++;
        }
        else if (jono1[i] == 'm' || jono1[i] == 'A')
        {
            countm++;
        }
        else if (jono1[i] == 'n' || jono1[i] == 'A')
        {
            countn++;
        }
        else if (jono1[i] == 'o' || jono1[i] == 'A')
        {
            counto++;
        }
        else if (jono1[i] == 'p' || jono1[i] == 'A')
        {
            countp++;
        }
        else if (jono1[i] == 'q' || jono1[i] == 'A')
        {
            countq++;
        }
        else if (jono1[i] == 'r' || jono1[i] == 'A')
        {
            countr++;
        }
        else if (jono1[i] == 's' || jono1[i] == 'A')
        {
            counts++;
        }
        else if (jono1[i] == 't' || jono1[i] == 'A')
        {
            countt++;
        }
        else if (jono1[i] == 'u' || jono1[i] == 'A')
        {
            countu++;
        }
        else if (jono1[i] == 'v' || jono1[i] == 'A')
        {
            countv++;
        }
        else if (jono1[i] == 'w' || jono1[i] == 'A')
        {
            countv++;
        }
        else if (jono1[i] == 'x' || jono1[i] == 'A')
        {
            countx++;
        }
        else if (jono1[i] == 'y' || jono1[i] == 'A')
        {
            county++;
        }
        else if (jono1[i] == 'z' || jono1[i] == 'A')
        {
            countz++;
        }
    }

    printf("A   %d\nB   %d\nC   %d\nD   %d\nE   %d\nF   %d\nG   %d\nH   %d\nI   %d\nJ   %d\nK   %d\nL   %d\nM   %d\nN   %d\nO   %d\nP   %d\nQ   %d\nR   %d\nS   %d\nT   %d\nU   %d\nV   %d\nW   %d\nX   %d\nY   %d\nZ", counta, countb, countc, countd, counte, countf, countg, counth, counti, countj, countk, countl, countm, countn, counto, countp, countq, countr, counts, countt, countu, countv, countw, countx, county, countz);
    return 0;
}

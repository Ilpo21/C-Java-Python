#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
int i, j, k = 0, c = 0, len, lukumaara[26];
int lukumaara1[26];
int lukumaara2[26];
int lukumaara3[200];
char jono[30];
char jono1[30];
char jono2[30];


printf("Enter a string : ");
gets(jono);
len = strlen(jono);

for(i = 0; i < 26; i++)
lukumaara[i] = 0;

for(i = 65; i < 90; i++)
{
for(j = 0; j < len; j++)
{
if(jono[j] == toupper(i) || jono[j] == tolower(i))
lukumaara[k] = ++c;
}

k++;
c=0;
}

printf("Enter a string : ");
gets(jono1);
len = strlen(jono1);
k=0;
for(i = 0; i < 26; i++)
lukumaara1[i] = 0;

for(i = 65; i < 90; i++)
{
for(j = 0; j < len; j++)
{
if(jono1[j] == toupper(i) || jono1[j] == tolower(i))
lukumaara1[k] = ++c;
}

k++;
c=0;
}
 for ( i = 0; i < 26; i++)
 {
     if(lukumaara[i]!=0)
{
     lukumaara3[i]+=lukumaara[i];}
 }
 
for ( i = 0; i < 26; i++)
 {
     if(lukumaara1[i]!=0)
     lukumaara3[i] +=lukumaara1[i];
 }

printf("\n");
for(i = 65; i < 90; i++)

printf("%c ",i);
printf("\n");

for(i = 0; i < 300; i++)
{
printf("%d ",lukumaara3[i]);}
return 0;
}
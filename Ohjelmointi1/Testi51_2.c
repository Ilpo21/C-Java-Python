#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
int i, j, k = 0, c = 0, len, count[26];
char jono[30];
printf("Enter a string : ");
gets(jono);
len = strlen(jono);

for(i = 0; i < 26; i++)
count[i] = 0;

for(i = 65; i < 90; i++)
{
for(j = 0; j < len; j++)
{
if(jono[j] == toupper(i) || jono[j] == tolower(i))
count[k] = ++c;
}

k++;
c=0;
}

printf("\n");
for(i = 65; i < 90; i++)

printf("%c ",i);
printf("\n");

for(i = 0; i < 25; i++)

printf("%d ",count[i]);
return 0;
}
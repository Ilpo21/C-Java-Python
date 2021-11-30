#include <stdio.h>
int main(void)
{
//Suunnittele ja toteuta ohjelma, jossa lasketaan työntekijällle maksettava palkka tehtyjen tuntien ja tuntipalkan perusteella 
//ja palkasta perittävän veron määrän. Tuntipalkka, tehtyjen tuntien määrä, ja veroprosentti kysytään käyttäjältä. 
//Lisäksi 40 tuntia ylittäviltä tunneista maksetaan palkkaa 1.5. kertaisena. 
//Ohjelma tulostaa työntekijän ja verottajan osuudet, käytä reaalilukuja (double).

double tunnit;
double tuntipalkka;
double veroprosentti;
double bruttopalkka;
double nettopalkka;
double prosentit;


printf("tuntipalkka>");
scanf("%lf", &tuntipalkka);
printf("Tehdyt tunnit>");
scanf("%lf", &tunnit);
printf("veroprosentti>");
scanf("%lf", &veroprosentti);

if (40<tunnit)

{
    double tunnit2;
    double brutto2;
    double netto2;
    double brutto;
    double netto;
    double oikea1;
    double verottaja;
    

    ;tunnit2 = tunnit - 40
    ;brutto2 = tunnit2 * (tuntipalkka * 1.5)
    ;netto2 = brutto2 * veroprosentti/100
    ;brutto = 40 * tuntipalkka 
    ;netto = brutto * veroprosentti/100
    ;oikea1 = netto + netto2
    ;verottaja = (brutto2 - netto2) +(brutto - netto)

    ;printf("Nettopalkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa", verottaja , oikea1);
    ;return 0




;}
else 


{
  
    ;bruttopalkka = tunnit * tuntipalkka

    ;nettopalkka = (veroprosentti/100.00) * bruttopalkka
    ;prosentit = bruttopalkka - nettopalkka
    //bruttopalkka = tunnit * tuntipalkka
    //nettopalkka = (veroprosentti/100.0) * bruttopalkka

    ;printf("Nettopalkasi on %.2lf euroa ja verottajan osuus on %.2lf euroa", prosentit , nettopalkka)
    ;return 0

    //prosentti = bruttopalkka - nettopalkka

;}


return 0;




};
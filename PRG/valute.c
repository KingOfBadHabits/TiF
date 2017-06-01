#include <stdio.h>
/* Vjezba s grananjem
 * pretvorba valute
 * eur --> hrk i hrk --> eur
 *
 * AUTOR: Tin Sucevic
 * Datum: 13/10/2016
 */
int main()
{
    int izbor;
    float konst,eur,hrk;
    konst = 7.503;                          //konstanta za pretvorbu eur u hrk i suprotno
    printf("Izaberite smjer pretvorbe\n");  //izbornik
    printf("    1. hrk --> eur\n");         //za pretvorbu kuna u eure
    printf("    2. eur --> hrk\n");         //za pretvorbu euri u kune
    printf("Izbor: ");
    scanf("%d",&izbor);                     //unos izbora
    if (izbor==1)                           //provjera je li izabrana stavka 1
    {
        printf("Koliko kuna?\n");
        scanf("%f",&hrk);
        eur = hrk/konst;                    //pretvorba valute
        printf("To je %.2f eur",eur);
    }
    else if (izbor==2)                      //provjera je li izabrana stavka 1
    {
        printf("Koliko eura?\n");
        scanf("%f",&eur);
        hrk = eur*konst;                    //pretvorba valute
        printf("To je %.2f hrk",hrk);
    }
    return 0;
}

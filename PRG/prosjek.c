#include <stdio.h>

int main()
{
    int a,b,c,d,e,br;
    double prosjek;
    br=0;

    printf("\na=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    printf("\nd=");
    scanf("%d",&d);
    printf("\ne=");
    scanf("%d",&e);

    prosjek = (a+b+c+d+e)/5;

    if (a < prosjek) {br++;}
    if (b < prosjek) {br++;}
    if (c < prosjek) {br++;}
    if (d < prosjek) {br++;}
    if (e < prosjek) {br++;}

    printf("\n%d je ispod prosjeka, a %d je iznad",br,5-br);
    printf("\n%lf je prosjek",prosjek);
}

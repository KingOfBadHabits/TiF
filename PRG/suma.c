#include <stdio.h>
int main ()
{
    int a=0,b=0,c=0,d=0,x=0;

    printf("Od kojeg broja zbrajamo? ");scanf("%d",&a);
    printf("Do kojeg broja zbrajamo? ");scanf("%d",&b);
    printf("S kojim dijelimo? ");scanf("%d",&c);

    for(a;a<=b;a++)
    {
        if(a%c==0)
        {
            d++;
            x+=a;
        }
    }

    printf("Ima %d brojeva koji su dijeljivi sa %d, a njihov zbroj je %d",d,c,x);
}

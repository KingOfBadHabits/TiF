#include <stdio.h>
void main()
{
    double a,b,c,s;

    printf("Do kojeg broja da racunam? ");scanf("%lf",&b);
    printf("Kojim korakom? ");scanf("%lf",&c);

    printf("     x\t\t\ts");
    for (a=0;a<=b;a+=c)
    {
        s = a - pow(a,3)/6 + pow(a,5)/120 - pow(a,7)/5040;
        printf("\n%8.2lf \t %12.5lf",a,s);
    }
}

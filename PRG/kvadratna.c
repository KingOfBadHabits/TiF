#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,D,x1,x2;

    /*
    printf("\na = ");
    scanf("%lf",&a);
    printf("\nb = ");
    scanf("%lf",&b);
    printf("\nc = ");
    scanf("%lf",&c);
    */
    a = 1;
    b = 0;
    c = 1;

    D = b*b - 4*a*c;

    if (D>0)
    {
        x1 = 1/(2*a)*(-b+sqrt(D));
        x2 = 1/(2*a)*(-b-sqrt(D));
        printf("x1 = %lf\nx2 = %lf",x1,x2);
    }
    else if (D==0)
    {
        x1 = 1/(2*a)*(-b+sqrt(D));
        x2 = x1;
        printf("x1 = %lf\nx2 = %lf",x1,x2);
    }
    else if (D<0)
    {
        D = D*-1;
        x1 = 1/(2*a)*(-b+sqrt(D));
        x2 = 1/(2*a)*(-b-sqrt(D));
        printf("x1 = %lf\nx2 = %lf",x1,x2);
    }
    return 0;
}

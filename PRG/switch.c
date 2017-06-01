#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main()
{
    int izb;
    double a,b,c,r,o,p;
    printf("IZBORNIK\n 1. Krug\n 2. Trokut\n 3. Cetverokut\n");
    scanf("%d",&izb);
    switch (izb)
    {
        case 1:
            printf("\nr = ");
            scanf("%lf",&r);

            o = 2*r*PI;
            p = r*r*PI;

            printf("\nOpseg = %lf",o);
            printf("\nPovrsina = %lf",p);
            break;
        case 2:
            printf("\na = ");
            scanf("%lf",&a);
            printf("\nb = ");
            scanf("%lf",&b);
            printf("\nc = ");
            scanf("%lf",&c);

            o = a+b+c;
            p = sqrt((o/2)*((o/2)-a)*((o/2)-b)*((o/2)-c));

            printf("\nOpseg = %lf",o);
            printf("\nPovrsina = %lf",p);
            break;
        case 3:
            printf("\na = ");
            scanf("%lf",&a);
            printf("\nb = ");
            scanf("%lf",&b);

            o = 2*a + 2*b;
            p = a*b;

            printf("\nOpseg = %lf",o);
            printf("\nPovrsina = %lf",p);
            break;
    }
    return 0;
}

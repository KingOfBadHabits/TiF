#include <stdio.h>
#include <conio.h>

double oplosje(double a);
double volumen(double a);
double dijagonala(double a);
void grafika(double a);

int main()
{
    double a;
    int izbor=0;

    printf("a = ");scanf("%lf", &a);
    while (izbor!=5)
    {
        do
        {
            printf("############\n##IZBORNIK##\n1) Raèunanje oplošja\n2) Raèunanje volumena\n3) Raèunanje prostorne dijagonale\n4) Grafièki prikaz\n5) Novi a\n6) KRAJ\n Broj izbora: ");
            izbor=getch();
            printf("izbor: %d",izbor);
        }while(izbor>6);
        switch (izbor)
        {
            case 1: printf("%lf",oplosje(a));
                break;
            case 2: printf("%lf",volumen(a));
                break;
            case 3: printf("%lf",dijagonala(a));
                break;
            case 4: grafika(a);
                break;
            case 5: printf("a = ");scanf("%lf", a);
                break;
            default: break;
        }
    }
}

double oplosje(double a)
{
    double o;
    o = (a*a)*6;
    return 0;
}

double volumen(double a)
{
    double v;
    v = a*a*a;
    return v;
}

double dijagonala(double a)
{
    double D;
    D = a*sqrt(3);
    return D;
}
void grafika(double a)
{
    double D,o,v;
    D = dijagonala(a);
    o = oplosje(a);
    v = volumen(a);
}

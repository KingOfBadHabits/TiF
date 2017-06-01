#include <stdio.h>
#include <conio.h>
#include <BGIgraphics.h>
#include <math.h>

double oplosje(double a);
double volumen(double a);
double dijagonala(double a);
void grafika(double a);

int main()
{
    double a;
    int izbor=0;

    initwindow(600,400);

    printf("a = ");scanf("%lf", &a);
    while (izbor!=5)
    {
        do
        {
            printf("############\n##IZBORNIK##\n1) Raèunanje oplošja\n2) Raèunanje volumena\n3) Raèunanje prostorne dijagonale\n4) Grafièki prikaz\n5) Novi a\n6) KRAJ\n Broj izbora: ");
            scanf("%d",&izbor);
            printf("izbor: %d\n",izbor);
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
    getch();
    closegraph();
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
    int wx=600;
    int wy=400;
    int x[]= {200,400,400,200};
    int y[]= {325,325,75,75};
    int tx= 86;
    int ty= 50;
    int i;
    int x0=200;
    int y0=150;

    D = dijagonala(a);
    o = oplosje(a);
    v = volumen(a);

    //prednja strana kocke
    moveto(x0,y0);
    for(i=1;i<=5;i++)
    {
        lineto(x[i], y[i]);
    }
    //straznja strana kocke
    moveto(x0+tx,y0+ty);
    for(i=1;i<=3;i++)
    {
        lineto(x[i]+tx, y[i]+ty);
    }
    //kose linije na kocki
    for(i=0;i<=3;i++)
    {
        line(x[i],y[i],x[i]+tx,y[i]+ty);
    }
    //prostorna dijagonala
    line(x[3],y[3],x[1]+tx,y[1]+ty);

}

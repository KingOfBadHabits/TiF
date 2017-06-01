#include <stdio.h>
#include <BGIgraphics.h>

int main()
{
    int wx=500,wy=500;
    double a,b,c;
    double Xt,Yt,x,y,D,i;
    double pomak;

    a=-0.05;
    b=0;
    c=1;
    pomak = 50;

    initwindow(wx,wy);

    D = (b*b) - (4*a*c);
    Xt = -b/(2*a);
    Yt = -D/(4*a);
    i = 0;

    do{
        x = Xt - pomak + i;
        y = (a*x*x+b*x+c);
        if (i==0) moveto(wx/2+x,wy/5-y);
        else lineto(wx/2+x,wy/5-y);
        printf("\n x=%8.3lf   y=%8.3lf",x,y);

        i=i+1;
    }while (x<Xt+pomak);

    getch();
    closegraph();
    return 0;
}

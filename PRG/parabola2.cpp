#include <stdio.h>
#include <BGIgraphics.h>
#include <math.h>

float g = 9.81;
float pi = 3.1415926;

int main()
{
    float V0, alfa, D, T, alfaRad;
    float dt, t, mj;
    float cosAlfa, sinAlfa;
    int Xg, Yg;
    int X0g = 30, Y0g = 50;
    int wx = 800,wy = 400;

    printf("Koja je brzina?");scanf("%f",&V0);
    printf("Koliki je kut lansiranja?");scanf("%f",&alfa);

    alfaRad = alfa * 180/pi;

    cosAlfa = cos(alfaRad);
    sinAlfa = sin(alfaRad);

    dt = 0.1;

    D = (V0*V0+sin(2*alfaRad))/g;
    T = (2*V0*sin(alfaRad))/g;

    mj = D/wx-2*X0g;

    initwindow(wx,wy);

    t = 0;
    do{
        Xg = X0g + (V0*cosAlfa*t)*mj;
        Yg = Y0g - (V0*sinAlfa*t-g/2*t*t)*mj;

        circle(Xg,Yg,5);

        t+=dt;
    }while(t<T);

    getch();
    closegraph();

    return 0;
}
